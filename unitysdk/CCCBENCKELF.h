#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPCIFLHOOMC.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define CCCBENCKELF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D96C0)

inline static constexpr unsigned int CCCBENCKELF_TypeDefinitionIndex = 43493;

	class CCCBENCKELF : public ::System::Object
	{
	public:
		::System::Nullable_1<::CPCIFLHOOMC> LAPJCIBMPIH; // 0x10
		::System::Byte _padding0[0x30];
		::UnityEngine::Transform* GNOKDJHJJAB; // 0x48
		::UnityEngine::Vector3 OIHGPMFDIEA; // 0x50
		::UnityEngine::Vector3 HFOMPEEAPCG; // 0x5C
		::UnityEngine::Vector3 KONBAMDOGDH; // 0x68
		::UnityEngine::Vector3 CLMKNFILOLB; // 0x74
		::UnityEngine::Vector3 IJPLNPNAMBJ; // 0x80
		::RPG::Client::LittleGame::ETimelineControlGameLevelRotation NMELCPIOKNO; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCBENCKELF_CTOR_OFFSET))(this);
		}

	};
