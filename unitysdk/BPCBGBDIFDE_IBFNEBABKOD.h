#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SMapGroupMemberStateExConfig.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE_MKFBOFMDCFM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define BPCBGBDIFDE_IBFNEBABKOD_FOLJKAGHPAD_OFFSET UNITYSDK_OFFSET(0x16A04D80)
#define BPCBGBDIFDE_IBFNEBABKOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A04D70)

inline static constexpr unsigned int BPCBGBDIFDE_IBFNEBABKOD_TypeDefinitionIndex = 78643;

class BPCBGBDIFDE_IBFNEBABKOD : public ::System::Object
{
public:
	::MoleMole::SMapGroupMemberStateExConfig CNLDAKBENIN; // 0x10
	::BPCBGBDIFDE_MKFBOFMDCFM* EEMOEMFLABI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IBFNEBABKOD__CTOR_OFFSET))(this);
	}

	::System::Void FOLJKAGHPAD(::System::Boolean EBFCACIEKBC, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* NJKCPGDNAED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_IBFNEBABKOD_FOLJKAGHPAD_OFFSET))(this, EBFCACIEKBC, NJKCPGDNAED);
	}
};
