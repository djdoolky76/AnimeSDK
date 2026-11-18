#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MJOLOHCFCHO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOBANNFKKIL_DENAADFNKGA_OFFSET UNITYSDK_OFFSET(0x1EFC8350)
#define HOBANNFKKIL_HDNCIJPMACK_OFFSET UNITYSDK_OFFSET(0x1EFC8370)
#define HOBANNFKKIL_LHLGPHPPGDO_OFFSET UNITYSDK_OFFSET(0x1EFC8380)
#define HOBANNFKKIL_LNLBOAODKIP_OFFSET UNITYSDK_OFFSET(0x1EFC8360)
#define HOBANNFKKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC82B0)

inline static constexpr unsigned int HOBANNFKKIL_TypeDefinitionIndex = 28893;

class HOBANNFKKIL : public ::System::Object
{
public:
	::System::String* _MFOMAOAKIKL_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MJOLOHCFCHO*>* _GDDNJIIHMBE_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* LACHAOHGJKB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOBANNFKKIL__CTOR_OFFSET))(this, LACHAOHGJKB);
	}

	::System::Void DENAADFNKGA(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOBANNFKKIL_DENAADFNKGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MJOLOHCFCHO*>* LNLBOAODKIP()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MJOLOHCFCHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBANNFKKIL_LNLBOAODKIP_OFFSET))(this);
	}

	::System::Void HDNCIJPMACK(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MJOLOHCFCHO*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MJOLOHCFCHO*>*))((::PBYTE)hIl2Cpp + HOBANNFKKIL_HDNCIJPMACK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LHLGPHPPGDO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOBANNFKKIL_LHLGPHPPGDO_OFFSET))(this);
	}
};
