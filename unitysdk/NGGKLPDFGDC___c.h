#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGGKLPDFGDC;
namespace System { class Object; }

#define NGGKLPDFGDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0E4B0)
#define NGGKLPDFGDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0E4F0)
#define NGGKLPDFGDC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EB0E500)

	class NGGKLPDFGDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C_CTOR_OFFSET))(this);
		}

		::NGGKLPDFGDC* __cctor_b__33_0()
		{
			return ((::NGGKLPDFGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
