#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropTagComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMNHPAGDEKM_AKPEEBNKBAI_OFFSET UNITYSDK_OFFSET(0xB7CB990)
#define LMNHPAGDEKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CBCB0)

inline static constexpr unsigned int LMNHPAGDEKM_TypeDefinitionIndex = 57807;

	class LMNHPAGDEKM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::RPG::GameCore::PropTagComponent*>* CBAABNLMKLO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNHPAGDEKM_CTOR_OFFSET))(this);
		}

		::System::Void AKPEEBNKBAI(::RPG::GameCore::PropConfig* a1, ::RPG::Client::MapPropDef* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropConfig*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + LMNHPAGDEKM_AKPEEBNKBAI_OFFSET))(this, a1, a2);
		}

	};
