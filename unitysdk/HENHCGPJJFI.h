#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKLPCALPDAE.h"
class AMJIONEOLPP;
class DMGLFMNEJGL;
class OJDIPBBEIOB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HENHCGPJJFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C5CEB0)
#define HENHCGPJJFI_HAALMFIPDCJ_OFFSET UNITYSDK_OFFSET(0x15C5D1C0)
#define HENHCGPJJFI_MGNLOHIJACL_OFFSET UNITYSDK_OFFSET(0x15C5CEF0)

inline static constexpr unsigned int HENHCGPJJFI_TypeDefinitionIndex = 67242;

	class HENHCGPJJFI : public ::IKLPCALPDAE
	{
	public:
		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* JPHNLHGEIFL; // 0x10
		::DMGLFMNEJGL* NABLOINKCCC; // 0x18
		::System::Void _ctor(::DMGLFMNEJGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + HENHCGPJJFI_CTOR_OFFSET))(this, a1);
		}

		::System::Void MGNLOHIJACL(::AMJIONEOLPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMJIONEOLPP*))((::PBYTE)hIl2Cpp + HENHCGPJJFI_MGNLOHIJACL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* HAALMFIPDCJ()
		{
			return ((::System::Collections::Generic::List_1<::OJDIPBBEIOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENHCGPJJFI_HAALMFIPDCJ_OFFSET))(this);
		}

	};
