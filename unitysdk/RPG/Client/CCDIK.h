#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMMFONOLFAE_EEffectorSpace.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MMMFONOLFAE;
namespace RPG::Client { class AttachPointMapping; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CCDIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1BD64260)
#define RPG_CLIENT_CCDIK_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x1BD63D10)
#define RPG_CLIENT_CCDIK_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1BD63DA0)
#define RPG_CLIENT_CCDIK_IKRESET_OFFSET UNITYSDK_OFFSET(0x1BD63F00)
#define RPG_CLIENT_CCDIK_PROCESS_OFFSET UNITYSDK_OFFSET(0x1BD63F90)
#define RPG_CLIENT_CCDIK_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x1BD63DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CCDIK_TypeDefinitionIndex = 70318;

	class CCDIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IKEnabled; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Transform* EffectorTarget; // 0x20
		::UnityEngine::Vector3 EffectorPosition; // 0x28
		::MMMFONOLFAE_EEffectorSpace EffectorSpace; // 0x34
		::System::Single FadeInTime; // 0x38
		::System::Single FadeOutTime; // 0x3C
		::System::Int32 MaxSolveIterations; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* TipBone; // 0x48
		::System::Int32 SpineBoneNum; // 0x50
		::System::Byte _padding2[0x4];
		::MMMFONOLFAE* MOFKDLANDGM; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Void IKReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_IKRESET_OFFSET))(this);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_PROCESS_OFFSET))(this, a1);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CCDIK_GET_WEIGHT_OFFSET))(this);
		}

	};
}
