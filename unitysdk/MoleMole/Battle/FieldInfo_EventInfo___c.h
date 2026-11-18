#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/FieldInfo_EventInfo_K_Count.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_DDFPGILDJBA_OFFSET UNITYSDK_OFFSET(0x131BA590)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_EHNHBMFJGHD_OFFSET UNITYSDK_OFFSET(0x131BA5B0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_IPBJCFJJMPE_OFFSET UNITYSDK_OFFSET(0x131BA5D0)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131BA540)
#define MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131BA580)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int FieldInfo_EventInfo___c_TypeDefinitionIndex = 42134;

	class FieldInfo_EventInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x419E0);
		}
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x419E8);
		}
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x419F0);
		}
		static ::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::MoleMole::Battle::FieldInfo_EventInfo_K_Count>**)Il2CppClass::FromTypeDefinitionIndex(FieldInfo_EventInfo___c_TypeDefinitionIndex)->GetStaticField(0x419F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 DDFPGILDJBA(::MoleMole::Battle::FieldInfo_EventInfo_K_Count EJCBEJMGFAJ, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_DDFPGILDJBA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}

		::System::Int32 EHNHBMFJGHD(::MoleMole::Battle::FieldInfo_EventInfo_K_Count DPGFPHIMDEL, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_EHNHBMFJGHD_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}

		::System::Int32 IPBJCFJJMPE(::MoleMole::Battle::FieldInfo_EventInfo_K_Count EJCBEJMGFAJ, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count, ::MoleMole::Battle::FieldInfo_EventInfo_K_Count))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_FIELDINFO_EVENTINFO___C_IPBJCFJJMPE_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
