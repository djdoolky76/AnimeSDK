#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKAFJOGBCFA;
class OKKFJLFMPFK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define OKKFJLFMPFK___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEE0190)
#define OKKFJLFMPFK___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBEE8D30)

inline static constexpr unsigned int OKKFJLFMPFK___c__DisplayClass4_0_TypeDefinitionIndex = 56371;

	class OKKFJLFMPFK___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EKAFJOGBCFA*>* t; // 0x10
		::OKKFJLFMPFK* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Playables::PlayableAsset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + OKKFJLFMPFK___C__DISPLAYCLASS4_0__ONTASKBEGIN_B__0_OFFSET))(this, a1, a2);
		}

	};
