#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGJJHFIPCNB;
namespace System { class Object; }

#define EGJJHFIPCNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E295F20)
#define EGJJHFIPCNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E295F60)
#define EGJJHFIPCNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E295F70)

	class EGJJHFIPCNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGJJHFIPCNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB___C_CTOR_OFFSET))(this);
		}

		::EGJJHFIPCNB* __cctor_b__28_0()
		{
			return ((::EGJJHFIPCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGJJHFIPCNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
