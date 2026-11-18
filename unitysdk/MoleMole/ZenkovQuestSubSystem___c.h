#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C12800)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C12840)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__HANDLESETEVACUATIONDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0x13C12850)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__17_0_OFFSET UNITYSDK_OFFSET(0x13C128A0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__17_1_OFFSET UNITYSDK_OFFSET(0x13C128F0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem___c_TypeDefinitionIndex = 52927;

	class ZenkovQuestSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__17_1()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47400);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47408);
		}
		static ::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::MoleMole::Config::ConfigViewObjectTraitBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47410);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x47418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleSetEvacuationData_b__8_1(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__HANDLESETEVACUATIONDATA_B__8_1_OFFSET))(this, t);
		}

		::System::Boolean _ProcessEvacuationTips_b__17_0(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__17_0_OFFSET))(this, t);
		}

		::System::Boolean _ProcessEvacuationTips_b__17_1(::MoleMole::Config::ConfigViewObjectTraitBase* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___C__PROCESSEVACUATIONTIPS_B__17_1_OFFSET))(this, t);
		}
	};
}
