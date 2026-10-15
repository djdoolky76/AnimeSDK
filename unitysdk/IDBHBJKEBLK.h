#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNBAPNPIADL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IDBHBJKEBLK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15E5B660)
#define IDBHBJKEBLK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B800)
#define IDBHBJKEBLK_OBHHNAKALGL_OFFSET UNITYSDK_OFFSET(0x15E5B5D0)

inline static constexpr unsigned int IDBHBJKEBLK_TypeDefinitionIndex = 61401;

	class IDBHBJKEBLK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JNBAPNPIADL*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::JNBAPNPIADL*>* OBHHNAKALGL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JNBAPNPIADL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBHBJKEBLK_OBHHNAKALGL_OFFSET))(this);
		}

		::JNBAPNPIADL* ACMKLFOMPFC(::System::UInt32 a1)
		{
			return ((::JNBAPNPIADL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDBHBJKEBLK_ACMKLFOMPFC_OFFSET))(this, a1);
		}

	};
