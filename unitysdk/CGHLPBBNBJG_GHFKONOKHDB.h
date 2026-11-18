#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class CGHLPBBNBJG;
namespace MoleMole::Config { class ConfigHighLightAirCombatCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CGHLPBBNBJG_GHFKONOKHDB_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x128EFB30)
#define CGHLPBBNBJG_GHFKONOKHDB__CTOR_OFFSET UNITYSDK_OFFSET(0x128EFB20)

inline static constexpr unsigned int CGHLPBBNBJG_GHFKONOKHDB_TypeDefinitionIndex = 78249;

class CGHLPBBNBJG_GHFKONOKHDB : public ::System::Object
{
public:
	::CGHLPBBNBJG* KLHPEBKNIFB; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_GHFKONOKHDB__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHighLightAirCombatCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigHighLightAirCombatCamera*>*))((::PBYTE)hIl2Cpp + CGHLPBBNBJG_GHFKONOKHDB_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
