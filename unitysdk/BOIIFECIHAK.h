#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
class HEKHCLACHJE;
class LKDLCJELFCM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BOIIFECIHAK_AKNMOPFBHGM_OFFSET UNITYSDK_OFFSET(0x1A786030)
#define BOIIFECIHAK_APGECDKMLHC_OFFSET UNITYSDK_OFFSET(0x1A7860C0)
#define BOIIFECIHAK_CNHIDCKLBBF_OFFSET UNITYSDK_OFFSET(0x1A785D60)
#define BOIIFECIHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7865D0)
#define BOIIFECIHAK_DBHCNMHODDC_OFFSET UNITYSDK_OFFSET(0x1A785F10)
#define BOIIFECIHAK_DPPEELJFNJN_OFFSET UNITYSDK_OFFSET(0x1A786580)
#define BOIIFECIHAK_FABGNLBJDLF_OFFSET UNITYSDK_OFFSET(0x1A786150)
#define BOIIFECIHAK_FEEBBPMKAHF_OFFSET UNITYSDK_OFFSET(0x1A786510)
#define BOIIFECIHAK_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x1A785B70)
#define BOIIFECIHAK_GPHDLCNAHCB_OFFSET UNITYSDK_OFFSET(0x1A785FA0)
#define BOIIFECIHAK_GPMNLIEELCH_OFFSET UNITYSDK_OFFSET(0x1A785E80)
#define BOIIFECIHAK_HPDOCELINMF_OFFSET UNITYSDK_OFFSET(0x1A785C80)
#define BOIIFECIHAK_KMPCMIHIJLA_OFFSET UNITYSDK_OFFSET(0x1A7861E0)
#define BOIIFECIHAK_LIIPJMCOGNP_OFFSET UNITYSDK_OFFSET(0x1A785DF0)
#define BOIIFECIHAK_MCOKHKCDGPO_OFFSET UNITYSDK_OFFSET(0x1A786370)
#define BOIIFECIHAK_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x1A785BC0)
#define BOIIFECIHAK_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1A785C10)
#define BOIIFECIHAK_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x1A785D10)

inline static constexpr unsigned int BOIIFECIHAK_TypeDefinitionIndex = 82865;

	class BOIIFECIHAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* BPOEEEDGCCJ; // 0x10
		::HEKHCLACHJE* EPNCEHLCJOI; // 0x18
		::LKDLCJELFCM* IBPBJBOKKMF; // 0x20
		// static const ::System::String* AHCIPDBLIKE; // 0x0
		// static const ::System::String* LCJNOLFEKFC; // 0x0
		// static const ::System::String* NGOJHPEBGCG; // 0x0
		::System::Void _ctor(::LKDLCJELFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKDLCJELFCM*))((::PBYTE)hIl2Cpp + BOIIFECIHAK_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_MJGKNFEILLI_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* HPDOCELINMF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_HPDOCELINMF_OFFSET))(this);
		}

		::System::Int32 NFINIHKKLPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_NFINIHKKLPK_OFFSET))(this);
		}

		::System::String* CNHIDCKLBBF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_CNHIDCKLBBF_OFFSET))(this);
		}

		::System::String* LIIPJMCOGNP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_LIIPJMCOGNP_OFFSET))(this);
		}

		::System::String* GPMNLIEELCH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_GPMNLIEELCH_OFFSET))(this);
		}

		::System::String* DBHCNMHODDC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_DBHCNMHODDC_OFFSET))(this);
		}

		::System::String* GPHDLCNAHCB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_GPHDLCNAHCB_OFFSET))(this);
		}

		::System::String* AKNMOPFBHGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_AKNMOPFBHGM_OFFSET))(this);
		}

		::System::String* APGECDKMLHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_APGECDKMLHC_OFFSET))(this);
		}

		::System::String* FABGNLBJDLF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_FABGNLBJDLF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>* KMPCMIHIJLA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_KMPCMIHIJLA_OFFSET))(this);
		}

		::HEKHCLACHJE* MCOKHKCDGPO()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_MCOKHKCDGPO_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType> FEEBBPMKAHF()
		{
			return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_FEEBBPMKAHF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* DPPEELJFNJN()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOIIFECIHAK_DPPEELJFNJN_OFFSET))(this);
		}

	};
