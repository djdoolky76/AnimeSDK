#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileParams.h"
class GHMGGIHEHJE;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client::RoadRash { class MonoRoadRashGameProjectile; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CFLLLPLOELM_BNFOAPNFCPN_OFFSET UNITYSDK_OFFSET(0xCC4DAF0)
#define CFLLLPLOELM_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4C8A0)
#define CFLLLPLOELM_DEAIJKCBLCO_OFFSET UNITYSDK_OFFSET(0xCC4CE90)
#define CFLLLPLOELM_HEHPEBLMFCA_OFFSET UNITYSDK_OFFSET(0xCC4CD10)
#define CFLLLPLOELM_HKKJCPNKKKL_OFFSET UNITYSDK_OFFSET(0xCC4DC90)
#define CFLLLPLOELM_OAOJCLFEMDE_OFFSET UNITYSDK_OFFSET(0xCC4D0E0)
#define CFLLLPLOELM_OILPNDPEFNG_OFFSET UNITYSDK_OFFSET(0xCC4DA50)
#define CFLLLPLOELM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC4C8D0)

inline static constexpr unsigned int CFLLLPLOELM_TypeDefinitionIndex = 58405;

	class CFLLLPLOELM
	{
	public:
		static ::System::Int32* StaticGet_NNOCHMEAAGA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CFLLLPLOELM")->GetStaticField(0x76C0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_FireProjectile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_FireProjectile*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLLLPLOELM_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Boolean DEAIJKCBLCO(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::System::Int32 a4, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a5)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::System::Int32, ::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_DEAIJKCBLCO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean BNFOAPNFCPN(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a4)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_BNFOAPNFCPN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean OAOJCLFEMDE(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2, ::RPG::Client::RoadRashGameAbility_FireProjectile* a3, ::RPG::Client::RoadRashFireProjectileLaunchPoint* a4, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a5, ::RPG::Client::LittleGame::RoadRash::ProjectileParams a6)
		{
			return ((::System::Boolean(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*, ::RPG::Client::RoadRashGameAbility_FireProjectile*, ::RPG::Client::RoadRashFireProjectileLaunchPoint*, ::RPG::Client::RoadRash::MonoRoadRashGameProjectile*, ::RPG::Client::LittleGame::RoadRash::ProjectileParams))((::PBYTE)hIl2Cpp + CFLLLPLOELM_OAOJCLFEMDE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void OILPNDPEFNG(::RPG::Client::RoadRash::MonoRoadRashGameProjectile* a1)
		{
			return ((::System::Void(*)(::RPG::Client::RoadRash::MonoRoadRashGameProjectile*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_OILPNDPEFNG_OFFSET))(a1);
		}

		static ::System::Single HKKJCPNKKKL(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Single(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_HKKJCPNKKKL_OFFSET))(a1, a2);
		}

		static ::System::String* HEHPEBLMFCA(::MFIMCKDKDKG* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::String*(*)(::MFIMCKDKDKG*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + CFLLLPLOELM_HEHPEBLMFCA_OFFSET))(a1, a2);
		}

	};
