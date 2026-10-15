#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKSolver_GENEMKKJMHE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKSOLVER_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD07B810)
#define RPG_CLIENT_FULLBODY_IKSOLVER_BNDOBOBGANK_OFFSET UNITYSDK_OFFSET(0xD07BC50)
#define RPG_CLIENT_FULLBODY_IKSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xD07C410)
#define RPG_CLIENT_FULLBODY_IKSOLVER_DPECFDGDKIE_OFFSET UNITYSDK_OFFSET(0xD07BBA0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD07BD10)
#define RPG_CLIENT_FULLBODY_IKSOLVER_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0xD07BCD0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD07B740)
#define RPG_CLIENT_FULLBODY_IKSOLVER_KNGOFODFFBG_OFFSET UNITYSDK_OFFSET(0xD07BB40)
#define RPG_CLIENT_FULLBODY_IKSOLVER_LFKJJELMNPK_OFFSET UNITYSDK_OFFSET(0xD07BD30)
#define RPG_CLIENT_FULLBODY_IKSOLVER_LPAPNCCPOCH_OFFSET UNITYSDK_OFFSET(0xD07BEA0)
#define RPG_CLIENT_FULLBODY_IKSOLVER_MEENBCMEFNO_OFFSET UNITYSDK_OFFSET(0xD07BC00)
#define RPG_CLIENT_FULLBODY_IKSOLVER_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD07BA40)
#define RPG_CLIENT_FULLBODY_IKSOLVER_PJOJCKLJHBG_OFFSET UNITYSDK_OFFSET(0xD07BD80)
#define RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0xD07BD20)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int IKSolver_TypeDefinitionIndex = 74255;

	class IKSolver : public ::System::Object
	{
	public:
		::System::Boolean executedInEditor; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 IKPosition; // 0x14
		::System::Single IKPositionWeight; // 0x20
		::System::Boolean _initiated_k__BackingField; // 0x24
		::System::Byte _padding1[0x3];
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPreInitiate; // 0x28
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPostInitiate; // 0x30
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPreUpdate; // 0x38
		::RPG::Client::FullBody::IKSolver_GENEMKKJMHE* OnPostUpdate; // 0x40
		::System::Boolean firstInitiation; // 0x48
		::System::Byte _padding2[0x7];
		::UnityEngine::Transform* root; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_PAGKOAEOLKA_OFFSET))(this);
		}

		::UnityEngine::Vector3 KNGOFODFFBG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_KNGOFODFFBG_OFFSET))(this);
		}

		::System::Void DPECFDGDKIE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_DPECFDGDKIE_OFFSET))(this, a1);
		}

		::System::Single MEENBCMEFNO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_MEENBCMEFNO_OFFSET))(this);
		}

		::System::Void BNDOBOBGANK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_BNDOBOBGANK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* KBOJFONKFKN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_KBOJFONKFKN_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_SET_INITIATED_OFFSET))(this, a1);
		}

		::System::Void LFKJJELMNPK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_LFKJJELMNPK_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* PJOJCKLJHBG(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::UnityEngine::Transform*(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_PJOJCKLJHBG_OFFSET))(a1);
		}

		static ::System::Single LPAPNCCPOCH(::System::Object* a1)
		{
			return ((::System::Single(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKSOLVER_LPAPNCCPOCH_OFFSET))(a1);
		}

	};
}
