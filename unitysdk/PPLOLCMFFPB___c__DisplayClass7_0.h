#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPLOLCMFFPB;
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PPLOLCMFFPB___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC38E420)
#define PPLOLCMFFPB___C__DISPLAYCLASS7_0__CREATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0xC391750)

inline static constexpr unsigned int PPLOLCMFFPB___c__DisplayClass7_0_TypeDefinitionIndex = 60769;

	class PPLOLCMFFPB___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::PropRow* pProp; // 0x10
		::RPG::Client::MapPropDef* mapPropDef; // 0x18
		::System::String* friendlyName; // 0x20
		::System::String* uniqueName; // 0x28
		::System::Action_1<::RPG::GameCore::GameEntity*>* onLoadFinish; // 0x30
		::PPLOLCMFFPB* __4__this; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLOLCMFFPB___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateProp_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPLOLCMFFPB___C__DISPLAYCLASS7_0__CREATEPROP_B__0_OFFSET))(this, a1);
		}

	};
