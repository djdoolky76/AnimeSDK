#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKSolver_Point.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD074E40)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_2_OFFSET UNITYSDK_OFFSET(0xD074E80)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_OFFSET UNITYSDK_OFFSET(0xD074DE0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_HKIBLMADOGK_OFFSET UNITYSDK_OFFSET(0xD0749D0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_IJFJNDFMIFP_OFFSET UNITYSDK_OFFSET(0xD074560)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_MIPMBLHOLNC_OFFSET UNITYSDK_OFFSET(0xD074D70)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BONE_NFPPDKANPBA_OFFSET UNITYSDK_OFFSET(0xD0740D0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_Bone_TypeDefinitionIndex = 74256;

	class IKSolver_Bone : public ::RPG::Client::FullBody::IKSolver_Point
	{
	public:
		::System::Single length; // 0x58
		::System::Single sqrMag; // 0x5C
		::UnityEngine::Vector3 axis; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void NFPPDKANPBA(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_NFPPDKANPBA_OFFSET))(this, a1, a2);
		}

		static ::System::Void IJFJNDFMIFP(::Il2CppArray<::System::Object*>* a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_IJFJNDFMIFP_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void HKIBLMADOGK(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_HKIBLMADOGK_OFFSET))(this, a1, a2);
		}

		::System::Void MIPMBLHOLNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BONE_MIPMBLHOLNC_OFFSET))(this);
		}

	};
}
