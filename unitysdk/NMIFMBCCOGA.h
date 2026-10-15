#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerInputType.h"
#include "unitysdk/System/Object.h"
class PNGAOEKBINJ_MACFFHIPONI;
namespace System { class Action; }

#define NMIFMBCCOGA_APMGFAAAAMN_OFFSET UNITYSDK_OFFSET(0xBC86F10)
#define NMIFMBCCOGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC86820)
#define NMIFMBCCOGA_FIACIGKGLEA_OFFSET UNITYSDK_OFFSET(0xBC873A0)
#define NMIFMBCCOGA_HKAPADMGLHB_OFFSET UNITYSDK_OFFSET(0xBC87220)
#define NMIFMBCCOGA_HOLEBGAPNEK_OFFSET UNITYSDK_OFFSET(0xBC87530)
#define NMIFMBCCOGA_IBNBGMIJMFP_OFFSET UNITYSDK_OFFSET(0xBC86870)
#define NMIFMBCCOGA_JCLLANOPJMI_OFFSET UNITYSDK_OFFSET(0xBC870A0)
#define NMIFMBCCOGA_KBOCBONCALJ_OFFSET UNITYSDK_OFFSET(0xBC86D80)
#define NMIFMBCCOGA_LIEJEGKDCKE_OFFSET UNITYSDK_OFFSET(0xBC86BF0)
#define NMIFMBCCOGA_NIPKAMBJHLB_OFFSET UNITYSDK_OFFSET(0xBC876B0)
#define NMIFMBCCOGA_OCCDJDEAAAM_OFFSET UNITYSDK_OFFSET(0xBC86830)
#define NMIFMBCCOGA_OEDHBHOFIOK_OFFSET UNITYSDK_OFFSET(0xBC86A60)
#define NMIFMBCCOGA_OHGPGECOKHC_OFFSET UNITYSDK_OFFSET(0xBC868D0)
#define NMIFMBCCOGA_OOFFKJBMIPD_OFFSET UNITYSDK_OFFSET(0xBC86910)
#define NMIFMBCCOGA_PFCODDKFPLF_OFFSET UNITYSDK_OFFSET(0xBC87830)

inline static constexpr unsigned int NMIFMBCCOGA_TypeDefinitionIndex = 79108;

	class NMIFMBCCOGA : public ::System::Object
	{
	public:
		::System::Action* PEPCLIHNBNO; // 0x10
		::PNGAOEKBINJ_MACFFHIPONI* EIMFLCOOHFG; // 0x18
		::RPG::GameCore::TeamTowersPlayerInputType KEBGBFELFPO; // 0x20
		::System::Void _ctor(::PNGAOEKBINJ_MACFFHIPONI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGAOEKBINJ_MACFFHIPONI*))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_CTOR_OFFSET))(this, a1);
		}

		::PNGAOEKBINJ_MACFFHIPONI* OCCDJDEAAAM()
		{
			return ((::PNGAOEKBINJ_MACFFHIPONI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_OCCDJDEAAAM_OFFSET))(this);
		}

		::System::Void IBNBGMIJMFP(::RPG::GameCore::TeamTowersPlayerInputType a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersPlayerInputType, ::System::Action*))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_IBNBGMIJMFP_OFFSET))(this, a1, a2);
		}

		::System::Void OHGPGECOKHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_OHGPGECOKHC_OFFSET))(this);
		}

		::System::Void OOFFKJBMIPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_OOFFKJBMIPD_OFFSET))(this);
		}

		::System::Boolean OEDHBHOFIOK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_OEDHBHOFIOK_OFFSET))(this);
		}

		::System::Boolean LIEJEGKDCKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_LIEJEGKDCKE_OFFSET))(this);
		}

		::System::Boolean KBOCBONCALJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_KBOCBONCALJ_OFFSET))(this);
		}

		::System::Boolean APMGFAAAAMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_APMGFAAAAMN_OFFSET))(this);
		}

		::System::Void JCLLANOPJMI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_JCLLANOPJMI_OFFSET))(this, a1);
		}

		::System::Void HKAPADMGLHB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_HKAPADMGLHB_OFFSET))(this, a1);
		}

		::System::Void FIACIGKGLEA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_FIACIGKGLEA_OFFSET))(this, a1);
		}

		::System::Void HOLEBGAPNEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_HOLEBGAPNEK_OFFSET))(this);
		}

		::System::Void NIPKAMBJHLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_NIPKAMBJHLB_OFFSET))(this);
		}

		::System::Single PFCODDKFPLF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIFMBCCOGA_PFCODDKFPLF_OFFSET))(this);
		}

	};
