#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class CJLPABADMFD;
class FJOADPKDFLC;
class HEKHCLACHJE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JLEPEBBFNPF_BKNBFDFHHPL_OFFSET UNITYSDK_OFFSET(0xBA675C0)
#define JLEPEBBFNPF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA67680)
#define JLEPEBBFNPF_EILNOKGPIAH_OFFSET UNITYSDK_OFFSET(0xBA67570)
#define JLEPEBBFNPF_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xBA67280)
#define JLEPEBBFNPF_IENFOJDFJFP_OFFSET UNITYSDK_OFFSET(0xBA674C0)
#define JLEPEBBFNPF_LLGAKMPMKIO_OFFSET UNITYSDK_OFFSET(0xBA67610)
#define JLEPEBBFNPF_MANJAHAGLAF_OFFSET UNITYSDK_OFFSET(0xBA672D0)
#define JLEPEBBFNPF_OBNPMEAMBJG_OFFSET UNITYSDK_OFFSET(0xBA67320)

inline static constexpr unsigned int JLEPEBBFNPF_TypeDefinitionIndex = 82923;

	class JLEPEBBFNPF : public ::System::Object
	{
	public:
		::HEKHCLACHJE* LMDIICFMGNO; // 0x10
		::FJOADPKDFLC* HLFOAONDEOG; // 0x18
		::CJLPABADMFD* IBPBJBOKKMF; // 0x20
		::System::Void _ctor(::CJLPABADMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLPABADMFD*))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_GET_CACHEKEY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* MANJAHAGLAF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_MANJAHAGLAF_OFFSET))(this);
		}

		::HEKHCLACHJE* OBNPMEAMBJG()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_OBNPMEAMBJG_OFFSET))(this);
		}

		::FJOADPKDFLC* IENFOJDFJFP()
		{
			return ((::FJOADPKDFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_IENFOJDFJFP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* EILNOKGPIAH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_EILNOKGPIAH_OFFSET))(this);
		}

		::System::Boolean BKNBFDFHHPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_BKNBFDFHHPL_OFFSET))(this);
		}

		::System::Nullable_1<::System::UInt32> LLGAKMPMKIO()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + JLEPEBBFNPF_LLGAKMPMKIO_OFFSET))(this);
		}

	};
