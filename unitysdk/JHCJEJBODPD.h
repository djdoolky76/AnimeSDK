#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHCJEJBODPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A9E50)
#define JHCJEJBODPD_LOCK_OFFSET UNITYSDK_OFFSET(0xB1A9E60)
#define JHCJEJBODPD_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB1A9F40)

inline static constexpr unsigned int JHCJEJBODPD_TypeDefinitionIndex = 74794;

	class JHCJEJBODPD : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + JHCJEJBODPD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JHCJEJBODPD_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JHCJEJBODPD_UNLOCK_OFFSET))(this, a1);
		}

	};
