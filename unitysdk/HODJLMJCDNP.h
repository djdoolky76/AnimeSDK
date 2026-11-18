#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HOEMOACNPMC;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HODJLMJCDNP_DFPGEEMAMFK_OFFSET UNITYSDK_OFFSET(0xEA00970)
#define HODJLMJCDNP_HDFFADIKPIP_OFFSET UNITYSDK_OFFSET(0xEA00DC0)
#define HODJLMJCDNP_HMNGKICNKLH_OFFSET UNITYSDK_OFFSET(0xEA00C00)
#define HODJLMJCDNP_KEGFOPCMPLO_2_OFFSET UNITYSDK_OFFSET(0xEA016B0)
#define HODJLMJCDNP_KEGFOPCMPLO_3_OFFSET UNITYSDK_OFFSET(0xEA019D0)
#define HODJLMJCDNP_NELDOEGPCFM_1_OFFSET UNITYSDK_OFFSET(0xEA01190)
#define HODJLMJCDNP_OMGOAGGEGML_OFFSET UNITYSDK_OFFSET(0xEA00B90)

inline static constexpr unsigned int HODJLMJCDNP_TypeDefinitionIndex = 65468;

class HODJLMJCDNP : public ::System::Object
{
public:
	// static const ::System::Int32 DKPFGCOKODN = 0x2710; // 0x0
	// static const ::System::Int32 MOMMOHLGKCI = 0x64; // 0x0
	// static const ::System::Single DPLEFMBJHIE; // 0x0

	static ::System::Boolean DFPGEEMAMFK(::HOEMOACNPMC* MFEPCLGOHPI, ::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::HOEMOACNPMC*, ::System::Int32))((::PBYTE)hIl2Cpp + HODJLMJCDNP_DFPGEEMAMFK_OFFSET))(MFEPCLGOHPI, EGEGIMGMJHN);
	}

	static ::System::Boolean HMNGKICNKLH(::HOEMOACNPMC* MFEPCLGOHPI)
	{
		return ((::System::Boolean(*)(::HOEMOACNPMC*))((::PBYTE)hIl2Cpp + HODJLMJCDNP_HMNGKICNKLH_OFFSET))(MFEPCLGOHPI);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* HDFFADIKPIP(::HOEMOACNPMC* MFEPCLGOHPI, ::System::Int32 BEPMDFENBMH, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::HOEMOACNPMC*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HODJLMJCDNP_HDFFADIKPIP_OFFSET))(MFEPCLGOHPI, BEPMDFENBMH, JHFKDGBCOBA);
	}

	static ::System::Int32 NELDOEGPCFM_1(::HOEMOACNPMC* MFEPCLGOHPI, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* KHGFAKJKDGG)
	{
		return ((::System::Int32(*)(::HOEMOACNPMC*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HODJLMJCDNP_NELDOEGPCFM_1_OFFSET))(MFEPCLGOHPI, KHGFAKJKDGG);
	}

	static ::System::Int32 KEGFOPCMPLO_2(::HOEMOACNPMC* MFEPCLGOHPI, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::HOEMOACNPMC*, ::System::Int32))((::PBYTE)hIl2Cpp + HODJLMJCDNP_KEGFOPCMPLO_2_OFFSET))(MFEPCLGOHPI, GOKEGHENOGP);
	}

	static ::System::Int32 OMGOAGGEGML(::HOEMOACNPMC* MFEPCLGOHPI)
	{
		return ((::System::Int32(*)(::HOEMOACNPMC*))((::PBYTE)hIl2Cpp + HODJLMJCDNP_OMGOAGGEGML_OFFSET))(MFEPCLGOHPI);
	}

	static ::System::Int32 KEGFOPCMPLO_3(::HOEMOACNPMC* MFEPCLGOHPI, ::System::Int32 FBCNNPLFAAG, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::HOEMOACNPMC*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HODJLMJCDNP_KEGFOPCMPLO_3_OFFSET))(MFEPCLGOHPI, FBCNNPLFAAG, GOKEGHENOGP);
	}
};
