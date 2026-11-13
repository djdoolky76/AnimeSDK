#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKAFJOGBCFA;
class OKKFJLFMPFK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define OKKFJLFMPFK___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1787D530)
#define OKKFJLFMPFK___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x17885FE0)

inline static constexpr unsigned int OKKFJLFMPFK___c__DisplayClass4_0_TypeDefinitionIndex = 57585;

	class OKKFJLFMPFK___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::OKKFJLFMPFK* __4__this; // 0x10
		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* t; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET))(this, a1, a2);
		}

	};
