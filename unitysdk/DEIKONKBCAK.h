#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPIIIECCHEE.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define DEIKONKBCAK_BGPHEDHMPCE_OFFSET UNITYSDK_OFFSET(0xE50DA80)
#define DEIKONKBCAK_CLONE_OFFSET UNITYSDK_OFFSET(0xE50DD40)
#define DEIKONKBCAK_CTOR_OFFSET UNITYSDK_OFFSET(0xE50DEB0)
#define DEIKONKBCAK_JDOLANIIJFP_OFFSET UNITYSDK_OFFSET(0xE50DBA0)
#define DEIKONKBCAK__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0xE50DE50)

	class DEIKONKBCAK : public ::RPG::GameCore::TaskContext
	{
	public:
		::RPG::GameCore::GameEntity* AMOFODFOLMI; // 0xA8
		::System::Collections::Generic::List_1<::JPIIIECCHEE>* IKGKEHBEMEA; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PIBFNLCGHPC; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* POMNABEDMHD; // 0xC0
		::System::Collections::Generic::List_1<::System::UInt32>* BDMPIDPAPGK; // 0xC8
		::UnityEngine::Collider* KAELPBIMGKK; // 0xD0
		::System::Collections::Generic::List_1<::System::UInt32>* AEOJHDOKLNH; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* DJNKHHNHIMP; // 0xE0
		::UnityEngine::Transform* HKDLAEGJOGB; // 0xE8
		::System::Collections::Generic::List_1<::System::UInt32>* IINAHHCLJEL; // 0xF0
		::System::Collections::Generic::List_1<::System::UInt32>* FHFAIKPMOCA; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ANAOPKCDLGG; // 0x100
		::RPG::MVector3 OAFBMPOIFEE; // 0x108
		::System::Boolean HDIKKDBCCKI; // 0x114
		::System::Boolean KMCHNMJHFLF; // 0x115
		::System::Boolean MBIPKBAEMOO; // 0x116
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 LDABCOCLAGL; // 0x118
		::RPG::MVector3 BMHKEKNDNIF; // 0x124
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKONKBCAK_CTOR_OFFSET))(this);
		}

		::System::Void BGPHEDHMPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKONKBCAK_BGPHEDHMPCE_OFFSET))(this);
		}

		::System::Void JDOLANIIJFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKONKBCAK_JDOLANIIJFP_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* Clone()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKONKBCAK_CLONE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKONKBCAK__GETSELFINSTANCE_OFFSET))(this);
		}

	};
