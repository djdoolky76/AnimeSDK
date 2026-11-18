#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBGGFFENKGA;
class GCBIJGPJLPN;
class GFKKCCCLOFB;
namespace MoleMole::Config { class AtmosphereData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define AKDONMKMHNA_APCHKJLJBNJ_OFFSET UNITYSDK_OFFSET(0x17CDBB00)
#define AKDONMKMHNA_CPDGOACEHEC_OFFSET UNITYSDK_OFFSET(0x17CDBD00)
#define AKDONMKMHNA_DKIFPMDOFLE_OFFSET UNITYSDK_OFFSET(0x17CDB760)
#define AKDONMKMHNA_GBIKBPHCLHI_OFFSET UNITYSDK_OFFSET(0x17CDB8E0)
#define AKDONMKMHNA_HCEHHNJCBAL_OFFSET UNITYSDK_OFFSET(0x17CDC2F0)
#define AKDONMKMHNA_JAPDNOAFMAG_1_OFFSET UNITYSDK_OFFSET(0x17CDC1D0)
#define AKDONMKMHNA_JAPDNOAFMAG_OFFSET UNITYSDK_OFFSET(0x17CDBC90)
#define AKDONMKMHNA_KCHPGBCABCG_OFFSET UNITYSDK_OFFSET(0x17CDBBD0)
#define AKDONMKMHNA_MDMGMDEIIOD_OFFSET UNITYSDK_OFFSET(0x17CDC300)
#define AKDONMKMHNA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x17CDB6F0)
#define AKDONMKMHNA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CDB610)

inline static constexpr unsigned int AKDONMKMHNA_TypeDefinitionIndex = 52122;

class AKDONMKMHNA : public ::System::Object
{
public:
	// static const ::System::Single IAKPGBCAAKM; // 0x0
	::System::Collections::Generic::List_1<::GCBIJGPJLPN*>* CJEKDBFDGID; // 0x10
	::UnityEngine::Rendering::Volume* _DFFBJNBOICO_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::GFKKCCCLOFB*>* EMJKJDNEPCG; // 0x20

	::System::Void _ctor(::UnityEngine::Rendering::Volume* PHLFMCCNEGD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + AKDONMKMHNA__CTOR_OFFSET))(this, PHLFMCCNEGD);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDONMKMHNA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void DKIFPMDOFLE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDONMKMHNA_DKIFPMDOFLE_OFFSET))(this);
	}

	::System::Int32 KCHPGBCABCG(::FBGGFFENKGA* JFDDLNDKIKM)
	{
		return ((::System::Int32(*)(::PVOID, ::FBGGFFENKGA*))((::PBYTE)hIl2Cpp + AKDONMKMHNA_KCHPGBCABCG_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void JAPDNOAFMAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDONMKMHNA_JAPDNOAFMAG_OFFSET))(this);
	}

	::System::Void APCHKJLJBNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDONMKMHNA_APCHKJLJBNJ_OFFSET))(this);
	}

	::System::Void GBIKBPHCLHI(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDONMKMHNA_GBIKBPHCLHI_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void CPDGOACEHEC(::MoleMole::Config::AtmosphereData* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*))((::PBYTE)hIl2Cpp + AKDONMKMHNA_CPDGOACEHEC_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void JAPDNOAFMAG_1(::System::Int32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKDONMKMHNA_JAPDNOAFMAG_1_OFFSET))(this, ACHBBPJIBIE);
	}

	::UnityEngine::Rendering::Volume* HCEHHNJCBAL()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDONMKMHNA_HCEHHNJCBAL_OFFSET))(this);
	}

	::System::Void MDMGMDEIIOD(::UnityEngine::Rendering::Volume* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + AKDONMKMHNA_MDMGMDEIIOD_OFFSET))(this, EGEGIMGMJHN);
	}
};
