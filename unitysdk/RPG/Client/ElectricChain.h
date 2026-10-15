#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChain_DisplaceType.h"
#include "unitysdk/RPG/Client/ElectricChain_LineControlMode.h"
#include "unitysdk/RPG/Client/ElectricChain_LineType.h"
#include "unitysdk/RPG/Client/ElectricChain_RandomType.h"
#include "unitysdk/RPG/Client/ElectricChain_StartEndPos.h"
#include "unitysdk/RPG/Client/ElectricChain_UpdateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class BezierCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ELECTRICCHAIN_AFIBJFHPHDD_OFFSET UNITYSDK_OFFSET(0xCD72040)
#define RPG_CLIENT_ELECTRICCHAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xCD71F70)
#define RPG_CLIENT_ELECTRICCHAIN_DGPGAMHEDHM_OFFSET UNITYSDK_OFFSET(0xCD71B60)
#define RPG_CLIENT_ELECTRICCHAIN_GET__LINELENGTH_OFFSET UNITYSDK_OFFSET(0xCD71A80)
#define RPG_CLIENT_ELECTRICCHAIN_HCHLCHDGIGC_OFFSET UNITYSDK_OFFSET(0xCD72830)
#define RPG_CLIENT_ELECTRICCHAIN_HEPGHHHGBHG_OFFSET UNITYSDK_OFFSET(0xCD72BF0)
#define RPG_CLIENT_ELECTRICCHAIN_HOCLNOCDKFN_OFFSET UNITYSDK_OFFSET(0xCD72F90)
#define RPG_CLIENT_ELECTRICCHAIN_NHMKGIDHHGB_OFFSET UNITYSDK_OFFSET(0xCD71930)
#define RPG_CLIENT_ELECTRICCHAIN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCD72300)
#define RPG_CLIENT_ELECTRICCHAIN__GETRANDOMVALUE_B__45_0_OFFSET UNITYSDK_OFFSET(0xCD73340)

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_TypeDefinitionIndex = 70458;

	class ElectricChain : public ::System::Object
	{
	public:
		::RPG::Client::ElectricChain_LineType lineType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* startPoint; // 0x18
		::UnityEngine::Transform* endPoint; // 0x20
		::RPG::Client::BezierCurve* curve; // 0x28
		::UnityEngine::LineRenderer* lineRenderer; // 0x30
		::System::Single detail; // 0x38
		::RPG::Client::ElectricChain_DisplaceType displaceType; // 0x3C
		::System::Single displacement; // 0x40
		::RPG::Client::ElectricChain_LineControlMode lineControlMode; // 0x44
		::System::Single lineControlConstant; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* lineControlCurve; // 0x50
		::RPG::Client::ElectricChain_DisplaceType lineControlDistributionType; // 0x58
		::UnityEngine::Vector4 lineControlDistribution; // 0x5C
		::System::Boolean lineControlDistributionInverse; // 0x6C
		::System::Byte _padding2[0x3];
		::System::Single updateInterval; // 0x70
		::RPG::Client::ElectricChain_UpdateType updateType; // 0x74
		::System::Boolean firstClear; // 0x78
		::System::Byte _padding3[0x3];
		::System::Single _nextUpdateTime; // 0x7C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _linePosList; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _randomGroup; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _lastRandomGroup; // 0x90
		::UnityEngine::Vector3 _startPos; // 0x98
		::UnityEngine::Vector3 _endPos; // 0xA4
		::RPG::Client::ElectricChain_RandomType startRandomType; // 0xB0
		::UnityEngine::Vector3 randomInStart; // 0xB4
		::RPG::Client::ElectricChain_RandomType endRandomType; // 0xC0
		::UnityEngine::Vector3 randomInEnd; // 0xC4
		::System::Int32 _node; // 0xD0
		::System::Byte _padding4[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* _posLastOffSet; // 0xD8
		::Il2CppArray<::UnityEngine::Vector3>* _posOffSet; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_CTOR_OFFSET))(this);
		}

		::System::Single NHMKGIDHHGB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_NHMKGIDHHGB_OFFSET))(this, a1);
		}

		::System::Single get__lineLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_GET__LINELENGTH_OFFSET))(this);
		}

		::UnityEngine::Vector3 DGPGAMHEDHM(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::RPG::Client::ElectricChain_RandomType a3, ::RPG::Client::ElectricChain_StartEndPos a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::RPG::Client::ElectricChain_RandomType, ::RPG::Client::ElectricChain_StartEndPos))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_DGPGAMHEDHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AFIBJFHPHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_AFIBJFHPHDD_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void HCHLCHDGIGC(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_HCHLCHDGIGC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HEPGHHHGBHG(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_HEPGHHHGBHG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 HOCLNOCDKFN(::System::Int32 a1, ::RPG::Client::ElectricChain_UpdateType a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::RPG::Client::ElectricChain_UpdateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN_HOCLNOCDKFN_OFFSET))(this, a1, a2);
		}

		::System::Void _GetRandomValue_b__45_0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAIN__GETRANDOMVALUE_B__45_0_OFFSET))(this, a1);
		}

	};
}
