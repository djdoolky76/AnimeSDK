#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD074E20)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_DELOIPBNBAA_OFFSET UNITYSDK_OFFSET(0xD075350)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_EALGLOMCMFI_OFFSET UNITYSDK_OFFSET(0xD075160)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_IGIOPOOIIOD_OFFSET UNITYSDK_OFFSET(0xD075490)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_IHFLIADAOPB_OFFSET UNITYSDK_OFFSET(0xD0752D0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD0750A0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_POINT_NJFMINMGOHK_OFFSET UNITYSDK_OFFSET(0xD0753D0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_Point_TypeDefinitionIndex = 74255;

	class IKSolver_Point : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18
		::UnityEngine::Vector3 solverPosition; // 0x1C
		::UnityEngine::Quaternion solverRotation; // 0x28
		::UnityEngine::Vector3 defaultLocalPosition; // 0x38
		::UnityEngine::Quaternion defaultLocalRotation; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_CTOR_OFFSET))(this);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void EALGLOMCMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_EALGLOMCMFI_OFFSET))(this);
		}

		::System::Void IHFLIADAOPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_IHFLIADAOPB_OFFSET))(this);
		}

		::System::Void DELOIPBNBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_DELOIPBNBAA_OFFSET))(this);
		}

		::System::Void NJFMINMGOHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_NJFMINMGOHK_OFFSET))(this);
		}

		::System::Void IGIOPOOIIOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_POINT_IGIOPOOIIOD_OFFSET))(this);
		}

	};
}
