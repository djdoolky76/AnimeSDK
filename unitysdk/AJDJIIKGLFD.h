#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDJIIKGLFD;
class ECPGBDINBAB;
class EFENAEKOKBI;
class JBACCAGFHON;
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define AJDJIIKGLFD_ADHDMEGAHOI_OFFSET UNITYSDK_OFFSET(0x12CB4A30)
#define AJDJIIKGLFD_ALMIDCMMKIL_1_OFFSET UNITYSDK_OFFSET(0x12CB4890)
#define AJDJIIKGLFD_ALMIDCMMKIL_OFFSET UNITYSDK_OFFSET(0x12CB4790)
#define AJDJIIKGLFD_BFBEAKANHDD_OFFSET UNITYSDK_OFFSET(0x12CB49E0)
#define AJDJIIKGLFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12CB35D0)
#define AJDJIIKGLFD_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB3670)
#define AJDJIIKGLFD_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x12CB3740)
#define AJDJIIKGLFD_ELNNOIAABLK_1_OFFSET UNITYSDK_OFFSET(0x12CB42C0)
#define AJDJIIKGLFD_ELNNOIAABLK_2_OFFSET UNITYSDK_OFFSET(0x12CB4530)
#define AJDJIIKGLFD_ELNNOIAABLK_OFFSET UNITYSDK_OFFSET(0x12CB4190)
#define AJDJIIKGLFD_EOOOJAIEIBH_OFFSET UNITYSDK_OFFSET(0x12CB4650)
#define AJDJIIKGLFD_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x12CB35C0)
#define AJDJIIKGLFD_JKOFBAECIHD_OFFSET UNITYSDK_OFFSET(0x12CB3CC0)
#define AJDJIIKGLFD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CB4010)
#define AJDJIIKGLFD_LADNBLPENHJ_OFFSET UNITYSDK_OFFSET(0x12CB3E60)
#define AJDJIIKGLFD_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x12CB3D80)
#define AJDJIIKGLFD_NGPKKMKMHEB_OFFSET UNITYSDK_OFFSET(0x12CB43B0)
#define AJDJIIKGLFD_PFPABOPCDAF_OFFSET UNITYSDK_OFFSET(0x12CB4090)

inline static constexpr unsigned int AJDJIIKGLFD_TypeDefinitionIndex = 78026;

	class AJDJIIKGLFD : public ::System::Object
	{
	public:
		::JBACCAGFHON* _Services_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType, ::EFENAEKOKBI*>* GDEEJGLLLHA; // 0x18
		::RPG::Common::StateMachine_1<::ECPGBDINBAB*>* CBIGPGKJAEI; // 0x20
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_CTOR_OFFSET))(this, a1);
		}

		::JBACCAGFHON* get_Services()
		{
			return ((::JBACCAGFHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_GET_SERVICES_OFFSET))(this);
		}

		static ::AJDJIIKGLFD* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::AJDJIIKGLFD*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_DIOEAJEHHND_OFFSET))(this);
		}

		::EFENAEKOKBI* JKOFBAECIHD()
		{
			return ((::EFENAEKOKBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_JKOFBAECIHD_OFFSET))(this);
		}

		::EFENAEKOKBI* LCKCABJFHEA(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
		{
			return ((::EFENAEKOKBI*(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_LCKCABJFHEA_OFFSET))(this, a1);
		}

		::System::Void LADNBLPENHJ(::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_LADNBLPENHJ_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void PFPABOPCDAF(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_PFPABOPCDAF_OFFSET))(this, a1);
		}

		::System::Void ELNNOIAABLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ELNNOIAABLK_OFFSET))(this, a1);
		}

		::System::Void ELNNOIAABLK_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ELNNOIAABLK_1_OFFSET))(this, a1);
		}

		::System::Void NGPKKMKMHEB(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_NGPKKMKMHEB_OFFSET))(this, a1);
		}

		::System::Void ELNNOIAABLK_2(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ELNNOIAABLK_2_OFFSET))(this, a1, a2);
		}

		::System::Void EOOOJAIEIBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_EOOOJAIEIBH_OFFSET))(this, a1);
		}

		::System::Void ALMIDCMMKIL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ALMIDCMMKIL_OFFSET))(this, a1);
		}

		::System::Void ALMIDCMMKIL_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ALMIDCMMKIL_1_OFFSET))(this, a1);
		}

		::System::Void BFBEAKANHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_BFBEAKANHDD_OFFSET))(this);
		}

		::System::Void ADHDMEGAHOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJDJIIKGLFD_ADHDMEGAHOI_OFFSET))(this, a1);
		}

	};
