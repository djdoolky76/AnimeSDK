#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FCDJLGLBGFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x116A4420)

inline static constexpr unsigned int FCDJLGLBGFG_TypeDefinitionIndex = 70396;

class FCDJLGLBGFG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_KCAELBCIKJC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FCDJLGLBGFG_TypeDefinitionIndex)->GetStaticField(0x408A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCDJLGLBGFG__CCTOR_OFFSET))();
	}
};
