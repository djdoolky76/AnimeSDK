#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EnvLocalVolume;
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIGNGMNGCKI_BAIDMFGNDPH_OFFSET UNITYSDK_OFFSET(0xCF72DE0)
#define CIGNGMNGCKI_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xCF72A60)
#define CIGNGMNGCKI_BMLEMLOIPPB_OFFSET UNITYSDK_OFFSET(0xCF73FA0)
#define CIGNGMNGCKI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF72950)
#define CIGNGMNGCKI_FNEGFGMCOJO_OFFSET UNITYSDK_OFFSET(0xCF72F90)
#define CIGNGMNGCKI_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0xCF72C50)
#define CIGNGMNGCKI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF749F0)
#define CIGNGMNGCKI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCF72960)
#define CIGNGMNGCKI_OLKPOLHAIFM_OFFSET UNITYSDK_OFFSET(0xCF74900)

inline static constexpr unsigned int CIGNGMNGCKI_TypeDefinitionIndex = 47298;

	class CIGNGMNGCKI : public ::System::Object
	{
	public:
		::EnvLocalVolume* LJOHADCJLGN; // 0x10
		::EnvLocalVolume* BFJFENJJAFP; // 0x18
		::RPG::Client::EnvironmentSystem* NGDKDCIDMBC; // 0x20
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x28
		static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_LHEGFPCLBML()
		{
			return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)UnitySDK::FromName("", "CIGNGMNGCKI")->GetStaticField(0x2FCF0);
		}

		static ::System::Collections::Generic::List_1<::EnvLocalVolume*>** StaticGet_BNMOAACGJHG()
		{
			return (::System::Collections::Generic::List_1<::EnvLocalVolume*>**)UnitySDK::FromName("", "CIGNGMNGCKI")->GetStaticField(0x2FCF8);
		}

		static ::System::Boolean* StaticGet_OBHCNLJCFGG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CIGNGMNGCKI")->GetStaticField(0xA1B0);
		}

		::System::Void _ctor(::RPG::Client::EnvironmentSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EnvironmentSystem*))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void BKJGMFOKKKN(::EnvLocalVolume* a1)
		{
			return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_BKJGMFOKKKN_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO(::EnvLocalVolume* a1)
		{
			return ((::System::Void(*)(::EnvLocalVolume*))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_GNCJAGHKEPO_OFFSET))(a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void BAIDMFGNDPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_BAIDMFGNDPH_OFFSET))(this, a1);
		}

		::System::Void FNEGFGMCOJO(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_FNEGFGMCOJO_OFFSET))(this, a1, a2);
		}

		::System::Void BMLEMLOIPPB(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_BMLEMLOIPPB_OFFSET))(this, a1, a2);
		}

		::System::Void OLKPOLHAIFM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_OLKPOLHAIFM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CIGNGMNGCKI_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
