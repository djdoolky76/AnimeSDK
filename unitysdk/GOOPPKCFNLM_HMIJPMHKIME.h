#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOOPPKCFNLM_CatStatType.h"
#include "unitysdk/GOOPPKCFNLM_ModifyType.h"
#include "unitysdk/System/Object.h"
class KFKLPGEKJLA;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOOPPKCFNLM_HMIJPMHKIME_ACDDHAFNNMF_OFFSET UNITYSDK_OFFSET(0x1C64BBB0)
#define GOOPPKCFNLM_HMIJPMHKIME_BEEMEFMJEAA_OFFSET UNITYSDK_OFFSET(0x1C6489C0)
#define GOOPPKCFNLM_HMIJPMHKIME_CMNPMHMELPN_OFFSET UNITYSDK_OFFSET(0x1C648E70)
#define GOOPPKCFNLM_HMIJPMHKIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1C648870)
#define GOOPPKCFNLM_HMIJPMHKIME_INONGNBEAGD_OFFSET UNITYSDK_OFFSET(0x1C649080)
#define GOOPPKCFNLM_HMIJPMHKIME_MCLLMLMLLIJ_OFFSET UNITYSDK_OFFSET(0x1C64B940)
#define GOOPPKCFNLM_HMIJPMHKIME_POCHNMACBKN_OFFSET UNITYSDK_OFFSET(0x1C648CB0)

	class GOOPPKCFNLM_HMIJPMHKIME : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::UInt32>* PIGOAOFKIOA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FNPNBACMLBI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_CTOR_OFFSET))(this);
		}

		::System::Void BEEMEFMJEAA(::GOOPPKCFNLM_CatStatType a1, ::GOOPPKCFNLM_ModifyType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GOOPPKCFNLM_CatStatType, ::GOOPPKCFNLM_ModifyType, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_BEEMEFMJEAA_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 POCHNMACBKN(::GOOPPKCFNLM_CatStatType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GOOPPKCFNLM_CatStatType))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_POCHNMACBKN_OFFSET))(this, a1);
		}

		::System::Void CMNPMHMELPN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_CMNPMHMELPN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 INONGNBEAGD(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_INONGNBEAGD_OFFSET))(this, a1);
		}

		::System::String* ACDDHAFNNMF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_ACDDHAFNNMF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KFKLPGEKJLA*>* MCLLMLMLLIJ()
		{
			return ((::System::Collections::Generic::List_1<::KFKLPGEKJLA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HMIJPMHKIME_MCLLMLMLLIJ_OFFSET))(this);
		}

	};
