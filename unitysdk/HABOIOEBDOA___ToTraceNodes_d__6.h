#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
class DIFAPHOCGKL;
class HABOIOEBDOA;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HABOIOEBDOA___TOTRACENODES_D__6_CTOR_OFFSET UNITYSDK_OFFSET(0x16AF79A0)
#define HABOIOEBDOA___TOTRACENODES_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16AF81E0)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16AF8670)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16AF85C0)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16AF86F0)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16AF8620)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16AF85D0)
#define HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AF80A0)
#define HABOIOEBDOA___TOTRACENODES_D__6___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16AF80E0)

inline static constexpr unsigned int HABOIOEBDOA___ToTraceNodes_d__6_TypeDefinitionIndex = 64171;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class HABOIOEBDOA___ToTraceNodes_d__6 : public ::System::Object
	{
	public:
		::Proto::DisplayAvatarDetailInfo* detailInfo; // 0x10
		::Proto::DisplayAvatarDetailInfo* __3__detailInfo; // 0x18
		::System::Collections::Generic::IEnumerator_1<::DIFAPHOCGKL*>* __7__wrap2; // 0x20
		::HABOIOEBDOA* __4__this; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _traceNodeIDs_5__2; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::KFBOFAILIBG __2__current; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6___M__FINALLY1_OFFSET))(this);
		}

		::KFBOFAILIBG System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TOTRACENODES_D__6_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
