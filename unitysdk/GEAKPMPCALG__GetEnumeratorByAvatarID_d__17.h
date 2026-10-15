#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class Object; }

#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE32F00)
#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE33080)
#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STORYATLASROW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE331A0)
#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE33200)
#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CE331B0)
#define GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CE33060)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17>
	class GEAKPMPCALG__GetEnumeratorByAvatarID_d__17 : public ::System::Object
	{
	public:
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*> _iter_5__2; // 0x10
		::System::Byte _padding0[0x38];
		::RPG::GameCore::StoryAtlasRow* __2__current; // 0x50
		::System::Int32 __1__state; // 0x58
		::System::UInt32 avatarID; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_MOVENEXT_OFFSET))(this);
		}

		::RPG::GameCore::StoryAtlasRow* System_Collections_Generic_IEnumerator_RPG_GameCore_StoryAtlasRow__get_Current()
		{
			return ((::RPG::GameCore::StoryAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_STORYATLASROW__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEAKPMPCALG__GETENUMERATORBYAVATARID_D__17_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
