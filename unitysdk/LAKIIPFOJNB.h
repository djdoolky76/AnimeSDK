#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
#include "unitysdk/System/Nullable_1.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAKIIPFOJNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DFB80)
#define LAKIIPFOJNB_LOCK_OFFSET UNITYSDK_OFFSET(0xB5DFB90)
#define LAKIIPFOJNB_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB5DFC50)

inline static constexpr unsigned int LAKIIPFOJNB_TypeDefinitionIndex = 74795;

	class LAKIIPFOJNB : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Nullable_1<::System::UInt32> IPMICIJLDBJ; // 0x28
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + LAKIIPFOJNB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LAKIIPFOJNB_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LAKIIPFOJNB_UNLOCK_OFFSET))(this, a1);
		}

	};
