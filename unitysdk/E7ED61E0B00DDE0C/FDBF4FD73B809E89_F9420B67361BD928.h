#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"

class AFA07AD8C31ACCA1;
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F9420B67361BD928_INVOKE_OFFSET UNITYSDK_OFFSET(0x2A5E060)
#define E7ED61E0B00DDE0C_FDBF4FD73B809E89_F9420B67361BD928__CTOR_OFFSET UNITYSDK_OFFSET(0x2A5E0C0)

namespace E7ED61E0B00DDE0C
{
	inline static constexpr unsigned int FDBF4FD73B809E89_F9420B67361BD928_TypeDefinitionIndex = 18371;

	class FDBF4FD73B809E89_F9420B67361BD928 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F9420B67361BD928__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::Cinemachine::CinemachineBlendDefinition Invoke(::AFA07AD8C31ACCA1* BD021DFC32E5D864, ::AFA07AD8C31ACCA1* E341A9A31D179941, ::Cinemachine::CinemachineBlendDefinition A729B6115B3E374E, ::UnityEngine::MonoBehaviour* B31D2A0991A78809)
		{
			return ((::Cinemachine::CinemachineBlendDefinition(*)(::PVOID, ::AFA07AD8C31ACCA1*, ::AFA07AD8C31ACCA1*, ::Cinemachine::CinemachineBlendDefinition, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + E7ED61E0B00DDE0C_FDBF4FD73B809E89_F9420B67361BD928_INVOKE_OFFSET))(this, BD021DFC32E5D864, E341A9A31D179941, A729B6115B3E374E, B31D2A0991A78809);
		}
	};
}
