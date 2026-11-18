#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMOECAGFOMN_CDHPGKHBOCC_LFAKNBLMDHA_OFFSET UNITYSDK_OFFSET(0x15872350)
#define DMOECAGFOMN_CDHPGKHBOCC__CCTOR_OFFSET UNITYSDK_OFFSET(0x158722D0)

inline static constexpr unsigned int DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex = 38280;

class DMOECAGFOMN_CDHPGKHBOCC : public ::System::Object
{
public:
	static ::System::String** StaticGet_MMEHENCDFKL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex)->GetStaticField(0x315A0);
	}
	static ::System::String** StaticGet_OPHBDHAGGJC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex)->GetStaticField(0x315A8);
	}
	static ::System::String** StaticGet_MGKDKMMIPPL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex)->GetStaticField(0x315B0);
	}
	static ::System::String** StaticGet_OADMOEIGJBN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex)->GetStaticField(0x315B8);
	}
	static ::System::String** StaticGet_PMJDICCBFLG()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DMOECAGFOMN_CDHPGKHBOCC_TypeDefinitionIndex)->GetStaticField(0x315C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_CDHPGKHBOCC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LFAKNBLMDHA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + DMOECAGFOMN_CDHPGKHBOCC_LFAKNBLMDHA_OFFSET))();
	}
};
