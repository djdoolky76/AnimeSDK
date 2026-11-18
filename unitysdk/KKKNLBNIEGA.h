#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/ScreenPlayer.h"

class DGDNKBFMHME;
class LKCKNHGFJLD;
class ScreenPlayData;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::UI { class Graphic; }

#define KKKNLBNIEGA_BKGODGGKMKK_OFFSET UNITYSDK_OFFSET(0x186337E0)
#define KKKNLBNIEGA_BOONPAHEPJH_OFFSET UNITYSDK_OFFSET(0x18632F30)
#define KKKNLBNIEGA_BPIFIKOIODH_OFFSET UNITYSDK_OFFSET(0x18633990)
#define KKKNLBNIEGA_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x18633E60)
#define KKKNLBNIEGA_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x18633E50)
#define KKKNLBNIEGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18633D40)
#define KKKNLBNIEGA_EDOCIKLOKHI_OFFSET UNITYSDK_OFFSET(0x18633E30)
#define KKKNLBNIEGA_EHGFBLANIIJ_OFFSET UNITYSDK_OFFSET(0x186332D0)
#define KKKNLBNIEGA_ELPMNAJEELK_OFFSET UNITYSDK_OFFSET(0x18633E00)
#define KKKNLBNIEGA_IDBJLLJAEMF_OFFSET UNITYSDK_OFFSET(0x18633E40)
#define KKKNLBNIEGA_JECBMPHBING_OFFSET UNITYSDK_OFFSET(0x18633DE0)
#define KKKNLBNIEGA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x18633DF0)
#define KKKNLBNIEGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x186339F0)
#define KKKNLBNIEGA_UPDATE_OFFSET UNITYSDK_OFFSET(0x18633580)
#define KKKNLBNIEGA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18633D90)
#define KKKNLBNIEGA__CTOR_OFFSET UNITYSDK_OFFSET(0x18632E60)

inline static constexpr unsigned int KKKNLBNIEGA_TypeDefinitionIndex = 92449;

class KKKNLBNIEGA : public ::MoleMole::ScreenPlayer
{
public:
	static ::System::Int32* StaticGet_LDPBAAIGCBC()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(KKKNLBNIEGA_TypeDefinitionIndex)->GetStaticField(0x13820);
	}
	static ::System::Int32* StaticGet_DGGNLEAELJI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(KKKNLBNIEGA_TypeDefinitionIndex)->GetStaticField(0x13824);
	}
	::LKCKNHGFJLD* DICPEDGFHBH; // 0xB38
	::DGDNKBFMHME* BKIIJMLGNJH; // 0xB40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* MLIOABGJDHP; // 0xB48
	::Foundation::AssetRequestHandle AAGPDPGPLOD; // 0xB50
	::UnityEngine::Material* PKKIPHNODNO; // 0xB70
	::UnityEngine::UI::Graphic* HODAIDNDKHD; // 0xB78

	::System::Void _ctor(::UnityEngine::UI::Graphic* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA__CTOR_OFFSET))(this, HODAIDNDKHD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKKNLBNIEGA__CCTOR_OFFSET))();
	}

	::System::Void BOONPAHEPJH(::ScreenPlayData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_BOONPAHEPJH_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BKGODGGKMKK(::ScreenPlayData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_BKGODGGKMKK_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void BPIFIKOIODH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_BPIFIKOIODH_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE(::System::Boolean IOKNPLAMIKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_PHOADBJGFBE_OFFSET))(this, IOKNPLAMIKB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_DISPOSE_OFFSET))(this);
	}

	::System::Void JECBMPHBING(::ScreenPlayData* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_JECBMPHBING_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OHFHFOHMBJH(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_OHFHFOHMBJH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ELPMNAJEELK(::DGDNKBFMHME* FMJAFFDJMBB)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_ELPMNAJEELK_OFFSET))(this, FMJAFFDJMBB);
	}

	::System::Void EDOCIKLOKHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_EDOCIKLOKHI_OFFSET))(this);
	}

	::System::Void IDBJLLJAEMF(::ScreenPlayData* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_IDBJLLJAEMF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_CMFOIAAGPFL_OFFSET))(this);
	}

	::UnityEngine::Texture2D* EHGFBLANIIJ(::ScreenPlayData* LJBPECKCCEA)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::ScreenPlayData*))((::PBYTE)hIl2Cpp + KKKNLBNIEGA_EHGFBLANIIJ_OFFSET))(this, LJBPECKCCEA);
	}
};
