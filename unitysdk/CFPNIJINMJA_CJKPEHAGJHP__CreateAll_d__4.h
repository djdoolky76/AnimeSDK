#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFPNIJINMJA;
class CFPNIJINMJA_CJKPEHAGJHP;
class ILDNJGBJGPF;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xCC60C10)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCC60C40)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGEVIEWMODEL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCC60E90)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGEVIEWMODEL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC60E20)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xCC60F20)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC60E80)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCC60E30)
#define CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC60C30)

inline static constexpr unsigned int CFPNIJINMJA_CJKPEHAGJHP__CreateAll_d__4_TypeDefinitionIndex = 81610;

	template <typename T1, typename T2, typename T3, typename T4>
	class CFPNIJINMJA_CJKPEHAGJHP__CreateAll_d__4 : public ::System::Object
	{
	public:
		::CFPNIJINMJA* __2__current; // 0x10
		::CFPNIJINMJA_CJKPEHAGJHP* __4__this; // 0x18
		::ILDNJGBJGPF* __3__engagement; // 0x20
		::ILDNJGBJGPF* engagement; // 0x28
		::System::Int32 _i_5__2; // 0x30
		::System::Int32 __l__initialThreadId; // 0x34
		::System::Int32 __1__state; // 0x38
		::System::Boolean isSessionFailed; // 0x3C
		::System::Boolean __3__isSessionFailed; // 0x3D
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_MOVENEXT_OFFSET))(this);
		}

		::CFPNIJINMJA* System_Collections_Generic_IEnumerator_RPG_Client_Challenge_Tierce_ChallengeTierceResultStageViewModel__get_Current()
		{
			return ((::CFPNIJINMJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGEVIEWMODEL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::CFPNIJINMJA*>* System_Collections_Generic_IEnumerable_RPG_Client_Challenge_Tierce_ChallengeTierceResultStageViewModel__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::CFPNIJINMJA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTSTAGEVIEWMODEL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFPNIJINMJA_CJKPEHAGJHP__CREATEALL_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
