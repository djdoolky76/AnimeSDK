#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFGFAHEKNPD;
class FIBKHDABPHD;
class GJBMIABGPFP;
class HEKHCLACHJE;
class JKHPCAILNPD;
class KPEKOKMONMJ;
class NKIJFPHFJCO;
class OFMDPNPMFCE_CIGNMHOJIPG;
class POKOKCAFLLD;
namespace System { class Action; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define PAHNGJAHJKI_ACNIPDHNAFL_OFFSET UNITYSDK_OFFSET(0x1C57D190)
#define PAHNGJAHJKI_ADD_ONANYEDITOPERATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x1C579230)
#define PAHNGJAHJKI_AIJGCEPIDJO_OFFSET UNITYSDK_OFFSET(0x1C57D2F0)
#define PAHNGJAHJKI_AJELKEBHDAA_OFFSET UNITYSDK_OFFSET(0x1C5790E0)
#define PAHNGJAHJKI_ANFEHHHBPDN_OFFSET UNITYSDK_OFFSET(0x1C57C640)
#define PAHNGJAHJKI_AOPEFPMGDMA_OFFSET UNITYSDK_OFFSET(0x1C57CAF0)
#define PAHNGJAHJKI_CBOBCNNFMFP_OFFSET UNITYSDK_OFFSET(0x1C57C490)
#define PAHNGJAHJKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C870)
#define PAHNGJAHJKI_EAJHMEMLPMJ_OFFSET UNITYSDK_OFFSET(0x1C57C6F0)
#define PAHNGJAHJKI_GDFMGGMJGDL_OFFSET UNITYSDK_OFFSET(0x1C57CEF0)
#define PAHNGJAHJKI_GET_INTEGRATIONAGGREGATOR_OFFSET UNITYSDK_OFFSET(0x1C57C850)
#define PAHNGJAHJKI_GET_PIECEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1C57C830)
#define PAHNGJAHJKI_HECDFGMHEHD_OFFSET UNITYSDK_OFFSET(0x1C57C500)
#define PAHNGJAHJKI_LFCMMNJJGLE_OFFSET UNITYSDK_OFFSET(0x1C57C5A0)
#define PAHNGJAHJKI_NKLGLDLBBAJ_OFFSET UNITYSDK_OFFSET(0x1C57D030)
#define PAHNGJAHJKI_NNKCOFHJHDC_OFFSET UNITYSDK_OFFSET(0x1C57CD90)
#define PAHNGJAHJKI_OJGDEPKFLFC_OFFSET UNITYSDK_OFFSET(0x1C57C790)
#define PAHNGJAHJKI_PHGNPFOIDBI_OFFSET UNITYSDK_OFFSET(0x1C57CC50)
#define PAHNGJAHJKI_REMOVE_ONANYEDITOPERATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x1C579770)
#define PAHNGJAHJKI_SET_INTEGRATIONAGGREGATOR_OFFSET UNITYSDK_OFFSET(0x1C57C860)
#define PAHNGJAHJKI_SET_PIECEVALIDATOR_OFFSET UNITYSDK_OFFSET(0x1C57C840)

	class PAHNGJAHJKI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CFGFAHEKNPD*>* IOJDAFNNFHG; // 0x10
		::OFMDPNPMFCE_CIGNMHOJIPG* _PieceValidator_k__BackingField; // 0x18
		::JKHPCAILNPD* NNPEGAJICBA; // 0x20
		::KPEKOKMONMJ* _IntegrationAggregator_k__BackingField; // 0x28
		::POKOKCAFLLD* FDAJMFJLNBN; // 0x30
		::System::Action* OnAnyEditOperationFinished; // 0x38
		::System::Void _ctor(::FIBKHDABPHD* a1, ::System::Nullable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FIBKHDABPHD*, ::System::Nullable*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_CTOR_OFFSET))(this, a1, a2);
		}

		::HEKHCLACHJE* CBOBCNNFMFP()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_CBOBCNNFMFP_OFFSET))(this);
		}

		::System::Void HECDFGMHEHD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_HECDFGMHEHD_OFFSET))(this, a1);
		}

		::System::Void LFCMMNJJGLE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_LFCMMNJJGLE_OFFSET))(this, a1);
		}

		::GJBMIABGPFP* ANFEHHHBPDN()
		{
			return ((::GJBMIABGPFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_ANFEHHHBPDN_OFFSET))(this);
		}

		::System::Void EAJHMEMLPMJ(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_EAJHMEMLPMJ_OFFSET))(this, a1);
		}

		::System::Void OJGDEPKFLFC(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_OJGDEPKFLFC_OFFSET))(this, a1);
		}

		::OFMDPNPMFCE_CIGNMHOJIPG* get_PieceValidator()
		{
			return ((::OFMDPNPMFCE_CIGNMHOJIPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_GET_PIECEVALIDATOR_OFFSET))(this);
		}

		::System::Void set_PieceValidator(::OFMDPNPMFCE_CIGNMHOJIPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMDPNPMFCE_CIGNMHOJIPG*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_SET_PIECEVALIDATOR_OFFSET))(this, a1);
		}

		::KPEKOKMONMJ* get_IntegrationAggregator()
		{
			return ((::KPEKOKMONMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_GET_INTEGRATIONAGGREGATOR_OFFSET))(this);
		}

		::System::Void set_IntegrationAggregator(::KPEKOKMONMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPEKOKMONMJ*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_SET_INTEGRATIONAGGREGATOR_OFFSET))(this, a1);
		}

		::System::Void add_OnAnyEditOperationFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_ADD_ONANYEDITOPERATIONFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnAnyEditOperationFinished(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_REMOVE_ONANYEDITOPERATIONFINISHED_OFFSET))(this, a1);
		}

		::System::Action* AJELKEBHDAA(::CFGFAHEKNPD* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::CFGFAHEKNPD*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_AJELKEBHDAA_OFFSET))(this, a1);
		}

		::System::Void AOPEFPMGDMA(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_AOPEFPMGDMA_OFFSET))(this, a1);
		}

		::System::Void PHGNPFOIDBI(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_PHGNPFOIDBI_OFFSET))(this, a1);
		}

		::System::Void NNKCOFHJHDC(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_NNKCOFHJHDC_OFFSET))(this, a1);
		}

		::System::Void GDFMGGMJGDL(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_GDFMGGMJGDL_OFFSET))(this, a1);
		}

		::System::Void NKLGLDLBBAJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_NKLGLDLBBAJ_OFFSET))(this, a1);
		}

		::System::Void ACNIPDHNAFL(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_ACNIPDHNAFL_OFFSET))(this, a1);
		}

		::System::Void AIJGCEPIDJO(::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + PAHNGJAHJKI_AIJGCEPIDJO_OFFSET))(this, a1);
		}

	};
