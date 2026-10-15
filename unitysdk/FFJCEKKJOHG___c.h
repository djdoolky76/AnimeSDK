#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFJCEKKJOHG;
namespace System { class Object; }

#define FFJCEKKJOHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E370A40)
#define FFJCEKKJOHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E370A80)
#define FFJCEKKJOHG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E370A90)

	class FFJCEKKJOHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFJCEKKJOHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG___C_CTOR_OFFSET))(this);
		}

		::FFJCEKKJOHG* __cctor_b__38_0()
		{
			return ((::FFJCEKKJOHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFJCEKKJOHG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
