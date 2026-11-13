#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPBGLLGGGDN;
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIMeta; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ILPBOKLAKJM_ACODENLBMKI_OFFSET UNITYSDK_OFFSET(0x1A5C9370)
#define ILPBOKLAKJM_BIABLGKDIBJ_OFFSET UNITYSDK_OFFSET(0x1A5C7F90)
#define ILPBOKLAKJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C93E0)
#define ILPBOKLAKJM_CDMLKIAKHAM_OFFSET UNITYSDK_OFFSET(0x1A5C8340)
#define ILPBOKLAKJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C93D0)
#define ILPBOKLAKJM_DBAHNHIDGMC_OFFSET UNITYSDK_OFFSET(0x1A5C92C0)
#define ILPBOKLAKJM_DEADCDGGGAE_OFFSET UNITYSDK_OFFSET(0x1A5C8F80)
#define ILPBOKLAKJM_DLIHNKDJFIJ_OFFSET UNITYSDK_OFFSET(0x1A5C9140)
#define ILPBOKLAKJM_JBDJMBJNMIF_OFFSET UNITYSDK_OFFSET(0x1A5C8080)
#define ILPBOKLAKJM_KFBANAPDKIG_OFFSET UNITYSDK_OFFSET(0x1A5C7D50)
#define ILPBOKLAKJM_KNILHOIEHMG_OFFSET UNITYSDK_OFFSET(0x1A5C8130)
#define ILPBOKLAKJM_LFGMANFCDAP_OFFSET UNITYSDK_OFFSET(0x1A5C81E0)
#define ILPBOKLAKJM_PGBNFIHADPP_OFFSET UNITYSDK_OFFSET(0x1A5C7EE0)
#define ILPBOKLAKJM_PHFGIHHNKLM_OFFSET UNITYSDK_OFFSET(0x1A5C9210)
#define ILPBOKLAKJM_PJCOILNLHIE_OFFSET UNITYSDK_OFFSET(0x1A5C8270)

inline static constexpr unsigned int ILPBOKLAKJM_TypeDefinitionIndex = 75206;

	class ILPBOKLAKJM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::UIController*>** StaticGet_NJBKBKCNDDO()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::UIController*>**)UnitySDK::FromName("", "ILPBOKLAKJM")->GetStaticField(0x534C0);
		}

		static ::System::Boolean* StaticGet_BMKPIOMKFDL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ILPBOKLAKJM")->GetStaticField(0x11E50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILPBOKLAKJM_CCTOR_OFFSET))();
		}

		static ::System::Void KFBANAPDKIG(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_KFBANAPDKIG_OFFSET))(a1);
		}

		static ::System::Void PGBNFIHADPP(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_PGBNFIHADPP_OFFSET))(a1);
		}

		static ::System::Void JBDJMBJNMIF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_JBDJMBJNMIF_OFFSET))(a1);
		}

		static ::System::Void KNILHOIEHMG(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_KNILHOIEHMG_OFFSET))(a1);
		}

		static ::System::Void LFGMANFCDAP(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_LFGMANFCDAP_OFFSET))(a1, a2);
		}

		static ::System::Void BIABLGKDIBJ(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_BIABLGKDIBJ_OFFSET))(a1, a2);
		}

		static ::System::Void PJCOILNLHIE(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_PJCOILNLHIE_OFFSET))(a1, a2);
		}

		static ::System::Void CDMLKIAKHAM(::LPBGLLGGGDN* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::LPBGLLGGGDN*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_CDMLKIAKHAM_OFFSET))(a1, a2);
		}

		static ::System::Void ACODENLBMKI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILPBOKLAKJM_ACODENLBMKI_OFFSET))();
		}

		static ::System::Void DEADCDGGGAE(::RPG::Client::UIController* a1, ::RPG::Client::UIMeta* a2, ::RPG::Client::UIMeta* a3, ::RPG::Client::UIMeta* a4)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_DEADCDGGGAE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DLIHNKDJFIJ(::RPG::Client::UIController* a1, ::RPG::Client::UIMeta* a2, ::RPG::Client::UIMeta* a3)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::UIMeta*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_DLIHNKDJFIJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PHFGIHHNKLM(::RPG::Client::UIController* a1, ::RPG::Client::UIMeta* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_PHFGIHHNKLM_OFFSET))(a1, a2);
		}

		static ::System::Void DBAHNHIDGMC(::RPG::Client::UIController* a1, ::RPG::Client::UIMeta* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIController*, ::RPG::Client::UIMeta*))((::PBYTE)hIl2Cpp + ILPBOKLAKJM_DBAHNHIDGMC_OFFSET))(a1, a2);
		}

	};
