#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableWaveConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_0_OFFSET UNITYSDK_OFFSET(0x16540080)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_1_OFFSET UNITYSDK_OFFSET(0x165400A0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALSCORE_B__8_0_OFFSET UNITYSDK_OFFSET(0x16540060)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16540010)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16540050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex = 64090;

	class ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E980);
		}
		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E988);
		}
		static ::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E990);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c_TypeDefinitionIndex)->GetStaticField(0x3E998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _CalculateTotalScore_b__8_0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALSCORE_B__8_0_OFFSET))(this, w);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _CalculateTotalNodeCount_b__9_0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_0_OFFSET))(this, w);
		}

		::System::Int32 _CalculateTotalNodeCount_b__9_1(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig* n)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__CALCULATETOTALNODECOUNT_B__9_1_OFFSET))(this, n);
		}
	};
}
