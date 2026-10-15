#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACIOKIEAOGE;
class FOOIINCDBFA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define EIJDPLEBFPG_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x154C1380)
#define EIJDPLEBFPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x154C2670)
#define EIJDPLEBFPG_CNCEDLPFCCL_OFFSET UNITYSDK_OFFSET(0x154C1450)
#define EIJDPLEBFPG_CNGMGHIKLPC_OFFSET UNITYSDK_OFFSET(0x154C16C0)
#define EIJDPLEBFPG_CTOR_OFFSET UNITYSDK_OFFSET(0x154C1190)
#define EIJDPLEBFPG_DNNHKALFKHK_OFFSET UNITYSDK_OFFSET(0x154C2370)
#define EIJDPLEBFPG_JMGJGPDHBHL_OFFSET UNITYSDK_OFFSET(0x154C1400)
#define EIJDPLEBFPG_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0x154C12A0)
#define EIJDPLEBFPG_NMMBEDMPHCG_OFFSET UNITYSDK_OFFSET(0x154C17C0)
#define EIJDPLEBFPG_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x154C1230)
#define EIJDPLEBFPG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x154C1520)

inline static constexpr unsigned int EIJDPLEBFPG_TypeDefinitionIndex = 52416;

	class EIJDPLEBFPG : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x10
		::ACIOKIEAOGE* BLGPNMHAHPB; // 0x18
		::Il2CppArray<::System::Int32>* BHNGELGFGHI; // 0x20
		::FOOIINCDBFA* JCHMONHBIFJ; // 0x28
		::RPG::GameCore::GameEntity* BCCAEHCKGEI; // 0x30
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x40
		::System::Single LHABGBJIPMK; // 0x48
		::RPG::GameCore::FollowSideType FJDPAKGGEBK; // 0x4C
		::System::Int32 LCJDAMMJLEI; // 0x50
		::RPG::GameCore::FollowSideType POBLMPLBDKC; // 0x54
		::System::Single GKBKMPGIAFK; // 0x58
		::System::Single INNBNACKGGH; // 0x5C
		::RPG::GameCore::AdvancedFollowType FKOGIANLJPP; // 0x60
		::System::Single MJPENADFCNM; // 0x64
		static ::System::Single* StaticGet_EPBICICIEJF()
		{
			return (::System::Single*)UnitySDK::FromName("", "EIJDPLEBFPG")->GetStaticField(0xA140);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdvancedFollowType a2, ::Il2CppArray<::System::Int32>* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdvancedFollowType, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIJDPLEBFPG_CCTOR_OFFSET))();
		}

		::System::Void NPAFMEBNFOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Boolean JMGJGPDHBHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_JMGJGPDHBHL_OFFSET))(this);
		}

		::UnityEngine::Vector3 CNCEDLPFCCL(::System::Single a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_CNCEDLPFCCL_OFFSET))(this, a1);
		}

		::System::Void LKFJFGPFEJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_LKFJFGPFEJJ_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void NMMBEDMPHCG(::System::Single a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_NMMBEDMPHCG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CNGMGHIKLPC(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_CNGMGHIKLPC_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNNHKALFKHK(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + EIJDPLEBFPG_DNNHKALFKHK_OFFSET))(this, a1, a2);
		}

	};
