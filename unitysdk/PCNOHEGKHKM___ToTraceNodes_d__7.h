#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
class PCNOHEGKHKM;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PCNOHEGKHKM___TOTRACENODES_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0xC0094B0)
#define PCNOHEGKHKM___TOTRACENODES_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC00A4A0)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC00A740)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC00A690)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC00A7A0)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC00A6F0)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC00A6A0)
#define PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00A480)
#define PCNOHEGKHKM___TOTRACENODES_D__7___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC00A490)

inline static constexpr unsigned int PCNOHEGKHKM___ToTraceNodes_d__7_TypeDefinitionIndex = 62826;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class PCNOHEGKHKM___ToTraceNodes_d__7 : public ::System::Object
	{
	public:
		::System::Object* __7__wrap1; // 0x10
		::System::Byte _padding0[0x18];
		::RPG::GameCore::SpecialAvatarRow* specialAvatarRow; // 0x30
		::PCNOHEGKHKM* __4__this; // 0x38
		::RPG::GameCore::SpecialAvatarRow* __3__specialAvatarRow; // 0x40
		::KFBOFAILIBG __2__current; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7___M__FINALLY1_OFFSET))(this);
		}

		::KFBOFAILIBG System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TOTRACENODES_D__7_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
