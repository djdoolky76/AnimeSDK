#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COHJNOBADAE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB0C20)
#define COHJNOBADAE_MHLKJCOFAPJ_OFFSET UNITYSDK_OFFSET(0xDCB0BD0)
#define COHJNOBADAE_NHLBLEMIMIG_OFFSET UNITYSDK_OFFSET(0xDCB0B00)
#define COHJNOBADAE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xDCB0970)
#define COHJNOBADAE_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xDCB0A30)

inline static constexpr unsigned int COHJNOBADAE_TypeDefinitionIndex = 47941;

	class COHJNOBADAE : public ::ONEGHOPELAC
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
		::System::Boolean AGKBAEGPBFB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJNOBADAE_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + COHJNOBADAE_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + COHJNOBADAE_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void NHLBLEMIMIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJNOBADAE_NHLBLEMIMIG_OFFSET))(this);
		}

		::System::Void MHLKJCOFAPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + COHJNOBADAE_MHLKJCOFAPJ_OFFSET))(this, a1);
		}

	};
