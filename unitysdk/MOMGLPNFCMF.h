#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOMGLPNFCMF_CLDGDEAJKMN_OFFSET UNITYSDK_OFFSET(0xBA34620)
#define MOMGLPNFCMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA33CB0)
#define MOMGLPNFCMF_KGIBFLJLCNN_OFFSET UNITYSDK_OFFSET(0xBA34100)
#define MOMGLPNFCMF_LOCK_OFFSET UNITYSDK_OFFSET(0xBA33CC0)
#define MOMGLPNFCMF_UNLOCK_OFFSET UNITYSDK_OFFSET(0xBA341E0)

	class MOMGLPNFCMF : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + MOMGLPNFCMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOMGLPNFCMF_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOMGLPNFCMF_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void CLDGDEAJKMN(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + MOMGLPNFCMF_CLDGDEAJKMN_OFFSET))(this, a1);
		}

		static ::System::Void KGIBFLJLCNN(::RPG::GameCore::GameWorld* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOMGLPNFCMF_KGIBFLJLCNN_OFFSET))(a1, a2);
		}

	};
