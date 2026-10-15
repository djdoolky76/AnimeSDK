#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace RPG::Client { class CharacterAtlasFace; }
namespace RPG::Client { class RendererMaterialCache; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_APKHHLFHDND_OFFSET UNITYSDK_OFFSET(0xC9BE0C0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9BE900)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xC9BDCB0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC9BE220)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9BDFD0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_FODDEDIAFEG_1_OFFSET UNITYSDK_OFFSET(0xC9BE750)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_FODDEDIAFEG_OFFSET UNITYSDK_OFFSET(0xC9BE160)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET UNITYSDK_OFFSET(0xC9BE270)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9BDD30)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_LEFCFGBELDD_OFFSET UNITYSDK_OFFSET(0xC9BE430)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_LMHKMNCPOHC_OFFSET UNITYSDK_OFFSET(0xC9BE2C0)
#define RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC9BDE40)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterAtlasFaceBehaviour_TypeDefinitionIndex = 70258;

	class CharacterAtlasFaceBehaviour : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::RendererMaterialCache* _MatCache; // 0x18
		::UnityEngine::Vector4 _AtlasDivisionVec; // 0x20
		::System::Int32 _LastEmotionIndex; // 0x30
		static ::System::Int32* StaticGet_PROPERTY_USING_ATLAS_FACE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterAtlasFaceBehaviour")->GetStaticField(0x154A0);
		}

		static ::System::Int32* StaticGet_PROPERTY_ATLAS_DIVISION()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "CharacterAtlasFaceBehaviour")->GetStaticField(0x154A4);
		}

		// static const ::System::String* KEYWORD_ATLAS_FACE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void APKHHLFHDND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_APKHHLFHDND_OFFSET))(this);
		}

		::System::Void FODDEDIAFEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_FODDEDIAFEG_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LEFCFGBELDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_LEFCFGBELDD_OFFSET))(this);
		}

		::System::Void LMHKMNCPOHC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_LMHKMNCPOHC_OFFSET))(this, a1);
		}

		static ::System::Void FODDEDIAFEG_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_FODDEDIAFEG_1_OFFSET))(a1);
		}

		::RPG::Client::CharacterAtlasFace* get_OwnerMono()
		{
			return ((::RPG::Client::CharacterAtlasFace*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERATLASFACEBEHAVIOUR_GET_OWNERMONO_OFFSET))(this);
		}

	};
}
