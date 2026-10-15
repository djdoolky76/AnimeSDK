#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONNMFEFHFMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5FB40)
#define ONNMFEFHFMD_IHCMPLNLICP_OFFSET UNITYSDK_OFFSET(0xBF5FD90)
#define ONNMFEFHFMD_LOCK_OFFSET UNITYSDK_OFFSET(0xBF5FB50)
#define ONNMFEFHFMD_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0xBF5FD50)
#define ONNMFEFHFMD_UNLOCK_OFFSET UNITYSDK_OFFSET(0xBF5FC50)

inline static constexpr unsigned int ONNMFEFHFMD_TypeDefinitionIndex = 74776;

	class ONNMFEFHFMD : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + ONNMFEFHFMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ONNMFEFHFMD_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ONNMFEFHFMD_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void RefreshLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMFEFHFMD_REFRESHLOCK_OFFSET))(this);
		}

		::RPG::Client::GamePlayLockTarget IHCMPLNLICP()
		{
			return ((::RPG::Client::GamePlayLockTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNMFEFHFMD_IHCMPLNLICP_OFFSET))(this);
		}

	};
