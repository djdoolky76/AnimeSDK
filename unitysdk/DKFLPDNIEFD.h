#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DKFLPDNIEFD_CTOR_OFFSET UNITYSDK_OFFSET(0xFFE0CA0)

inline static constexpr unsigned int DKFLPDNIEFD_TypeDefinitionIndex = 71577;

	class DKFLPDNIEFD : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 HOLEMFENGNB; // 0x10
		::RPG::GameCore::VCameraState FIOICBCELHD; // 0x1C
		::System::Single LIPGDJLDNOJ; // 0x20
		::System::Single IDKONBFPBLH; // 0x24
		::System::Single EOJHKLHPGAM; // 0x28
		::System::Single FOOAENGFEFH; // 0x2C
		::UnityEngine::Vector3 BNGJDBHHMFO; // 0x30
		::System::Boolean JFAELDAFPKG; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single CDCLODPBBFM; // 0x40
		::UnityEngine::Vector3 NKEIBNDEAOE; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFLPDNIEFD_CTOR_OFFSET))(this);
		}

	};
