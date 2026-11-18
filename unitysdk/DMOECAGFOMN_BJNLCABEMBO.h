#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMOECAGFOMN_BJNLCABEMBO_LFAKNBLMDHA_OFFSET UNITYSDK_OFFSET(0x19D7CCC0)
#define DMOECAGFOMN_BJNLCABEMBO_OKFGGAAPFGC_OFFSET UNITYSDK_OFFSET(0x19D7CB50)
#define DMOECAGFOMN_BJNLCABEMBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D7CAD0)

inline static constexpr unsigned int DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex = 38261;

class DMOECAGFOMN_BJNLCABEMBO : public ::System::Object
{
public:
	static ::System::String** StaticGet_DJAPOPIODNG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex)->GetStaticField(0x35290);
	}
	static ::System::String** StaticGet_MMEHENCDFKL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex)->GetStaticField(0x35298);
	}
	static ::System::String** StaticGet_PMJDICCBFLG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex)->GetStaticField(0x352A0);
	}
	static ::System::String** StaticGet_BIHIPMAAFJK()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex)->GetStaticField(0x352A8);
	}
	static ::System::String** StaticGet_GKKMLAIBGCE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_BJNLCABEMBO_TypeDefinitionIndex)->GetStaticField(0x352B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_BJNLCABEMBO__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OKFGGAAPFGC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_BJNLCABEMBO_OKFGGAAPFGC_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LFAKNBLMDHA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_BJNLCABEMBO_LFAKNBLMDHA_OFFSET))();
	}
};
