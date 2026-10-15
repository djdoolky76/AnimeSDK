#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xCD74FB0)
#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xCD74120)

namespace RPG::Client
{
	class Effect_TransformToMaterialBehavior_TransformPropertyMapping : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* properties; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* rendererSlots; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALBEHAVIOR_TRANSFORMPROPERTYMAPPING_PKADDEPKJFN_OFFSET))(this);
		}

	};
}
