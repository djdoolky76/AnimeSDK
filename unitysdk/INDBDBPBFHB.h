#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define INDBDBPBFHB_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF87EF70)
#define INDBDBPBFHB_GGFBEIDGFCK_OFFSET UNITYSDK_OFFSET(0xF87EB60)
#define INDBDBPBFHB_GLCNHJGLEOJ_OFFSET UNITYSDK_OFFSET(0xF87EEA0)
#define INDBDBPBFHB_LIBFEFEJOCF_OFFSET UNITYSDK_OFFSET(0xF87ED60)
#define INDBDBPBFHB_LJDDAIBENLM_OFFSET UNITYSDK_OFFSET(0xF87ED70)
#define INDBDBPBFHB_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF87EAA0)
#define INDBDBPBFHB_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF87EC00)
#define INDBDBPBFHB__CTOR_OFFSET UNITYSDK_OFFSET(0xF87ECC0)

inline static constexpr unsigned int INDBDBPBFHB_TypeDefinitionIndex = 44285;

class INDBDBPBFHB
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* LDGJBGPJDIJ; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB__CTOR_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB_ONDETACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB_ONRECYCLE_OFFSET))(this);
	}

	::System::Void LIBFEFEJOCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB_LIBFEFEJOCF_OFFSET))(this);
	}

	::System::Boolean LJDDAIBENLM(::System::String* HLDBBGGLNKP, ::System::Int32& FGGJIEKGEPM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + INDBDBPBFHB_LJDDAIBENLM_OFFSET))(this, HLDBBGGLNKP, FGGJIEKGEPM);
	}

	::System::Void GLCNHJGLEOJ(::System::String* HLDBBGGLNKP, ::System::Int32 FGGJIEKGEPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + INDBDBPBFHB_GLCNHJGLEOJ_OFFSET))(this, HLDBBGGLNKP, FGGJIEKGEPM);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void GGFBEIDGFCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INDBDBPBFHB_GGFBEIDGFCK_OFFSET))(this);
	}
};
