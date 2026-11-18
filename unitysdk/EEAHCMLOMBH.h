#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class String; }
template <typename T> class LJHFMILANJA_1;

#define EEAHCMLOMBH_IADKMLACDMD_OFFSET UNITYSDK_OFFSET(0x10631D90)
#define EEAHCMLOMBH_JENHIJPKEKG_OFFSET UNITYSDK_OFFSET(0x10631DA0)
#define EEAHCMLOMBH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x10631CF0)
#define EEAHCMLOMBH__CTOR_OFFSET UNITYSDK_OFFSET(0x10631D80)

inline static constexpr unsigned int EEAHCMLOMBH_TypeDefinitionIndex = 71992;

class EEAHCMLOMBH : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::String*>* _LPOKKPODLGO_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAHCMLOMBH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAHCMLOMBH_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void IADKMLACDMD(::LJHFMILANJA_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::String*>*))((::PBYTE)hIl2Cpp + EEAHCMLOMBH_IADKMLACDMD_OFFSET))(this, EGEGIMGMJHN);
	}

	::LJHFMILANJA_1<::System::String*>* JENHIJPKEKG()
	{
		return ((::LJHFMILANJA_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAHCMLOMBH_JENHIJPKEKG_OFFSET))(this);
	}
};
