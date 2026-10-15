#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFNPJFKAOH;
class BOJOBHMEEIH;
class CBDFLJKPJAC;
class FJFNJCPHFDM;
class NOGHMBAFJJA;
class OBJANKHLNGO;
class ONDGOPEKJNF;
class POBPAPGHKLD;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define BLDDCOCBMMD_ADD_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xBA65510)
#define BLDDCOCBMMD_APGACNNLDPJ_OFFSET UNITYSDK_OFFSET(0xBA65720)
#define BLDDCOCBMMD_CMCIODAMCGF_OFFSET UNITYSDK_OFFSET(0xBA65F30)
#define BLDDCOCBMMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA657B0)
#define BLDDCOCBMMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA65920)
#define BLDDCOCBMMD_FCJCFHMOPCL_OFFSET UNITYSDK_OFFSET(0xBA66090)
#define BLDDCOCBMMD_GGHBEAKPPNM_OFFSET UNITYSDK_OFFSET(0xBA65FE0)
#define BLDDCOCBMMD_ICHAGLHPBMH_OFFSET UNITYSDK_OFFSET(0xBA655D0)
#define BLDDCOCBMMD_KOBAGMJKECM_OFFSET UNITYSDK_OFFSET(0xBA66140)
#define BLDDCOCBMMD_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0xBA65C10)
#define BLDDCOCBMMD_OLCNOPLFGIE_OFFSET UNITYSDK_OFFSET(0xBA65EA0)
#define BLDDCOCBMMD_PPEDLFNLPCN_OFFSET UNITYSDK_OFFSET(0xBA65980)
#define BLDDCOCBMMD_REMOVE_ONMAYBECHANGED_OFFSET UNITYSDK_OFFSET(0xBA65570)

inline static constexpr unsigned int BLDDCOCBMMD_TypeDefinitionIndex = 79679;

	class BLDDCOCBMMD : public ::System::Object
	{
	public:
		::System::Action* OnMaybeChanged; // 0x10
		::BOJOBHMEEIH* GJALMBBNNOF; // 0x18
		::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* GPLCMNCOJPL; // 0x20
		::AMFNPJFKAOH* BDLGFMBOOGC; // 0x28
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x30
		::System::Void _ctor(::OBJANKHLNGO* a1, ::AMFNPJFKAOH* a2, ::FJFNJCPHFDM* a3)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*, ::AMFNPJFKAOH*, ::FJFNJCPHFDM*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void add_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_ADD_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnMaybeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_REMOVE_ONMAYBECHANGED_OFFSET))(this, a1);
		}

		::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>* ICHAGLHPBMH()
		{
			return ((::System::Collections::Immutable::IImmutableSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_ICHAGLHPBMH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PPEDLFNLPCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_PPEDLFNLPCN_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Void OLCNOPLFGIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_OLCNOPLFGIE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* APGACNNLDPJ()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_APGACNNLDPJ_OFFSET))(this);
		}

		::System::Void CMCIODAMCGF(::System::Object* a1, ::ONDGOPEKJNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ONDGOPEKJNF*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_CMCIODAMCGF_OFFSET))(this, a1, a2);
		}

		::System::Void GGHBEAKPPNM(::System::Object* a1, ::CBDFLJKPJAC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::CBDFLJKPJAC*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_GGHBEAKPPNM_OFFSET))(this, a1, a2);
		}

		::System::Void FCJCFHMOPCL(::System::Object* a1, ::POBPAPGHKLD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::POBPAPGHKLD*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_FCJCFHMOPCL_OFFSET))(this, a1, a2);
		}

		::System::Void KOBAGMJKECM(::System::Object* a1, ::NOGHMBAFJJA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::NOGHMBAFJJA*))((::PBYTE)hIl2Cpp + BLDDCOCBMMD_KOBAGMJKECM_OFFSET))(this, a1, a2);
		}

	};
