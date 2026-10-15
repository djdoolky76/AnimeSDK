#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ModifierBehaviorVisual; }

#define PGJJNAJLKKM_HNPOGLCAHPK_OFFSET UNITYSDK_OFFSET(0xC2237E0)

inline static constexpr unsigned int PGJJNAJLKKM_TypeDefinitionIndex = 54428;

	class PGJJNAJLKKM : public ::System::Object
	{
	public:
		static ::System::Int32 HNPOGLCAHPK(::RPG::GameCore::ModifierBehaviorVisual* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + PGJJNAJLKKM_HNPOGLCAHPK_OFFSET))(a1);
		}

	};
