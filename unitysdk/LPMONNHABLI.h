#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingSourceAttachTargetType.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define LPMONNHABLI_DPCPHAHOCIA_OFFSET UNITYSDK_OFFSET(0x1BAA0)
#define LPMONNHABLI_GET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0xAD50)
#define LPMONNHABLI_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x1BB50)
#define LPMONNHABLI_HKNLANPNEBL_OFFSET UNITYSDK_OFFSET(0x1D40)
#define LPMONNHABLI_ICGOCKLIBNI_OFFSET UNITYSDK_OFFSET(0x94F0)
#define LPMONNHABLI_LGIPJIPLMGO_OFFSET UNITYSDK_OFFSET(0x1D30)
#define LPMONNHABLI_NNCBMAJEMOD_1_OFFSET UNITYSDK_OFFSET(0x1BC10)
#define LPMONNHABLI_NNCBMAJEMOD_2_OFFSET UNITYSDK_OFFSET(0x1BCB0)
#define LPMONNHABLI_NNCBMAJEMOD_3_OFFSET UNITYSDK_OFFSET(0x1BD50)
#define LPMONNHABLI_NNCBMAJEMOD_4_OFFSET UNITYSDK_OFFSET(0x1BDF0)
#define LPMONNHABLI_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0x1BB70)
#define LPMONNHABLI_SET_ATTACHTARGETTYPE_OFFSET UNITYSDK_OFFSET(0xAD60)

inline static constexpr unsigned int LPMONNHABLI_TypeDefinitionIndex = 73943;

	struct alignas(8) LPMONNHABLI
	{
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x10
		::UnityEngine::Camera* IEMGKEFBPCG; // 0x18
		::UnityEngine::Transform* NOBIHPOEJIM; // 0x20
		::RPG::GameCore::AnchorInfo* LMGGEJEDEMD; // 0x28
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x30
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x3C
		::RPG::Client::OpenWorld::StreamingSourceAttachTargetType _AttachTargetType_k__BackingField; // 0x48
		::RPG::Client::OpenWorld::StreamingSourceAttachTargetType get_AttachTargetType()
		{
			return ((::RPG::Client::OpenWorld::StreamingSourceAttachTargetType(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_GET_ATTACHTARGETTYPE_OFFSET))(this);
		}

		::System::Void set_AttachTargetType(::RPG::Client::OpenWorld::StreamingSourceAttachTargetType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingSourceAttachTargetType))((::PBYTE)hIl2Cpp + LPMONNHABLI_SET_ATTACHTARGETTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LGIPJIPLMGO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_LGIPJIPLMGO_OFFSET))(this);
		}

		::UnityEngine::Camera* HKNLANPNEBL()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_HKNLANPNEBL_OFFSET))(this);
		}

		::RPG::GameCore::AnchorInfo* ICGOCKLIBNI()
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_ICGOCKLIBNI_OFFSET))(this);
		}

		::UnityEngine::Transform* DPCPHAHOCIA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_DPCPHAHOCIA_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPMONNHABLI_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void NNCBMAJEMOD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LPMONNHABLI_NNCBMAJEMOD_OFFSET))(this, a1);
		}

		::System::Void NNCBMAJEMOD_1(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + LPMONNHABLI_NNCBMAJEMOD_1_OFFSET))(this, a1);
		}

		::System::Void NNCBMAJEMOD_2(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LPMONNHABLI_NNCBMAJEMOD_2_OFFSET))(this, a1);
		}

		::System::Void NNCBMAJEMOD_3(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + LPMONNHABLI_NNCBMAJEMOD_3_OFFSET))(this, a1);
		}

		::System::Void NNCBMAJEMOD_4(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPMONNHABLI_NNCBMAJEMOD_4_OFFSET))(this, a1);
		}

	};
