#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class FLBAEFPLHOF;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Threading { class CancellationTokenSource; }

#define OHLHBFHHNBI_AHPCNILIGKA_OFFSET UNITYSDK_OFFSET(0x11B2F700)
#define OHLHBFHHNBI_BLGIDEFPPFL_OFFSET UNITYSDK_OFFSET(0x11B2F620)
#define OHLHBFHHNBI_CLBDJOPKHCE_OFFSET UNITYSDK_OFFSET(0x11B2E860)
#define OHLHBFHHNBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11B2E8E0)
#define OHLHBFHHNBI_EHBAJLMDKNJ_OFFSET UNITYSDK_OFFSET(0x11B30120)
#define OHLHBFHHNBI_FHJKIEOFBDH_OFFSET UNITYSDK_OFFSET(0x11B2F000)
#define OHLHBFHHNBI_HKHABEFMGHA_OFFSET UNITYSDK_OFFSET(0x11B2F680)
#define OHLHBFHHNBI_IKGBJDMCBAP_OFFSET UNITYSDK_OFFSET(0x11B2F080)
#define OHLHBFHHNBI_ILNEPOGNINO_OFFSET UNITYSDK_OFFSET(0x11B301A0)
#define OHLHBFHHNBI_JFLBBNNGGPB_OFFSET UNITYSDK_OFFSET(0x11B2E050)
#define OHLHBFHHNBI_JJLICCJLJOO_OFFSET UNITYSDK_OFFSET(0x11B2F2D0)
#define OHLHBFHHNBI_LBBLNAIHCDJ_OFFSET UNITYSDK_OFFSET(0x11B2FCF0)
#define OHLHBFHHNBI_MNCELCBFIBA_OFFSET UNITYSDK_OFFSET(0x11B2F9A0)
#define OHLHBFHHNBI_MNMEIIGIPII_OFFSET UNITYSDK_OFFSET(0x11B2E390)
#define OHLHBFHHNBI_NHCKGPAKGME_OFFSET UNITYSDK_OFFSET(0x11B2EBA0)
#define OHLHBFHHNBI_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11B2DC10)
#define OHLHBFHHNBI_PHAGBBLGKEE_OFFSET UNITYSDK_OFFSET(0x11B30200)
#define OHLHBFHHNBI_PIHOANONMBL_OFFSET UNITYSDK_OFFSET(0x11B2F8F0)
#define OHLHBFHHNBI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B2EEC0)

inline static constexpr unsigned int OHLHBFHHNBI_TypeDefinitionIndex = 38594;

class OHLHBFHHNBI
{
public:
	::System::Threading::CancellationTokenSource* ICKCPHIIBPP; // 0x10
	::System::Action_1<::System::Int32>* CCHGBEHAMFL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FLBAEFPLHOF*>* JAMPCKHENAG; // 0x20
	::Foundation::PriorityQueue_2<::FLBAEFPLHOF*, ::System::Int32>* IKGBNCJCFBD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MNLMEJKLKOM; // 0x30
	::System::Boolean INCJFECNCMK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 NMLFOJHCOLL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_DISPOSE_OFFSET))(this);
	}

	::System::Void FHJKIEOFBDH(::System::Action_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_FHJKIEOFBDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IKGBJDMCBAP(::System::Int32 NHBENPCMJPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_IKGBJDMCBAP_OFFSET))(this, NHBENPCMJPI);
	}

	::System::Void JJLICCJLJOO(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_JJLICCJLJOO_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* MNMEIIGIPII()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_MNMEIIGIPII_OFFSET))(this);
	}

	::System::Void JFLBBNNGGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_JFLBBNNGGPB_OFFSET))(this);
	}

	::System::Void NHCKGPAKGME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_NHCKGPAKGME_OFFSET))(this);
	}

	::System::Void BLGIDEFPPFL(::FLBAEFPLHOF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAEFPLHOF*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_BLGIDEFPPFL_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void HKHABEFMGHA(::System::Action_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_HKHABEFMGHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void AHPCNILIGKA(::System::Int32 NHBENPCMJPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_AHPCNILIGKA_OFFSET))(this, NHBENPCMJPI);
	}

	::System::Boolean PIHOANONMBL(::System::Int32 NHBENPCMJPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_PIHOANONMBL_OFFSET))(this, NHBENPCMJPI);
	}

	::System::Void MNCELCBFIBA(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_MNCELCBFIBA_OFFSET))(this, KOIBHLHLMFC);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CLBDJOPKHCE()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_CLBDJOPKHCE_OFFSET))(this);
	}

	::System::Void LBBLNAIHCDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_LBBLNAIHCDJ_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::FLBAEFPLHOF*>* EHBAJLMDKNJ()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FLBAEFPLHOF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_EHBAJLMDKNJ_OFFSET))(this);
	}

	::System::Void ILNEPOGNINO(::FLBAEFPLHOF* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::FLBAEFPLHOF*))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_ILNEPOGNINO_OFFSET))(this, LJBPECKCCEA);
	}

	::FLBAEFPLHOF* PHAGBBLGKEE(::System::Int32 NHBENPCMJPI, ::System::Boolean ILOCPECKHMG)
	{
		return ((::FLBAEFPLHOF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OHLHBFHHNBI_PHAGBBLGKEE_OFFSET))(this, NHBENPCMJPI, ILOCPECKHMG);
	}
};
