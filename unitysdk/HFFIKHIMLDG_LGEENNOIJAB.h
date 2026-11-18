#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HFFIKHIMLDG;
namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HFFIKHIMLDG_LGEENNOIJAB_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x140A2520)
#define HFFIKHIMLDG_LGEENNOIJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x140A2510)

inline static constexpr unsigned int HFFIKHIMLDG_LGEENNOIJAB_TypeDefinitionIndex = 74672;

class HFFIKHIMLDG_LGEENNOIJAB : public ::System::Object
{
public:
	::HFFIKHIMLDG* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_LGEENNOIJAB__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAbilityTargetData*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigAbilityTargetData*>*))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_LGEENNOIJAB_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
