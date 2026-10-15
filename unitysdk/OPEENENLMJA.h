#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPEENENLMJA_InnerState.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
namespace RPG::GameCore { class TeamTowersInfiniteModeConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OPEENENLMJA_AKGGGLDADCF_OFFSET UNITYSDK_OFFSET(0x1C7E58D0)
#define OPEENENLMJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E54D0)
#define OPEENENLMJA_EPMADCGPIIA_OFFSET UNITYSDK_OFFSET(0x1C7E5DE0)
#define OPEENENLMJA_FEDGINAMNPN_OFFSET UNITYSDK_OFFSET(0x1C7E5EA0)
#define OPEENENLMJA_FGCHCOFMDKE_OFFSET UNITYSDK_OFFSET(0x1C7E59A0)
#define OPEENENLMJA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C7E5610)
#define OPEENENLMJA_HJPKGKMMPCO_OFFSET UNITYSDK_OFFSET(0x1C7E5800)
#define OPEENENLMJA_IFFADFFBDFM_OFFSET UNITYSDK_OFFSET(0x1C7E57A0)
#define OPEENENLMJA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C7E55B0)
#define OPEENENLMJA_MNLKLIAIMMI_OFFSET UNITYSDK_OFFSET(0x1C7E5650)
#define OPEENENLMJA_NJDJFFGDMPO_OFFSET UNITYSDK_OFFSET(0x1C7E5480)
#define OPEENENLMJA_PEGIMBMFBBH_OFFSET UNITYSDK_OFFSET(0x1C7E5750)

	class OPEENENLMJA : public ::System::Object
	{
	public:
		::BDPDNAECJII* HHLICGLCEMJ; // 0x10
		::RPG::GameCore::TeamTowersInfiniteModeConfig* GFMENHNACEJ; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GLNIOINIGNP; // 0x20
		::OPEENENLMJA_InnerState DLNIGFGLPLJ; // 0x28
		::System::Int32 ADOMFLNHGOO; // 0x2C
		::System::Void _ctor(::BDPDNAECJII* a1, ::RPG::GameCore::TeamTowersInfiniteModeConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersInfiniteModeConfig*))((::PBYTE)hIl2Cpp + OPEENENLMJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 NJDJFFGDMPO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEENENLMJA_NJDJFFGDMPO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPEENENLMJA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEENENLMJA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void MNLKLIAIMMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEENENLMJA_MNLKLIAIMMI_OFFSET))(this, a1);
		}

		::System::Void PEGIMBMFBBH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEENENLMJA_PEGIMBMFBBH_OFFSET))(this, a1, a2);
		}

		::System::Void IFFADFFBDFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEENENLMJA_IFFADFFBDFM_OFFSET))(this, a1);
		}

		::System::Void HJPKGKMMPCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEENENLMJA_HJPKGKMMPCO_OFFSET))(this);
		}

		::System::Void FGCHCOFMDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEENENLMJA_FGCHCOFMDKE_OFFSET))(this);
		}

		::System::Void AKGGGLDADCF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPEENENLMJA_AKGGGLDADCF_OFFSET))(this, a1);
		}

		::System::Void EPMADCGPIIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEENENLMJA_EPMADCGPIIA_OFFSET))(this);
		}

		::System::Void FEDGINAMNPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEENENLMJA_FEDGINAMNPN_OFFSET))(this, a1);
		}

	};
