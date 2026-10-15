#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define IIBJDACGOFC_BKNLHOCDJEN_OFFSET UNITYSDK_OFFSET(0x164297A0)
#define IIBJDACGOFC_DIPJEIDGKJN_OFFSET UNITYSDK_OFFSET(0x16429310)
#define IIBJDACGOFC_HIKEHGFJNEP_OFFSET UNITYSDK_OFFSET(0x16429500)
#define IIBJDACGOFC_HPEKPJEJFAM_OFFSET UNITYSDK_OFFSET(0x164296C0)
#define IIBJDACGOFC_INJNPNNFLCG_OFFSET UNITYSDK_OFFSET(0x16429260)
#define IIBJDACGOFC_KEBAJCBEKFK_OFFSET UNITYSDK_OFFSET(0x16429100)
#define IIBJDACGOFC_LFIHLIIJADO_OFFSET UNITYSDK_OFFSET(0x16429BF0)
#define IIBJDACGOFC_LLMDNCAOCDN_OFFSET UNITYSDK_OFFSET(0x16428DC0)

inline static constexpr unsigned int IIBJDACGOFC_TypeDefinitionIndex = 57200;

	class IIBJDACGOFC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>** StaticGet_CIMCIDALGGF()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>**)UnitySDK::FromName("", "IIBJDACGOFC")->GetStaticField(0x5EEE0);
		}

		static ::System::Void LLMDNCAOCDN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_LLMDNCAOCDN_OFFSET))(a1);
		}

		static ::System::Void DIPJEIDGKJN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_DIPJEIDGKJN_OFFSET))(a1);
		}

		static ::System::Void HIKEHGFJNEP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_HIKEHGFJNEP_OFFSET))(a1);
		}

		static ::System::Void HPEKPJEJFAM(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIBJDACGOFC_HPEKPJEJFAM_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* BKNLHOCDJEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_BKNLHOCDJEN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>* LFIHLIIJADO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::SkinnedMeshRenderer*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_LFIHLIIJADO_OFFSET))(a1);
		}

		static ::System::Boolean INJNPNNFLCG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_INJNPNNFLCG_OFFSET))(a1);
		}

		static ::System::Boolean KEBAJCBEKFK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIBJDACGOFC_KEBAJCBEKFK_OFFSET))(a1);
		}

	};
