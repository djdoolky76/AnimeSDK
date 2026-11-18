#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKICKDDECB;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define IAENDOJEAFA_ANDMFJAGGBE_OFFSET UNITYSDK_OFFSET(0x16A8D4D0)
#define IAENDOJEAFA_EOCKOIOACPG_1_OFFSET UNITYSDK_OFFSET(0x16A8E190)
#define IAENDOJEAFA_EOCKOIOACPG_OFFSET UNITYSDK_OFFSET(0x16A8D870)
#define IAENDOJEAFA_GIEOJNEICLE_OFFSET UNITYSDK_OFFSET(0x16A8D490)
#define IAENDOJEAFA_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x16A8E890)
#define IAENDOJEAFA_LFMBFBLGDKB_OFFSET UNITYSDK_OFFSET(0x16A8D280)
#define IAENDOJEAFA_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x16A8E830)
#define IAENDOJEAFA_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x16A8E120)
#define IAENDOJEAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8CA10)

inline static constexpr unsigned int IAENDOJEAFA_TypeDefinitionIndex = 80217;

class IAENDOJEAFA : public ::System::Object
{
public:
	::UnityEngine::UI::Text* FAJBLIGFLOB; // 0x10
	::ILKICKDDECB* DOEBLDBAGEG; // 0x18
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* DECDHOJJGPK; // 0x20
	::UnityEngine::Transform* DKPOHOKGEOH; // 0x28
	::UnityEngine::UI::Text* IKBHKKJNPAM; // 0x30
	::UnityEngine::UI::Text* JBCDDLNFMPN; // 0x38
	::UnityEngine::Animation* EEFOCCNFJCO; // 0x40
	::UnityEngine::Transform* JAPEFHDDHDH; // 0x48
	::UnityEngine::Transform* MDNCHBPEFBI; // 0x50
	::UnityEngine::Transform* GJGMAGKJALB; // 0x58
	::System::Single KJHJPIMKEOM; // 0x60

	::System::Void _ctor(::UnityEngine::Transform* PEHPLPAAEMD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IAENDOJEAFA__CTOR_OFFSET))(this, PEHPLPAAEMD);
	}

	::System::Void LFMBFBLGDKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAENDOJEAFA_LFMBFBLGDKB_OFFSET))(this);
	}

	::UnityEngine::Transform* GIEOJNEICLE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAENDOJEAFA_GIEOJNEICLE_OFFSET))(this);
	}

	::System::Void ANDMFJAGGBE(::System::Boolean KBHFBLJPFJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_ANDMFJAGGBE_OFFSET))(this, KBHFBLJPFJH);
	}

	::System::Void EOCKOIOACPG(::System::Int32 DABJIHHDFNO, ::System::Int32 EEKENHBPKGO, ::System::Int32 DDLELCGCFAG, ::System::Int32 CHKILKCALHB, ::System::Boolean NMMOLAAJPCN, ::System::Boolean ILOJBJHKEKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_EOCKOIOACPG_OFFSET))(this, DABJIHHDFNO, EEKENHBPKGO, DDLELCGCFAG, CHKILKCALHB, NMMOLAAJPCN, ILOJBJHKEKM);
	}

	::System::Void EOCKOIOACPG_1(::System::String* KEKLFCCONCL, ::System::String* DGCNAFMPKMA, ::System::String* FCOMCHJLFOA, ::System::Boolean FECPBAABDLG, ::System::Boolean DAPDKPDBACL, ::System::Boolean KLOPJHLBPFO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_EOCKOIOACPG_1_OFFSET))(this, KEKLFCCONCL, DGCNAFMPKMA, FCOMCHJLFOA, FECPBAABDLG, DAPDKPDBACL, KLOPJHLBPFO);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void PEDANHBGIGE(::System::Boolean IMGAGIGMPLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_PEDANHBGIGE_OFFSET))(this, IMGAGIGMPLI);
	}

	::System::Void HJNJLKMIJPH(::System::Boolean CNNNAJDJMEC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAENDOJEAFA_HJNJLKMIJPH_OFFSET))(this, CNNNAJDJMEC);
	}
};
