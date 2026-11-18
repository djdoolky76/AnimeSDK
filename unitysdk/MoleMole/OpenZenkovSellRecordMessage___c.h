#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x135C6830)
#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x135C6870)
#define MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__ONPROCESS_B__3_0_OFFSET UNITYSDK_OFFSET(0x135C6880)

namespace MoleMole
{
	inline static constexpr unsigned int OpenZenkovSellRecordMessage___c_TypeDefinitionIndex = 80130;

	class OpenZenkovSellRecordMessage___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OpenZenkovSellRecordMessage___c_TypeDefinitionIndex)->GetStaticField(0x4C1A0);
		}
		static ::System::Action** StaticGet___9__3_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OpenZenkovSellRecordMessage___c_TypeDefinitionIndex)->GetStaticField(0x4C1A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_OPENZENKOVSELLRECORDMESSAGE___C__ONPROCESS_B__3_0_OFFSET))(this);
		}
	};
}
