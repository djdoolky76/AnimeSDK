#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UISTOREPAGENPCCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C8BDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStorePageNPCConfig_TypeDefinitionIndex = 90605;

	class UIStorePageNPCConfig : public ::System::Object
	{
	public:
		::System::Int32 templateID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* npcPath; // 0x18
		::System::String* npcPosPath; // 0x20
		::System::Int32 animatorPara; // 0x28
		::System::Int32 soundId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTOREPAGENPCCONFIG__CTOR_OFFSET))(this);
		}
	};
}
