#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDFJHGMLFHC_ANIECIDFIMH_OFFSET UNITYSDK_OFFSET(0x152439B0)
#define LDFJHGMLFHC_JCAPPODCLKF_OFFSET UNITYSDK_OFFSET(0x15243EF0)
#define LDFJHGMLFHC__CCTOR_OFFSET UNITYSDK_OFFSET(0x152438A0)
#define LDFJHGMLFHC__CTOR_OFFSET UNITYSDK_OFFSET(0x15243890)

inline static constexpr unsigned int LDFJHGMLFHC_TypeDefinitionIndex = 69625;

class LDFJHGMLFHC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Char>** StaticGet_MBPAGFGBAFA()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(LDFJHGMLFHC_TypeDefinitionIndex)->GetStaticField(0x46900);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_DLJBPIIFAIN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LDFJHGMLFHC_TypeDefinitionIndex)->GetStaticField(0x46908);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFJHGMLFHC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFJHGMLFHC__CCTOR_OFFSET))();
	}

	static ::System::String* ANIECIDFIMH(::System::String* OLOMNNBBHPJ, ::System::String* CJGAMEOMLIO, ::System::String* PJMAELIAHGH)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LDFJHGMLFHC_ANIECIDFIMH_OFFSET))(OLOMNNBBHPJ, CJGAMEOMLIO, PJMAELIAHGH);
	}

	static ::System::String* JCAPPODCLKF(::System::String* NFLDEIEOEOB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BPGPPMDMKEK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OEGEAFMAFBI, ::System::Boolean CADKEKCKAIG)
	{
		return ((::System::String*(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDFJHGMLFHC_JCAPPODCLKF_OFFSET))(NFLDEIEOEOB, BPGPPMDMKEK, OEGEAFMAFBI, CADKEKCKAIG);
	}
};
