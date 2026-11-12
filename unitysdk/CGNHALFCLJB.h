#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGNHALFCLJB_ReasonType.h"
#include "unitysdk/JEOCDNBFEBF.h"
class CGNHALFCLJB_OJIJNDKDKIB;
class CKKMKFFFCAA;
class EEHCJFEEOLF;
class HFCHPMGNMOM;
class NFICHOKOCMH;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace System { class Action; }
namespace System { class Object; }

#define CGNHALFCLJB_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0xD639BB0)
#define CGNHALFCLJB_ANNGAHLCEHP_OFFSET UNITYSDK_OFFSET(0xD639EA0)
#define CGNHALFCLJB_CTOR_OFFSET UNITYSDK_OFFSET(0xD63A110)
#define CGNHALFCLJB_DMCBHFPMKJA_OFFSET UNITYSDK_OFFSET(0xD639480)
#define CGNHALFCLJB_ECFFBFGCALC_OFFSET UNITYSDK_OFFSET(0xD63A000)
#define CGNHALFCLJB_FBAICNKOAOO_OFFSET UNITYSDK_OFFSET(0xD639AB0)
#define CGNHALFCLJB_GCAJOPNCJJK_OFFSET UNITYSDK_OFFSET(0xD63A050)
#define CGNHALFCLJB_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD639180)
#define CGNHALFCLJB_GET_REASON_OFFSET UNITYSDK_OFFSET(0xD6391C0)
#define CGNHALFCLJB_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD6391A0)
#define CGNHALFCLJB_JALAEJHFMEA_OFFSET UNITYSDK_OFFSET(0xD6391E0)
#define CGNHALFCLJB_JCHHJBAEOOP_OFFSET UNITYSDK_OFFSET(0xD6396C0)
#define CGNHALFCLJB_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0xD639720)
#define CGNHALFCLJB_LCMOPBKEBLL_OFFSET UNITYSDK_OFFSET(0xD639420)
#define CGNHALFCLJB_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xD639190)
#define CGNHALFCLJB_SET_REASON_OFFSET UNITYSDK_OFFSET(0xD6391D0)
#define CGNHALFCLJB_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xD6391B0)

inline static constexpr unsigned int CGNHALFCLJB_TypeDefinitionIndex = 82292;

	class CGNHALFCLJB : public ::JEOCDNBFEBF
	{
	public:
		::HFCHPMGNMOM* _Source_k__BackingField; // 0x10
		::R3::ReadOnlyReactiveProperty_1<::CKKMKFFFCAA*>* AGFLBCJNHLG; // 0x18
		::CGNHALFCLJB_OJIJNDKDKIB* _Context_k__BackingField; // 0x20
		::EEHCJFEEOLF* HKICFKEABLH; // 0x28
		::R3::ReadOnlyReactiveProperty_1<::NFICHOKOCMH*>* OJNCNOHNEEH; // 0x30
		::CGNHALFCLJB_ReasonType _Reason_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_CTOR_OFFSET))(this);
		}

		::CGNHALFCLJB_OJIJNDKDKIB* get_Context()
		{
			return ((::CGNHALFCLJB_OJIJNDKDKIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::CGNHALFCLJB_OJIJNDKDKIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNHALFCLJB_OJIJNDKDKIB*))((::PBYTE)hIl2Cpp + CGNHALFCLJB_SET_CONTEXT_OFFSET))(this, a1);
		}

		::HFCHPMGNMOM* get_Source()
		{
			return ((::HFCHPMGNMOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + CGNHALFCLJB_SET_SOURCE_OFFSET))(this, a1);
		}

		::CGNHALFCLJB_ReasonType get_Reason()
		{
			return ((::CGNHALFCLJB_ReasonType(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::CGNHALFCLJB_ReasonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGNHALFCLJB_ReasonType))((::PBYTE)hIl2Cpp + CGNHALFCLJB_SET_REASON_OFFSET))(this, a1);
		}

		::R3::ReadOnlyReactiveProperty_1<::NFICHOKOCMH*>* JALAEJHFMEA()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::NFICHOKOCMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_JALAEJHFMEA_OFFSET))(this);
		}

		::NFICHOKOCMH* LCMOPBKEBLL()
		{
			return ((::NFICHOKOCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_LCMOPBKEBLL_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::CKKMKFFFCAA*>* DMCBHFPMKJA()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::CKKMKFFFCAA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_DMCBHFPMKJA_OFFSET))(this);
		}

		::CKKMKFFFCAA* JCHHJBAEOOP()
		{
			return ((::CKKMKFFFCAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_JCHHJBAEOOP_OFFSET))(this);
		}

		::System::Void LBBLNALEPMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGNHALFCLJB_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void AGIMGKGCLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_AGIMGKGCLJP_OFFSET))(this);
		}

		::System::Boolean FBAICNKOAOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_FBAICNKOAOO_OFFSET))(this);
		}

		::System::Void ANNGAHLCEHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGNHALFCLJB_ANNGAHLCEHP_OFFSET))(this);
		}

		::System::Boolean ECFFBFGCALC(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CGNHALFCLJB_ECFFBFGCALC_OFFSET))(this, a1);
		}

		::System::Boolean GCAJOPNCJJK(::System::Action* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CGNHALFCLJB_GCAJOPNCJJK_OFFSET))(this, a1);
		}

	};
