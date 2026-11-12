#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapPropDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE343D0)
#define BIDDFDEAEGB___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET UNITYSDK_OFFSET(0xBE352D0)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass53_0_TypeDefinitionIndex = 63536;

	class BIDDFDEAEGB___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasLocalProp_b__0(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS53_0__HASLOCALPROP_B__0_OFFSET))(this, a1);
		}

	};
