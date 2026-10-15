#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
class OMBIMJDIHLE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHGFBJNGOIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB81D0)

inline static constexpr unsigned int KHGFBJNGOIB_TypeDefinitionIndex = 41997;

	class KHGFBJNGOIB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::LittleGameAbilityAttributeType, ::OMBIMJDIHLE*>* JOFJEIFLGBP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFBJNGOIB_CTOR_OFFSET))(this);
		}

	};
