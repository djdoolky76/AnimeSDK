#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define BLMGKNOOOJD_KOMLALPHLKE_CBIBKBILMAA_OFFSET UNITYSDK_OFFSET(0xC40CC20)
#define BLMGKNOOOJD_KOMLALPHLKE_CTOR_OFFSET UNITYSDK_OFFSET(0xC40BD90)
#define BLMGKNOOOJD_KOMLALPHLKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC40B860)
#define BLMGKNOOOJD_KOMLALPHLKE_EGNNJAGKMIH_OFFSET UNITYSDK_OFFSET(0xC40CB30)
#define BLMGKNOOOJD_KOMLALPHLKE_EOHMFMGKAKI_OFFSET UNITYSDK_OFFSET(0xC40C5B0)
#define BLMGKNOOOJD_KOMLALPHLKE_FFDHICFFNPJ_OFFSET UNITYSDK_OFFSET(0xC40C4F0)
#define BLMGKNOOOJD_KOMLALPHLKE_MIIJKHPLOAF_OFFSET UNITYSDK_OFFSET(0xC40CBD0)

inline static constexpr unsigned int BLMGKNOOOJD_KOMLALPHLKE_TypeDefinitionIndex = 54539;

	class BLMGKNOOOJD_KOMLALPHLKE : public ::System::Object
	{
	public:
		::System::String* FGMKCOANOOK; // 0x10
		::System::Func_1<::System::Single>* BIDKAGLCDPP; // 0x18
		::System::UInt32 KPBMOBEFBCC; // 0x20
		::System::Single DDPJNLAFNAN; // 0x24
		::System::Void _ctor(::System::String* a1, ::System::Func_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_DISPOSE_OFFSET))(this);
		}

		::System::Void EOHMFMGKAKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_EOHMFMGKAKI_OFFSET))(this);
		}

		::System::Void EGNNJAGKMIH(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_EGNNJAGKMIH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CBIBKBILMAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_CBIBKBILMAA_OFFSET))(this, a1);
		}

		::System::Void FFDHICFFNPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_FFDHICFFNPJ_OFFSET))(this);
		}

		::System::Void MIIJKHPLOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLMGKNOOOJD_KOMLALPHLKE_MIIJKHPLOAF_OFFSET))(this);
		}

	};
