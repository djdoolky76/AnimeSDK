#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HKLPMEAJCLP_DAMJCLDJKNI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F42100)

inline static constexpr unsigned int HKLPMEAJCLP_DAMJCLDJKNI_TypeDefinitionIndex = 91254;

class HKLPMEAJCLP_DAMJCLDJKNI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>* LGDBDFEGOLG; // 0x10
	::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>* PAICOOLDODH; // 0x18
	::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad* AOBFDBKJENG; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>* AAGEEJEJCEA; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* BHIAPPCCAEM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKLPMEAJCLP_DAMJCLDJKNI__CTOR_OFFSET))(this);
	}
};
