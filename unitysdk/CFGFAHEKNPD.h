#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKIJFPHFJCO;
namespace System { class Action; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CFGFAHEKNPD_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1C549D70)
#define CFGFAHEKNPD_ABDBJBDJJND_OFFSET UNITYSDK_OFFSET(0x1C54A3C0)
#define CFGFAHEKNPD_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C549850)
#define CFGFAHEKNPD_AMKBPBEAGFJ_OFFSET UNITYSDK_OFFSET(0x1C54A4B0)
#define CFGFAHEKNPD_BDDCOJMIHHF_OFFSET UNITYSDK_OFFSET(0x1C549C90)
#define CFGFAHEKNPD_BDNNONMEEDF_OFFSET UNITYSDK_OFFSET(0x1C549AD0)
#define CFGFAHEKNPD_BOFKKNEEJAM_OFFSET UNITYSDK_OFFSET(0x1C54A410)
#define CFGFAHEKNPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54A500)
#define CFGFAHEKNPD_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x1C549910)
#define CFGFAHEKNPD_FMBBFPGFNIE_OFFSET UNITYSDK_OFFSET(0x1C5499F0)
#define CFGFAHEKNPD_GCCNGHGILCN_OFFSET UNITYSDK_OFFSET(0x1C54A460)
#define CFGFAHEKNPD_GOPJCNDGELM_OFFSET UNITYSDK_OFFSET(0x1C549E50)
#define CFGFAHEKNPD_LCAOBLJDNAH_OFFSET UNITYSDK_OFFSET(0x1C549BB0)
#define CFGFAHEKNPD_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C5498B0)

inline static constexpr unsigned int CFGFAHEKNPD_TypeDefinitionIndex = 41769;

	class CFGFAHEKNPD : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_CTOR_OFFSET))(this);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void EGFCFCBHJJP(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void FMBBFPGFNIE(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_FMBBFPGFNIE_OFFSET))(this, a1);
		}

		::System::Void BDNNONMEEDF(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_BDNNONMEEDF_OFFSET))(this, a1);
		}

		::System::Void LCAOBLJDNAH(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_LCAOBLJDNAH_OFFSET))(this, a1);
		}

		::System::Void BDDCOJMIHHF(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_BDDCOJMIHHF_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::NKIJFPHFJCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void GOPJCNDGELM(::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::NKIJFPHFJCO*>*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_GOPJCNDGELM_OFFSET))(this, a1);
		}

		::System::Boolean ABDBJBDJJND(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_ABDBJBDJJND_OFFSET))(this, a1);
		}

		::System::Boolean BOFKKNEEJAM(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_BOFKKNEEJAM_OFFSET))(this, a1);
		}

		::System::Boolean GCCNGHGILCN(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_GCCNGHGILCN_OFFSET))(this, a1);
		}

		::System::Boolean AMKBPBEAGFJ(::NKIJFPHFJCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + CFGFAHEKNPD_AMKBPBEAGFJ_OFFSET))(this, a1);
		}

	};
