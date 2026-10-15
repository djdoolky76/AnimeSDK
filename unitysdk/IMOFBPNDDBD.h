#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CharacterReplaceOriginMaterial; }
namespace RPG::GameCore { class TaskContext; }

#define IMOFBPNDDBD_CTOR_OFFSET UNITYSDK_OFFSET(0x164D35A0)
#define IMOFBPNDDBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D35D0)

inline static constexpr unsigned int IMOFBPNDDBD_TypeDefinitionIndex = 56350;

	class IMOFBPNDDBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReplaceOriginMaterial* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReplaceOriginMaterial*))((::PBYTE)hIl2Cpp + IMOFBPNDDBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOFBPNDDBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
