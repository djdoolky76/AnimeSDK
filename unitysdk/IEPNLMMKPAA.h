#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEPNLMMKPAA_CTOR_OFFSET UNITYSDK_OFFSET(0x15F07A50)
#define IEPNLMMKPAA_LOCK_OFFSET UNITYSDK_OFFSET(0x15F07A60)
#define IEPNLMMKPAA_UNLOCK_OFFSET UNITYSDK_OFFSET(0x15F07AD0)

inline static constexpr unsigned int IEPNLMMKPAA_TypeDefinitionIndex = 74781;

	class IEPNLMMKPAA : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + IEPNLMMKPAA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IEPNLMMKPAA_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IEPNLMMKPAA_UNLOCK_OFFSET))(this, a1);
		}

	};
