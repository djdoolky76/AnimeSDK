#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class INMMPMDELKE;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { class Object; }

#define LKGIMGKIFFI___C__DISPLAYCLASS38_2_CTOR_OFFSET UNITYSDK_OFFSET(0xB73E340)
#define LKGIMGKIFFI___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET UNITYSDK_OFFSET(0xB740450)

inline static constexpr unsigned int LKGIMGKIFFI___c__DisplayClass38_2_TypeDefinitionIndex = 76763;

	template <typename T1, typename T2>
	class LKGIMGKIFFI___c__DisplayClass38_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::UnityEngine::Vector3 canonicalPos; // 0x18
		::UnityEngine::Vector3 settleAnchor; // 0x24
		::UnityEngine::Quaternion ed; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS38_2_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__4(::INMMPMDELKE* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS38_2__EXECUTE_B__4_OFFSET))(this, a1, a2, a3);
		}

	};
