#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNCGPNINPHM_AOPKBDJGNOP_OFFSET UNITYSDK_OFFSET(0x1A2D5140)
#define KNCGPNINPHM_LJPNHIGGPPD_OFFSET UNITYSDK_OFFSET(0x1A2D4F80)
#define KNCGPNINPHM_OOEBPLDEECE_OFFSET UNITYSDK_OFFSET(0x1A2D5BC0)
#define KNCGPNINPHM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2D4B00)
#define KNCGPNINPHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D4AF0)

inline static constexpr unsigned int KNCGPNINPHM_TypeDefinitionIndex = 48408;

class KNCGPNINPHM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>** StaticGet_EFPIOBJJJOE()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KNCGPNINPHM_TypeDefinitionIndex)->GetStaticField(0x4A0F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>** StaticGet_LBOOMNOIJHL()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LanguageType, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(KNCGPNINPHM_TypeDefinitionIndex)->GetStaticField(0x4A0F8);
	}
	static ::System::Boolean* StaticGet_ENPPJOHJNKP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KNCGPNINPHM_TypeDefinitionIndex)->GetStaticField(0x11470);
	}
	static ::System::Boolean* StaticGet_JEJLMMHLICO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KNCGPNINPHM_TypeDefinitionIndex)->GetStaticField(0x11471);
	}
	static ::System::Boolean* StaticGet_LNLJODFJHJC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(KNCGPNINPHM_TypeDefinitionIndex)->GetStaticField(0x11472);
	}
	// static const ::System::Int32 LBJGLNHNKCL = 0x1; // 0x0
	// static const ::System::Int32 HMJLJIJKOPP = 0x2; // 0x0
	// static const ::System::Int32 JILADENPEPD = 0x3; // 0x0
	// static const ::System::Int32 MIENNMFJPNL = 0x0; // 0x0
	// static const ::System::Int32 COLHMMKOOGP = 0x1; // 0x0
	// static const ::System::Int32 MAEGDIBEMJM = 0x2; // 0x0
	// static const ::System::Int32 DHAANELGIEE = 0x3; // 0x0
	// static const ::System::Int32 LNGKNMBLNNA = 0x4; // 0x0
	// static const ::System::Int32 FKMEMPONFGP = 0x5; // 0x0
	// static const ::System::Int32 EIDMIAKIPJF = 0x6; // 0x0
	// static const ::System::Int32 MHJCLEFCLIG = 0x7; // 0x0
	// static const ::System::Int32 INKJLANCBPG = 0x8; // 0x0
	// static const ::System::Int32 KIJEEAHICAG = 0xA; // 0x0
	// static const ::System::Int32 HDDNCIMMOIJ = 0xB; // 0x0
	// static const ::System::Int32 BDMDPFAANAM = 0xC; // 0x0
	// static const ::System::Int32 IBLDPCJBICE = 0xD; // 0x0
	// static const ::System::Int32 LLMMEGELFDL = 0xE; // 0x0
	// static const ::System::Int32 BGPGDDNFLNP = 0xF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNCGPNINPHM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNCGPNINPHM__CCTOR_OFFSET))();
	}

	static ::System::Boolean LJPNHIGGPPD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KNCGPNINPHM_LJPNHIGGPPD_OFFSET))();
	}

	static ::System::Boolean OOEBPLDEECE(::System::Int32 CELAGOFPIBD)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + KNCGPNINPHM_OOEBPLDEECE_OFFSET))(CELAGOFPIBD);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* AOPKBDJGNOP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + KNCGPNINPHM_AOPKBDJGNOP_OFFSET))();
	}
};
