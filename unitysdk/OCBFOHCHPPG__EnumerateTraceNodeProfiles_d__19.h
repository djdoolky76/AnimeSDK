#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreeAnchorType.h"
#include "unitysdk/System/Object.h"
class OCBFOHCHPPG;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0xBD57040)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBD571A0)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBD576A0)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBD575F0)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBD57700)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBD57650)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBD57600)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD57060)
#define OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBD570A0)

inline static constexpr unsigned int OCBFOHCHPPG__EnumerateTraceNodeProfiles_d__19_TypeDefinitionIndex = 51951;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class OCBFOHCHPPG__EnumerateTraceNodeProfiles_d__19 : public ::System::Object
	{
	public:
		::OCBFOHCHPPG* __4__this; // 0x10
		::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::AvatarSkillTreeAnchorType>* __7__wrap1; // 0x18
		::System::Int32 __1__state; // 0x20
		::KFBOFAILIBG __2__current; // 0x24
		::System::Int32 __l__initialThreadId; // 0x2C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19___M__FINALLY1_OFFSET))(this);
		}

		::KFBOFAILIBG System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBFOHCHPPG__ENUMERATETRACENODEPROFILES_D__19_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
