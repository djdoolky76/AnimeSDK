#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define LCGECCIBBDI_AIPNHAECBAG_AKIKCLFCFMG_OFFSET UNITYSDK_OFFSET(0x1997AC60)
#define LCGECCIBBDI_AIPNHAECBAG_IEPJDOBLGOI_OFFSET UNITYSDK_OFFSET(0x1997ACE0)
#define LCGECCIBBDI_AIPNHAECBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1997ACA0)

inline static constexpr unsigned int LCGECCIBBDI_AIPNHAECBAG_TypeDefinitionIndex = 56789;

class LCGECCIBBDI_AIPNHAECBAG : public ::System::Object
{
public:
	::MoleMole::NotificationBadge* IKBJOJDMHFP; // 0x10
	::MoleMole::NotificationBadge* CGBKOMCBEAE; // 0x18
	::UnityEngine::GameObject* PLEDOEEFLAG; // 0x20
	::GCIMMDDIFBJ* GCKPCMEMKMM; // 0x28
	::LGINJIKKBJA* DNLDJKDCCEP; // 0x30
	::Il2CppArray<::System::Int32>* GPINLOCJOJP; // 0x38
	::UnityEngine::CanvasGroup* BADBLFABODD; // 0x40
	::GCIMMDDIFBJ* DNEOGOPCEDL; // 0x48
	::FGCOIBFFCHB* ODHCFDHPCLL; // 0x50
	::GCIMMDDIFBJ* JAKLKHNNIIK; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_AIPNHAECBAG__CTOR_OFFSET))(this);
	}

	::System::Void AKIKCLFCFMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGECCIBBDI_AIPNHAECBAG_AKIKCLFCFMG_OFFSET))(this);
	}

	::System::Single IEPJDOBLGOI(::System::String* HMAGMBBKALD, ::System::String* MHGHGBEELOO)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LCGECCIBBDI_AIPNHAECBAG_IEPJDOBLGOI_OFFSET))(this, HMAGMBBKALD, MHGHGBEELOO);
	}
};
