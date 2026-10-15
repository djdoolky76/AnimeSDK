#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPCJEMLNAJF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AA720)
#define KPCJEMLNAJF_MBLCBIMAFIK_OFFSET UNITYSDK_OFFSET(0xB5AA570)
#define KPCJEMLNAJF_MHLKJCOFAPJ_OFFSET UNITYSDK_OFFSET(0xB5AA6D0)
#define KPCJEMLNAJF_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xB5AA3E0)
#define KPCJEMLNAJF_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0xB5AA4A0)

inline static constexpr unsigned int KPCJEMLNAJF_TypeDefinitionIndex = 47982;

	class KPCJEMLNAJF : public ::ONEGHOPELAC
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
		::System::Boolean AGKBAEGPBFB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCJEMLNAJF_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KPCJEMLNAJF_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KPCJEMLNAJF_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void MBLCBIMAFIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCJEMLNAJF_MBLCBIMAFIK_OFFSET))(this);
		}

		::System::Void MHLKJCOFAPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPCJEMLNAJF_MHLKJCOFAPJ_OFFSET))(this, a1);
		}

	};
