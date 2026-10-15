#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"
class ECBCBEIADBI;
namespace System { class String; }

#define AOIAGGGHHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x158AD4A0)

inline static constexpr unsigned int AOIAGGGHHBD_TypeDefinitionIndex = 73285;

	class AOIAGGGHHBD : public ::System::Object
	{
	public:
		::System::String* IPKCFNKIDMB; // 0x10
		::Il2CppArray<::ECBCBEIADBI*>* MOJOOLJFAIG; // 0x18
		::System::Boolean FMAKHJFGGHJ; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ActionBarUIStatus FFEPLIHOFLA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIAGGGHHBD_CTOR_OFFSET))(this);
		}

	};
