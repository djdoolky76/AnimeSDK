#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOAFIDAMHJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA66D0)

inline static constexpr unsigned int JOAFIDAMHJM_TypeDefinitionIndex = 43304;

	class JOAFIDAMHJM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* JBOPPIIECMI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAFIDAMHJM_CTOR_OFFSET))(this);
		}

	};
