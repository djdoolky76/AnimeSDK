#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJLHCIDDFDF;
namespace System { class Object; }

#define OJLHCIDDFDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8AA10)
#define OJLHCIDDFDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8AA50)
#define OJLHCIDDFDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE8AA60)

	class OJLHCIDDFDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C_CTOR_OFFSET))(this);
		}

		::OJLHCIDDFDF* __cctor_b__28_0()
		{
			return ((::OJLHCIDDFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLHCIDDFDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
