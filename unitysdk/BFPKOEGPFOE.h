#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AENKLJPFJKI_IPFLHDGGDFN_AFDELDILBGF;
class HKNOIHBGPDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BFPKOEGPFOE_GHHMPPMBGGH_OFFSET UNITYSDK_OFFSET(0x1F8507F0)
#define BFPKOEGPFOE_NJMGNMCGLFK_OFFSET UNITYSDK_OFFSET(0x1F850850)
#define BFPKOEGPFOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8505D0)

inline static constexpr unsigned int BFPKOEGPFOE_TypeDefinitionIndex = 18169;

class BFPKOEGPFOE : public ::System::Object
{
public:
	::System::String* _KGKLELJBEPJ_k__BackingField; // 0x10
	::System::String* _IFFLLFCOHOJ_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _EBPGJLECLLO_k__BackingField; // 0x20
	::HKNOIHBGPDC* _GOODJIDDJPP_k__BackingField; // 0x28
	::System::Int32 _OAADCBEBDKA_k__BackingField; // 0x30
	::System::Int32 _MNFDFKBPIIH_k__BackingField; // 0x34
	::System::Int32 _OAABPJKEICF_k__BackingField; // 0x38
	::System::Int32 _ALBODLCJIEC_k__BackingField; // 0x3C

	::System::Void _ctor(::HKNOIHBGPDC* DOOHCBBJGFD, ::AENKLJPFJKI_IPFLHDGGDFN_AFDELDILBGF* LHDHLAEPFBH)
	{
		return ((::System::Void(*)(::PVOID, ::HKNOIHBGPDC*, ::AENKLJPFJKI_IPFLHDGGDFN_AFDELDILBGF*))((::PBYTE)hIl2Cpp + BFPKOEGPFOE__CTOR_OFFSET))(this, DOOHCBBJGFD, LHDHLAEPFBH);
	}

	static ::BFPKOEGPFOE* GHHMPPMBGGH(::HKNOIHBGPDC* DOOHCBBJGFD, ::AENKLJPFJKI_IPFLHDGGDFN_AFDELDILBGF* LHDHLAEPFBH)
	{
		return ((::BFPKOEGPFOE*(*)(::HKNOIHBGPDC*, ::AENKLJPFJKI_IPFLHDGGDFN_AFDELDILBGF*))((::PBYTE)hIl2Cpp + BFPKOEGPFOE_GHHMPPMBGGH_OFFSET))(DOOHCBBJGFD, LHDHLAEPFBH);
	}

	::System::Int32 NJMGNMCGLFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPKOEGPFOE_NJMGNMCGLFK_OFFSET))(this);
	}
};
