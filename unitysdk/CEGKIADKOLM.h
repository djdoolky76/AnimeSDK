#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEGKIADKOLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DC060)
#define CEGKIADKOLM_LOCK_OFFSET UNITYSDK_OFFSET(0xC9DC070)
#define CEGKIADKOLM_UNLOCK_OFFSET UNITYSDK_OFFSET(0xC9DC0C0)

inline static constexpr unsigned int CEGKIADKOLM_TypeDefinitionIndex = 74769;

	class CEGKIADKOLM : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + CEGKIADKOLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CEGKIADKOLM_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CEGKIADKOLM_UNLOCK_OFFSET))(this, a1);
		}

	};
