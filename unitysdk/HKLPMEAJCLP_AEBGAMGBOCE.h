#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HKLPMEAJCLP_DAMJCLDJKNI;
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HKLPMEAJCLP_AEBGAMGBOCE_KDPJEPPGAEI_OFFSET UNITYSDK_OFFSET(0x12E64030)
#define HKLPMEAJCLP_AEBGAMGBOCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12E64020)

inline static constexpr unsigned int HKLPMEAJCLP_AEBGAMGBOCE_TypeDefinitionIndex = 91259;

class HKLPMEAJCLP_AEBGAMGBOCE : public ::System::Object
{
public:
	::HKLPMEAJCLP_DAMJCLDJKNI* NGGNKKAMDGH; // 0x10
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AEBGAMGBOCE__CTOR_OFFSET))(this);
	}

	::HKLPMEAJCLP_DAMJCLDJKNI* KDPJEPPGAEI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierMap*>* MHDAJGPGLOD)
	{
		return ((::HKLPMEAJCLP_DAMJCLDJKNI*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialPropertyModifierMap*>*))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_AEBGAMGBOCE_KDPJEPPGAEI_OFFSET))(this, MHDAJGPGLOD);
	}
};
