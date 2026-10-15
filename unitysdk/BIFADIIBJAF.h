#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BIFADIIBJAF_BGHKMMKOKCF_OFFSET UNITYSDK_OFFSET(0xB4A0F10)
#define BIFADIIBJAF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4A0EB0)
#define BIFADIIBJAF_LOCK_OFFSET UNITYSDK_OFFSET(0xB4A0EC0)
#define BIFADIIBJAF_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB4A1020)

inline static constexpr unsigned int BIFADIIBJAF_TypeDefinitionIndex = 74786;

	class BIFADIIBJAF : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + BIFADIIBJAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BIFADIIBJAF_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BIFADIIBJAF_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void BGHKMMKOKCF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIFADIIBJAF_BGHKMMKOKCF_OFFSET))(this, a1);
		}

	};
