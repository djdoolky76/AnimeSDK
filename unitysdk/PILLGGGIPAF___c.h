#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PILLGGGIPAF;
namespace System { class Object; }

#define PILLGGGIPAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6D3B0)
#define PILLGGGIPAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6D3F0)
#define PILLGGGIPAF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF6D400)

	class PILLGGGIPAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILLGGGIPAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF___C_CTOR_OFFSET))(this);
		}

		::PILLGGGIPAF* __cctor_b__33_0()
		{
			return ((::PILLGGGIPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILLGGGIPAF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
