#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILLBJPOBLLK;
namespace System { class Object; }

#define ILLBJPOBLLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0850)
#define ILLBJPOBLLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0890)
#define ILLBJPOBLLK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6B08A0)

	class ILLBJPOBLLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILLBJPOBLLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLBJPOBLLK___C_CTOR_OFFSET))(this);
		}

		::ILLBJPOBLLK* __cctor_b__23_0()
		{
			return ((::ILLBJPOBLLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLBJPOBLLK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
