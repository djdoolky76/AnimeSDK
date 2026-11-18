#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define JBMIHGMABLB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA7A80)

inline static constexpr unsigned int JBMIHGMABLB_TypeDefinitionIndex = 43288;

class JBMIHGMABLB : public ::System::Object
{
public:
	static ::Foundation::AssetPath* StaticGet_OMCMGKMLHAN()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(JBMIHGMABLB_TypeDefinitionIndex)->GetStaticField(0x46640);
	}
	static ::Foundation::AssetPath* StaticGet_CKONMBHJOAB()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(JBMIHGMABLB_TypeDefinitionIndex)->GetStaticField(0x46650);
	}
	static ::Foundation::AssetPath* StaticGet_EIPFEAONMIL()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(JBMIHGMABLB_TypeDefinitionIndex)->GetStaticField(0x46660);
	}
	// static const ::System::String* MOAKAPOLBPG; // 0x0
	// static const ::System::String* BODEIKHLEPO; // 0x0
	// static const ::System::String* IHCNPOCHHMM; // 0x0
	// static const ::System::Int32 OHLANCNELMG = 0x0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBMIHGMABLB__CCTOR_OFFSET))();
	}
};
