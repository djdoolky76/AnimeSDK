#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0xBF104B0)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBF104F0)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBF105C0)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF10510)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBF10630)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBF10570)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBF10520)
#define OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF104E0)

inline static constexpr unsigned int OMBBCMEHFCP__EnumerateTraceNodeProfiles_d__7_TypeDefinitionIndex = 51992;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class OMBBCMEHFCP__EnumerateTraceNodeProfiles_d__7 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::KFBOFAILIBG __2__current; // 0x14
		::System::Int32 __l__initialThreadId; // 0x1C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_MOVENEXT_OFFSET))(this);
		}

		::KFBOFAILIBG System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBBCMEHFCP__ENUMERATETRACENODEPROFILES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
