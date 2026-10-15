#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class CJLPABADMFD;
class FJOADPKDFLC;
class HEKHCLACHJE;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JLEPEBBFNPF_BKNBFDFHHPL_OFFSET UNITYSDK_OFFSET(0xB238A40)
#define JLEPEBBFNPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB238B00)
#define JLEPEBBFNPF_EILNOKGPIAH_OFFSET UNITYSDK_OFFSET(0xB2389F0)
#define JLEPEBBFNPF_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB238700)
#define JLEPEBBFNPF_IENFOJDFJFP_OFFSET UNITYSDK_OFFSET(0xB238940)
#define JLEPEBBFNPF_LLGAKMPMKIO_OFFSET UNITYSDK_OFFSET(0xB238A90)
#define JLEPEBBFNPF_MANJAHAGLAF_OFFSET UNITYSDK_OFFSET(0xB238750)
#define JLEPEBBFNPF_OBNPMEAMBJG_OFFSET UNITYSDK_OFFSET(0xB2387A0)

inline static constexpr unsigned int JLEPEBBFNPF_TypeDefinitionIndex = 80145;

	class JLEPEBBFNPF : public ::System::Object
	{
	public:
		::CJLPABADMFD* IBPBJBOKKMF; // 0x10
		::FJOADPKDFLC* HLFOAONDEOG; // 0x18
		::HEKHCLACHJE* LMDIICFMGNO; // 0x20
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
