#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKOGGFMOBNK.h"
#include "unitysdk/System/Object.h"
class OLGBOBMGFIA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCCFDMGDNGN_CTOR_OFFSET UNITYSDK_OFFSET(0xE23AD50)
#define DCCFDMGDNGN_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xE23ADF0)
#define DCCFDMGDNGN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE23AE50)
#define DCCFDMGDNGN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE23B990)
#define DCCFDMGDNGN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE23AEF0)

inline static constexpr unsigned int DCCFDMGDNGN_TypeDefinitionIndex = 74043;

	class DCCFDMGDNGN : public ::System::Object
	{
	public:
		::System::String* FFBMNFMDBID; // 0x10
		::System::String* EFNAJMADAHM; // 0x18
		::System::String* HCDEOKNIGKG; // 0x20
		::System::String* GOKAENLDALA; // 0x28
		::System::String* COCBDJEDAJM; // 0x30
		::System::String* NKAACMGNNPK; // 0x38
		::System::String* EFAFKFONJHP; // 0x40
		::System::String* GLEBPCFAPMP; // 0x48
		::System::String* CLPNGEGJBBE; // 0x50
		::System::String* EOEABKONOAK; // 0x58
		::EKOGGFMOBNK FJCAKOIDONG; // 0x60
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DCCFDMGDNGN_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EIMIIHEDKFM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + DCCFDMGDNGN_EIMIIHEDKFM_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCFDMGDNGN_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>*))((::PBYTE)hIl2Cpp + DCCFDMGDNGN_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>*))((::PBYTE)hIl2Cpp + DCCFDMGDNGN_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

	};
