#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CIEHGAHJDFN;
class OBALPFEHAAK;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDBNFFDCCEG_AGOIIJIINJD_OFFSET UNITYSDK_OFFSET(0x156D1890)
#define FDBNFFDCCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x156D1020)
#define FDBNFFDCCEG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156D1060)
#define FDBNFFDCCEG_EHAPCBDAHDF_OFFSET UNITYSDK_OFFSET(0x156D13D0)
#define FDBNFFDCCEG_ELPAHJECBBJ_OFFSET UNITYSDK_OFFSET(0x156D1540)
#define FDBNFFDCCEG_EMIICPEBLIB_OFFSET UNITYSDK_OFFSET(0x156D1660)
#define FDBNFFDCCEG_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x156D17D0)
#define FDBNFFDCCEG_KBDOLEINMAH_OFFSET UNITYSDK_OFFSET(0x156D10D0)
#define FDBNFFDCCEG_OIICNLMILJN_OFFSET UNITYSDK_OFFSET(0x156D1840)
#define FDBNFFDCCEG_PFMHPIOFACL_OFFSET UNITYSDK_OFFSET(0x156D1280)

	class FDBNFFDCCEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OBALPFEHAAK*>* AHLHKCOIOHD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_DISPOSE_OFFSET))(this);
		}

		::System::Void KBDOLEINMAH(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::PhotoGraphAimIdentifyType>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_KBDOLEINMAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PFMHPIOFACL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_PFMHPIOFACL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EHAPCBDAHDF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_EHAPCBDAHDF_OFFSET))(this, a1);
		}

		::System::Void ELPAHJECBBJ(::CIEHGAHJDFN* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::CIEHGAHJDFN*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_ELPAHJECBBJ_OFFSET))(this, a1, a2);
		}

		::System::Void EMIICPEBLIB(::CIEHGAHJDFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEHGAHJDFN*))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_EMIICPEBLIB_OFFSET))(this, a1);
		}

		::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_FMPAOKGPMNG_OFFSET))(this);
		}

		::System::Int32 OIICNLMILJN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_OIICNLMILJN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OBALPFEHAAK*>* AGOIIJIINJD()
		{
			return ((::System::Collections::Generic::List_1<::OBALPFEHAAK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBNFFDCCEG_AGOIIJIINJD_OFFSET))(this);
		}

	};
