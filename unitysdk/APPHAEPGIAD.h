#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
class CMDKPJLGEOB;
class EPAAAILJEKE;
class HFBADOAGDHH;
class PDJAKJNKAJJ;
class PMHEBAFMEEG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APPHAEPGIAD_BFFKAFKPCIG_OFFSET UNITYSDK_OFFSET(0x15BC0C10)
#define APPHAEPGIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC0890)
#define APPHAEPGIAD_DHOCFJDCLLN_OFFSET UNITYSDK_OFFSET(0x15BC09E0)
#define APPHAEPGIAD_FMMFJECBKGP_OFFSET UNITYSDK_OFFSET(0x15BC1170)
#define APPHAEPGIAD_LIMOIKOOHNP_OFFSET UNITYSDK_OFFSET(0x15BC0ED0)
#define APPHAEPGIAD_PIMCHDILMMJ_OFFSET UNITYSDK_OFFSET(0x15BC0C80)

	class APPHAEPGIAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardAvatarType, ::HFBADOAGDHH*>* EBEAGIAHMOO; // 0x10
		::EPAAAILJEKE* HPNDAEDOHNN; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardAvatarType, ::PMHEBAFMEEG*>* PGHLCHEOBIA; // 0x20
		::System::Void _ctor(::EPAAAILJEKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPAAAILJEKE*))((::PBYTE)hIl2Cpp + APPHAEPGIAD_CTOR_OFFSET))(this, a1);
		}

		::HFBADOAGDHH* DHOCFJDCLLN(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::HFBADOAGDHH*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + APPHAEPGIAD_DHOCFJDCLLN_OFFSET))(this, a1);
		}

		::PMHEBAFMEEG* LIMOIKOOHNP(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::PMHEBAFMEEG*(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + APPHAEPGIAD_LIMOIKOOHNP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinCaseBoardAvatarType BFFKAFKPCIG(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + APPHAEPGIAD_BFFKAFKPCIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateRinCaseBoardAvatarType FMMFJECBKGP(::RPG::GameCore::FateRinCaseBoardAvatarType a1)
		{
			return ((::RPG::GameCore::FateRinCaseBoardAvatarType(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + APPHAEPGIAD_FMMFJECBKGP_OFFSET))(this, a1);
		}

		static ::PDJAKJNKAJJ* PIMCHDILMMJ(::CMDKPJLGEOB* a1, ::RPG::GameCore::FateRinCaseBoardAvatarType a2)
		{
			return ((::PDJAKJNKAJJ*(*)(::CMDKPJLGEOB*, ::RPG::GameCore::FateRinCaseBoardAvatarType))((::PBYTE)hIl2Cpp + APPHAEPGIAD_PIMCHDILMMJ_OFFSET))(a1, a2);
		}

	};
