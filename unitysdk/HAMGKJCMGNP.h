#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJFEFELIHH.h"
#include "unitysdk/System/Object.h"

class CBMNPCAPJIF;
class HOCCEGIOEID;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HAMGKJCMGNP_DFIGOHGIDJN_OFFSET UNITYSDK_OFFSET(0x13E0A820)
#define HAMGKJCMGNP_GAENIEHFFAP_OFFSET UNITYSDK_OFFSET(0x13E0A500)
#define HAMGKJCMGNP_HFINFODJCJG_OFFSET UNITYSDK_OFFSET(0x13E0A6C0)
#define HAMGKJCMGNP_IECLBKNFIPH_OFFSET UNITYSDK_OFFSET(0x13E0A360)
#define HAMGKJCMGNP_KIPGBLFACHN_OFFSET UNITYSDK_OFFSET(0x13E0A660)
#define HAMGKJCMGNP_NCEODKLOOEB_OFFSET UNITYSDK_OFFSET(0x13E0A810)
#define HAMGKJCMGNP_NIGDAKHLLMP_OFFSET UNITYSDK_OFFSET(0x13E0A830)
#define HAMGKJCMGNP_PCOEGFIHFKL_OFFSET UNITYSDK_OFFSET(0x13E0A200)
#define HAMGKJCMGNP__CTOR_OFFSET UNITYSDK_OFFSET(0x13E0A160)

inline static constexpr unsigned int HAMGKJCMGNP_TypeDefinitionIndex = 47481;

class HAMGKJCMGNP : public ::System::Object
{
public:
	::System::String* DBBDKLENOKD; // 0x10
	::System::Collections::Generic::List_1<::CBMNPCAPJIF*>* COLMFCPPKNH; // 0x18
	::System::Int64 _KMBBJNCEOMG_k__BackingField; // 0x20
	::System::Int32 GOPFPLCFNJK; // 0x28
	::KAJFEFELIHH OBNIAHNMHPF; // 0x2C

	::System::Void _ctor(::KAJFEFELIHH OBNIAHNMHPF, ::System::Int32 CBGJNIGFNDN)
	{
		return ((::System::Void(*)(::PVOID, ::KAJFEFELIHH, ::System::Int32))((::PBYTE)hIl2Cpp + HAMGKJCMGNP__CTOR_OFFSET))(this, OBNIAHNMHPF, CBGJNIGFNDN);
	}

	::System::Boolean PCOEGFIHFKL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_PCOEGFIHFKL_OFFSET))(this);
	}

	::System::Boolean IECLBKNFIPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_IECLBKNFIPH_OFFSET))(this);
	}

	::System::Boolean GAENIEHFFAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_GAENIEHFFAP_OFFSET))(this);
	}

	::System::Boolean KIPGBLFACHN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_KIPGBLFACHN_OFFSET))(this);
	}

	::System::Int32 HFINFODJCJG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_HFINFODJCJG_OFFSET))(this);
	}

	::System::Void NCEODKLOOEB(::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_NCEODKLOOEB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int64 DFIGOHGIDJN()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_DFIGOHGIDJN_OFFSET))(this);
	}

	::System::Void NIGDAKHLLMP(::CBMNPCAPJIF* EJANOMALBNM, ::HOCCEGIOEID* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::CBMNPCAPJIF*, ::HOCCEGIOEID*))((::PBYTE)hIl2Cpp + HAMGKJCMGNP_NIGDAKHLLMP_OFFSET))(this, EJANOMALBNM, HMMMOCJAEOA);
	}
};
