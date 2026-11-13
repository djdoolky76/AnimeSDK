#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class BGFFJHNFLGJ;
class BMBKJMIJLMM;
class CMICAJFDMPG;
class FNFNBEENNKI;
class GLKBPLNOPAJ;
class MBJGGCCKIOC;
class MBLFKBFEOPN;
class NOEOAMBCKHB;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NKBLJHEKGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7AB6A0)

inline static constexpr unsigned int NKBLJHEKGBP_TypeDefinitionIndex = 79829;

	class NKBLJHEKGBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::GameCore::IngredientKind, ::System::UInt32>* PNAKADLBMKN; // 0x10
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::Il2CppArray<::FNFNBEENNKI*>*>* OAPDFCKOKKI; // 0x18
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::BMBKJMIJLMM*>* HBOFBJOBFBP; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::CMICAJFDMPG*>* LPJNGFDGICM; // 0x28
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::BGFFJHNFLGJ*>* EMAHFFHFJJD; // 0x30
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::BMBKJMIJLMM*>* AFEMMBFEOPH; // 0x38
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::GLKBPLNOPAJ*>* IKPNJPOBNOC; // 0x40
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::MBJGGCCKIOC*>* DFCOGFOMJIO; // 0x48
		::System::Collections::Generic::IReadOnlyList_1<::NOEOAMBCKHB*>* EEAEMEGCEFE; // 0x50
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::MBLFKBFEOPN*>* FFJAFJCPIJD; // 0x58
		::System::Single BNLKJJDFGFH; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLJHEKGBP_CTOR_OFFSET))(this);
		}

	};
