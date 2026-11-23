#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineConfiner_F2C66747C5AEE2D8.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/E7ED61E0B00DDE0C/FDBF4FD73B809E89_ED81FC0B9291B906.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/BCE1737A98084F1E.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }

#define CINEMACHINE_CINEMACHINECONFINER_AC25714897F9EA4C_OFFSET UNITYSDK_OFFSET(0x2A33690)
#define CINEMACHINE_CINEMACHINECONFINER_B3D062066BAD1BDD_OFFSET UNITYSDK_OFFSET(0x2A331E0)
#define CINEMACHINE_CINEMACHINECONFINER_B8034D3338163EFA_OFFSET UNITYSDK_OFFSET(0x2A33230)
#define CINEMACHINE_CINEMACHINECONFINER_BDD274F8AB63E176_OFFSET UNITYSDK_OFFSET(0x2A33170)
#define CINEMACHINE_CINEMACHINECONFINER_E238674919E92198_OFFSET UNITYSDK_OFFSET(0x2A33C40)
#define CINEMACHINE_CINEMACHINECONFINER_E7D8034BA81AA699_OFFSET UNITYSDK_OFFSET(0x2A32680)
#define CINEMACHINE_CINEMACHINECONFINER_EFC4B6A32C24782A_OFFSET UNITYSDK_OFFSET(0x2A32BB0)
#define CINEMACHINE_CINEMACHINECONFINER_F705A6D9539C8C3B_OFFSET UNITYSDK_OFFSET(0x2326C20)
#define CINEMACHINE_CINEMACHINECONFINER_F7847F3374CC99E7_OFFSET UNITYSDK_OFFSET(0x2A32610)
#define CINEMACHINE_CINEMACHINECONFINER_F951A69E559F4E87_OFFSET UNITYSDK_OFFSET(0x2A33180)
#define CINEMACHINE_CINEMACHINECONFINER_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x2A33220)
#define CINEMACHINE_CINEMACHINECONFINER__CTOR_OFFSET UNITYSDK_OFFSET(0x2A33C30)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner_TypeDefinitionIndex = 18315;

	class CinemachineConfiner : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Cinemachine::CinemachineConfiner_F2C66747C5AEE2D8 m_ConfineMode; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Collider* m_BoundingVolume; // 0x38
		::UnityEngine::Collider2D* m_BoundingShape2D; // 0x40
		::UnityEngine::Collider2D* F05ECE14B09A243A; // 0x48
		::System::Boolean m_ConfineScreenEdges; // 0x50
		::System::Byte _padding1[0x3];
		::System::Single m_Damping; // 0x54
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* BD6F0DD59D3A0015; // 0x58
		::System::Int32 F04614A1BF5DE0A1; // 0x60

		::System::Boolean AC25714897F9EA4C()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_AC25714897F9EA4C_OFFSET))(this);
		}

		::System::Single F951A69E559F4E87(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_F951A69E559F4E87_OFFSET))(this, E4C30FC54E27903D);
		}

		::System::Void BDD274F8AB63E176(::System::Boolean E63D5023A548AF9C)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_BDD274F8AB63E176_OFFSET))(this, E63D5023A548AF9C);
		}

		::System::Boolean E238674919E92198()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_E238674919E92198_OFFSET))(this);
		}

		::System::Void B3D062066BAD1BDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_B3D062066BAD1BDD_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_FE0C4BACA9717677_OFFSET))(this);
		}

		::System::Void B8034D3338163EFA(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906 B67042457177A43B, ::BCE1737A98084F1E& E5EB06E4FD2C32F7, ::System::Single EB5670302F34D4B7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::E7ED61E0B00DDE0C::FDBF4FD73B809E89_ED81FC0B9291B906, ::BCE1737A98084F1E&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_B8034D3338163EFA_OFFSET))(this, E4C30FC54E27903D, B67042457177A43B, E5EB06E4FD2C32F7, EB5670302F34D4B7);
		}

		::UnityEngine::Vector3 EFC4B6A32C24782A(::BCE1737A98084F1E& E5EB06E4FD2C32F7)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BCE1737A98084F1E&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_EFC4B6A32C24782A_OFFSET))(this, E5EB06E4FD2C32F7);
		}

		::UnityEngine::Vector3 E7D8034BA81AA699(::UnityEngine::Vector3 B88DB6EF82A8FB3D)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_E7D8034BA81AA699_OFFSET))(this, B88DB6EF82A8FB3D);
		}

		::System::Single F705A6D9539C8C3B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_F705A6D9539C8C3B_OFFSET))(this);
		}

		::System::Boolean F7847F3374CC99E7(::Cinemachine::CinemachineVirtualCameraBase* E4C30FC54E27903D)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_F7847F3374CC99E7_OFFSET))(this, E4C30FC54E27903D);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER__CTOR_OFFSET))(this);
		}
	};
}
