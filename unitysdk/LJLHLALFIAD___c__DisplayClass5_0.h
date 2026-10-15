#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }

#define LJLHLALFIAD___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB718880)
#define LJLHLALFIAD___C__DISPLAYCLASS5_0__CREATESETOFFSETNODEWORLDPOSECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xB719DF0)

inline static constexpr unsigned int LJLHLALFIAD___c__DisplayClass5_0_TypeDefinitionIndex = 80844;

	class LJLHLALFIAD___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* posCtrl; // 0x10
		::UnityEngine::Vector3 worldPos; // 0x18
		::UnityEngine::Quaternion worldRot; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _CreateSetOffsetNodeWorldPoseCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLHLALFIAD___C__DISPLAYCLASS5_0__CREATESETOFFSETNODEWORLDPOSECOMMAND_B__0_OFFSET))(this);
		}

	};
