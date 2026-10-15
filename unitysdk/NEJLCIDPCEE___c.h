#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJLCIDPCEE;
namespace System { class Object; }

#define NEJLCIDPCEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACA090)
#define NEJLCIDPCEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACA0D0)
#define NEJLCIDPCEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EACA0E0)

inline static constexpr unsigned int NEJLCIDPCEE___c_TypeDefinitionIndex = 34575;

	class NEJLCIDPCEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJLCIDPCEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE___C_CTOR_OFFSET))(this);
		}

		::NEJLCIDPCEE* __cctor_b__28_0()
		{
			return ((::NEJLCIDPCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLCIDPCEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
