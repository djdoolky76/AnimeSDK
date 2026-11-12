#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTargetFunc.h"
class DLNGPHPNPAN;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIJJNAKBPOP_ADCKADDFMKE_OFFSET UNITYSDK_OFFSET(0x173F9750)
#define IIJJNAKBPOP_CTOR_OFFSET UNITYSDK_OFFSET(0x173F96F0)
#define IIJJNAKBPOP_LOCK_OFFSET UNITYSDK_OFFSET(0x173F9700)
#define IIJJNAKBPOP_UNLOCK_OFFSET UNITYSDK_OFFSET(0x173F9800)

inline static constexpr unsigned int IIJJNAKBPOP_TypeDefinitionIndex = 76939;

	class IIJJNAKBPOP : public ::RPG::Client::GamePlayLockTargetFunc
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*))((::PBYTE)hIl2Cpp + IIJJNAKBPOP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Lock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IIJJNAKBPOP_LOCK_OFFSET))(this, a1);
		}

		::System::Void Unlock(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IIJJNAKBPOP_UNLOCK_OFFSET))(this, a1);
		}

		::System::Void ADCKADDFMKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IIJJNAKBPOP_ADCKADDFMKE_OFFSET))(this, a1);
		}

	};
