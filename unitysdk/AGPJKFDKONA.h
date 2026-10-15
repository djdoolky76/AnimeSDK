#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CKHFKFPPANI;
class GHMGGIHEHJE;
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashFireProjectileLaunchPoint; }
namespace RPG::Client { class RoadRashGameAbility_FireProjectile; }
namespace RPG::Client { class RoadRashGameModifier_FireProjectileEmitter; }
namespace RPG::GameCore { class TaskContext; }

#define AGPJKFDKONA_AMDPMIPHNPH_1_OFFSET UNITYSDK_OFFSET(0xCF47470)
#define AGPJKFDKONA_AMDPMIPHNPH_OFFSET UNITYSDK_OFFSET(0xCF47230)
#define AGPJKFDKONA_BJJGODDOCPF_OFFSET UNITYSDK_OFFSET(0xCF478E0)
#define AGPJKFDKONA_CICDGENLKEE_OFFSET UNITYSDK_OFFSET(0xEB78030)
#define AGPJKFDKONA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF46CC0)
#define AGPJKFDKONA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF47A00)
#define AGPJKFDKONA_FEGBEFECCAE_OFFSET UNITYSDK_OFFSET(0xEB77EA0)
#define AGPJKFDKONA_FJKOHDFOEDC_OFFSET UNITYSDK_OFFSET(0xEB77D10)
#define AGPJKFDKONA_HLNMGFMGONF_OFFSET UNITYSDK_OFFSET(0xEB77DD0)
#define AGPJKFDKONA_IJHDGDFHMKN_OFFSET UNITYSDK_OFFSET(0xEB781A0)
#define AGPJKFDKONA_KOCBDNOHDGC_OFFSET UNITYSDK_OFFSET(0xEB77990)
#define AGPJKFDKONA_NILJKKDEEHJ_OFFSET UNITYSDK_OFFSET(0xCF47730)
#define AGPJKFDKONA_OGFHFNEBCML_OFFSET UNITYSDK_OFFSET(0xEB78360)
#define AGPJKFDKONA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF46CF0)
#define AGPJKFDKONA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF47A40)
#define AGPJKFDKONA_PBFEEAJMMHB_OFFSET UNITYSDK_OFFSET(0xCF471E0)
#define AGPJKFDKONA_TICK_OFFSET UNITYSDK_OFFSET(0xCF477D0)

inline static constexpr unsigned int AGPJKFDKONA_TypeDefinitionIndex = 58406;

	class AGPJKFDKONA
	{
	public:
		::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* FNIPIJAKBJD; // 0x28
		::Il2CppArray<::System::Int32>* ILOEKLANIMA; // 0x30
		::MFIMCKDKDKG* LPCDHEMDNEL; // 0x38
		::RPG::Client::RoadRashGameAbility_FireProjectile* HEJFBEFFIPA; // 0x40
		::System::Single BPAIDCADMDO; // 0x48
		::System::Int32 HFCAPCGGIFP; // 0x4C
		// static const ::System::Object GIKCFECHJJE; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_FireProjectileEmitter*))((::PBYTE)hIl2Cpp + AGPJKFDKONA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGPJKFDKONA_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void NILJKKDEEHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_NILJKKDEEHJ_OFFSET))(this);
		}

		::System::Void BJJGODDOCPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_BJJGODDOCPF_OFFSET))(this);
		}

		::System::Void PBFEEAJMMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPJKFDKONA_PBFEEAJMMHB_OFFSET))(this);
		}

		::System::Void AMDPMIPHNPH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGPJKFDKONA_AMDPMIPHNPH_OFFSET))(this, a1);
		}

		::System::Void AMDPMIPHNPH_1(::GHMGGIHEHJE* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + AGPJKFDKONA_AMDPMIPHNPH_1_OFFSET))(this, a1, a2);
		}

		::System::Single KOCBDNOHDGC(::GHMGGIHEHJE* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::GHMGGIHEHJE*, ::System::Int32))((::PBYTE)hIl2Cpp + AGPJKFDKONA_KOCBDNOHDGC_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 FJKOHDFOEDC(::CKHFKFPPANI* a1)
		{
			return ((::UnityEngine::Vector3(*)(::CKHFKFPPANI*))((::PBYTE)hIl2Cpp + AGPJKFDKONA_FJKOHDFOEDC_OFFSET))(a1);
		}

		static ::System::Single HLNMGFMGONF(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2)
		{
			return ((::System::Single(*)(::GHMGGIHEHJE*, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + AGPJKFDKONA_HLNMGFMGONF_OFFSET))(a1, a2);
		}

		::System::Int32 FEGBEFECCAE(::GHMGGIHEHJE* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single))((::PBYTE)hIl2Cpp + AGPJKFDKONA_FEGBEFECCAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CICDGENLKEE(::GHMGGIHEHJE* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AGPJKFDKONA_CICDGENLKEE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean IJHDGDFHMKN(::GHMGGIHEHJE* a1, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>* a2, ::Il2CppArray<::System::Boolean>* a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Int32 a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::Il2CppArray<::RPG::Client::RoadRashFireProjectileLaunchPoint*>*, ::Il2CppArray<::System::Boolean>*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AGPJKFDKONA_IJHDGDFHMKN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Single OGFHFNEBCML(::RPG::Client::RoadRashFireProjectileLaunchPoint* a1)
		{
			return ((::System::Single(*)(::RPG::Client::RoadRashFireProjectileLaunchPoint*))((::PBYTE)hIl2Cpp + AGPJKFDKONA_OGFHFNEBCML_OFFSET))(a1);
		}

	};
