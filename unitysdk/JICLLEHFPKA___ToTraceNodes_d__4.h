#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBOFAILIBG.h"
#include "unitysdk/System/Object.h"
class GEKEMJOKGGG;
class NPCCFNJPBNL;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JICLLEHFPKA___TOTRACENODES_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0xB1ED220)
#define JICLLEHFPKA___TOTRACENODES_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB1ED960)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1EDD30)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1EDC80)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1EDD90)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB1EDCE0)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB1EDC90)
#define JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1ED820)
#define JICLLEHFPKA___TOTRACENODES_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB1ED860)

inline static constexpr unsigned int JICLLEHFPKA___ToTraceNodes_d__4_TypeDefinitionIndex = 62704;

	template <typename T1, typename T2, typename T3, typename T4>
	class JICLLEHFPKA___ToTraceNodes_d__4 : public ::System::Object
	{
	public:
		::NPCCFNJPBNL* uniqueData; // 0x10
		::NPCCFNJPBNL* __3__uniqueData; // 0x18
		::System::Collections::Generic::IEnumerator_1<::GEKEMJOKGGG*>* __7__wrap1; // 0x20
		::KFBOFAILIBG __2__current; // 0x28
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4___M__FINALLY1_OFFSET))(this);
		}

		::KFBOFAILIBG System_Collections_Generic_IEnumerator_RPG_AvatarSystem_AvatarTraceNodeProfile__get_Current()
		{
			return ((::KFBOFAILIBG(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_AvatarTraceNodeProfile__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KFBOFAILIBG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_AVATARTRACENODEPROFILE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JICLLEHFPKA___TOTRACENODES_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
