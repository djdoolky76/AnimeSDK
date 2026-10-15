#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapPropDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS42_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB49FBF0)
#define BIDDFDEAEGB___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET UNITYSDK_OFFSET(0xB4A2090)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass42_0_TypeDefinitionIndex = 62117;

	class BIDDFDEAEGB___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::UInt32 serverEntityID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS42_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateProp_b__0(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS42_0___UPDATEPROP_B__0_OFFSET))(this, a1);
		}

	};
