#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/System/Object.h"
class ECBCBEIADBI;
namespace System { class String; }

#define AOIAGGGHHBD_CTOR_OFFSET UNITYSDK_OFFSET(0x158A20C0)

inline static constexpr unsigned int AOIAGGGHHBD_TypeDefinitionIndex = 73284;

	class AOIAGGGHHBD : public ::System::Object
	{
	public:
		::Il2CppArray<::ECBCBEIADBI*>* MOJOOLJFAIG; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::RPG::GameCore::ActionBarUIStatus FFEPLIHOFLA; // 0x20
		::System::Boolean FMAKHJFGGHJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIAGGGHHBD_CTOR_OFFSET))(this);
		}

	};
