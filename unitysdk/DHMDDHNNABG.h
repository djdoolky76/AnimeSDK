#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODPINEGGNDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DHMDDHNNABG_EIDBOJPDKPP_OFFSET UNITYSDK_OFFSET(0x1FE28860)
#define DHMDDHNNABG_KAKLGHJLHOI_OFFSET UNITYSDK_OFFSET(0x1FE28850)
#define DHMDDHNNABG_KGMDDJHHODA_OFFSET UNITYSDK_OFFSET(0x1FE28840)
#define DHMDDHNNABG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE28830)

inline static constexpr unsigned int DHMDDHNNABG_TypeDefinitionIndex = 18265;

class DHMDDHNNABG : public ::System::Object
{
public:
	::ODPINEGGNDC* _EMKJBPMODHF_k__BackingField; // 0x10
	::System::String* _INLKNIAABAJ_k__BackingField; // 0x18
	::System::Int32 _EGBKMJIFEKN_k__BackingField; // 0x20

	::System::Void _ctor(::ODPINEGGNDC* FDDEMMPCGAC, ::System::String* HGHNCCPAFPJ, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::ODPINEGGNDC*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DHMDDHNNABG__CTOR_OFFSET))(this, FDDEMMPCGAC, HGHNCCPAFPJ, ABHBKFJKINO);
	}

	::System::String* KGMDDJHHODA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMDDHNNABG_KGMDDJHHODA_OFFSET))(this);
	}

	::ODPINEGGNDC* KAKLGHJLHOI()
	{
		return ((::ODPINEGGNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHMDDHNNABG_KAKLGHJLHOI_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>* EIDBOJPDKPP(::System::Int32 HDKNIHBGIBC)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::DHMDDHNNABG*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DHMDDHNNABG_EIDBOJPDKPP_OFFSET))(this, HDKNIHBGIBC);
	}
};
