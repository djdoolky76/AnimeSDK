#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple.h"
class BPHJOOGJPKD;
class CJCHKDLALDN;
class IJFIHJJPHNA;
namespace System { class String; }

#define PMMIGNNAIJB_AJPIMPCOGIE_OFFSET UNITYSDK_OFFSET(0x1C7F5D20)
#define PMMIGNNAIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F5750)
#define PMMIGNNAIJB_EEPJKHDOEAP_OFFSET UNITYSDK_OFFSET(0x1C7F5E30)
#define PMMIGNNAIJB_FJIADIOKDOA_OFFSET UNITYSDK_OFFSET(0x1C7EF900)
#define PMMIGNNAIJB_IMJKFJDBENG_OFFSET UNITYSDK_OFFSET(0x1C7F5D70)
#define PMMIGNNAIJB_KJMPJOEEGEC_OFFSET UNITYSDK_OFFSET(0x1C7F5650)
#define PMMIGNNAIJB_KKNBICOIAOF_OFFSET UNITYSDK_OFFSET(0x1C7D1320)
#define PMMIGNNAIJB_LIGNKPIBMOB_OFFSET UNITYSDK_OFFSET(0x1C7D0390)
#define PMMIGNNAIJB_LNGKHOJNJOI_OFFSET UNITYSDK_OFFSET(0x1C7F20C0)
#define PMMIGNNAIJB_MCIEPLHOCCN_OFFSET UNITYSDK_OFFSET(0x1C7F5CA0)
#define PMMIGNNAIJB_PBKNKEPNPPO_OFFSET UNITYSDK_OFFSET(0x1C7F5F00)
#define PMMIGNNAIJB_PCOMAHEECDF_OFFSET UNITYSDK_OFFSET(0x1C7F5760)

	class PMMIGNNAIJB : public ::System::Object
	{
	public:
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x10
		::System::Void _ctor(::BPHJOOGJPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_CTOR_OFFSET))(this, a1);
		}

		::System::Void KKNBICOIAOF(::IJFIHJJPHNA* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_KKNBICOIAOF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LIGNKPIBMOB(::IJFIHJJPHNA* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::String*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_LIGNKPIBMOB_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple KJMPJOEEGEC(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_KJMPJOEEGEC_OFFSET))(this, a1, a2);
		}

		::System::Void PCOMAHEECDF(::IJFIHJJPHNA* a1, ::CJCHKDLALDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::CJCHKDLALDN*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_PCOMAHEECDF_OFFSET))(this, a1, a2);
		}

		::System::Int32 LNGKHOJNJOI(::IJFIHJJPHNA* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_LNGKHOJNJOI_OFFSET))(this, a1);
		}

		::System::Int32 MCIEPLHOCCN(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatAdditivePropertyType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_MCIEPLHOCCN_OFFSET))(this, a1, a2);
		}

		::System::Int32 AJPIMPCOGIE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_AJPIMPCOGIE_OFFSET))(this, a1);
		}

		::System::Int32 IMJKFJDBENG(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatAdditivePropertyType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_IMJKFJDBENG_OFFSET))(this, a1, a2);
		}

		::System::Int32 EEPJKHDOEAP(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatAdditivePropertyType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_EEPJKHDOEAP_OFFSET))(this, a1, a2);
		}

		::System::Int32 PBKNKEPNPPO(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_PBKNKEPNPPO_OFFSET))(this, a1, a2);
		}

		::System::UInt32 FJIADIOKDOA(::IJFIHJJPHNA* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + PMMIGNNAIJB_FJIADIOKDOA_OFFSET))(this, a1);
		}

	};
