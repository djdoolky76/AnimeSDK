#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class FGCOIBFFCHB;
class JGICINLNFIF;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJJKJNPEHCH_JAFDJKOJPKN_ABLLIKLKGHP_OFFSET UNITYSDK_OFFSET(0x17DDBDB0)
#define AJJKJNPEHCH_JAFDJKOJPKN_AOHLEGGAGDJ_OFFSET UNITYSDK_OFFSET(0x17DDBE70)
#define AJJKJNPEHCH_JAFDJKOJPKN_CFCHIENGMMN_OFFSET UNITYSDK_OFFSET(0x17DDBAE0)
#define AJJKJNPEHCH_JAFDJKOJPKN_DNGMIFCBEAJ_OFFSET UNITYSDK_OFFSET(0x17DDB7F0)
#define AJJKJNPEHCH_JAFDJKOJPKN_JJBMBPGPLKP_OFFSET UNITYSDK_OFFSET(0x17DDBA90)
#define AJJKJNPEHCH_JAFDJKOJPKN_JKPPOMCNMMO_OFFSET UNITYSDK_OFFSET(0x17DDBB50)
#define AJJKJNPEHCH_JAFDJKOJPKN_KEDDNGAEFKA_OFFSET UNITYSDK_OFFSET(0x17DDBE30)
#define AJJKJNPEHCH_JAFDJKOJPKN_MCPJJGMLBNG_OFFSET UNITYSDK_OFFSET(0x17DDB840)
#define AJJKJNPEHCH_JAFDJKOJPKN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDB7E0)

inline static constexpr unsigned int AJJKJNPEHCH_JAFDJKOJPKN_TypeDefinitionIndex = 83678;

class AJJKJNPEHCH_JAFDJKOJPKN : public ::System::Object
{
public:
	::JGICINLNFIF* IBKNOMLPDFI; // 0x10
	::System::Boolean LCAJMDLLJNK; // 0x18
	::System::Boolean AOLKFIKCNOH; // 0x19
	::System::Byte _padding0[0x2];
	::System::Int32 PGBOIPOEEFL; // 0x1C
	::System::UInt32 DGEBDBEOEFO; // 0x20
	::System::UInt32 EFNKGLNOMMC; // 0x24
	::System::Int32 MKNFBJBFLAB; // 0x28
	::System::Int32 MBNJLLBDIHA; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN__CTOR_OFFSET))(this);
	}

	::System::Void DNGMIFCBEAJ(::System::UInt32 DONFNODEALN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_DNGMIFCBEAJ_OFFSET))(this, DONFNODEALN);
	}

	::System::Void MCPJJGMLBNG(::UnityEngine::UI::Extension::UILocalizationText* HEIICACIGFK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_MCPJJGMLBNG_OFFSET))(this, HEIICACIGFK);
	}

	::System::Void JKPPOMCNMMO(::UnityEngine::UI::Extension::UILocalizationText* KNBKCDCNKGH, ::FGCOIBFFCHB* DLOIINENNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_JKPPOMCNMMO_OFFSET))(this, KNBKCDCNKGH, DLOIINENNCK);
	}

	::System::UInt32 KEDDNGAEFKA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_KEDDNGAEFKA_OFFSET))(this);
	}

	::System::Boolean JJBMBPGPLKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_JJBMBPGPLKP_OFFSET))(this);
	}

	::System::Void AOHLEGGAGDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_AOHLEGGAGDJ_OFFSET))(this);
	}

	::UnityEngine::Color CFCHIENGMMN()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_CFCHIENGMMN_OFFSET))(this);
	}

	::JGICINLNFIF* ABLLIKLKGHP()
	{
		return ((::JGICINLNFIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJKJNPEHCH_JAFDJKOJPKN_ABLLIKLKGHP_OFFSET))(this);
	}
};
