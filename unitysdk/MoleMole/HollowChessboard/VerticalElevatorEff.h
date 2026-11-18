#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }

#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_BALBKNGFFKM_OFFSET UNITYSDK_OFFSET(0x1A908E40)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ILNOKKALJHB_OFFSET UNITYSDK_OFFSET(0x1A909070)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A908F30)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A9090C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_REBUILD_OFFSET UNITYSDK_OFFSET(0x1A908720)
#define MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A908FC0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int VerticalElevatorEff_TypeDefinitionIndex = 49249;

	class VerticalElevatorEff : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single m_StartPosition; // 0x18
		::System::Single m_EndPosition; // 0x1C
		::System::Single m_CenterPosition; // 0x20
		::UnityEngine::Vector2 m_Size; // 0x24
		::System::Byte _padding0[0x4];
		::UnityEngine::Mesh* FGHPLOPCDEF; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* DDCMDFBCOCJ; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* CHPCHCGAFIN; // 0x40
		::Il2CppArray<::System::Int32>* JOLIICIAMBF; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF__CTOR_OFFSET))(this);
		}

		::System::Void ReBuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_REBUILD_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ONDESTROY_OFFSET))(this);
		}

		::System::Void BALBKNGFFKM(::System::Int32& FKGNDKNHAEH, ::System::Int32 EJCBEJMGFAJ, ::System::Int32 EBFCACIEKBC, ::System::Int32 CBLGCIFLMKL, ::System::Int32 BOGPAHGJOJK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_BALBKNGFFKM_OFFSET))(this, FKGNDKNHAEH, EJCBEJMGFAJ, EBFCACIEKBC, CBLGCIFLMKL, BOGPAHGJOJK);
		}

		::System::Void ILNOKKALJHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_ILNOKKALJHB_OFFSET))(this);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_VERTICALELEVATOREFF_PHOADBJGFBE_OFFSET))(this);
		}
	};
}
