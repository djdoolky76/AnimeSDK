#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KICPABCKDCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4131D0)
#define KICPABCKDCM_LOCK_OFFSET UNITYSDK_OFFSET(0xB4131E0)
#define KICPABCKDCM_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB4132A0)

inline static constexpr unsigned int KICPABCKDCM_TypeDefinitionIndex = 74794;

	class KICPABCKDCM : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + KICPABCKDCM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KICPABCKDCM_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KICPABCKDCM_UNLOCK_OFFSET))(this, a1);
		}

	};
