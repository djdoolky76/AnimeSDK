#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONEGHOPELAC.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDHHACMHFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x162FABC0)
#define BDHHACMHFGB_MHLKJCOFAPJ_OFFSET UNITYSDK_OFFSET(0x162FAB70)
#define BDHHACMHFGB_NHLBLEMIMIG_OFFSET UNITYSDK_OFFSET(0x162FAAA0)
#define BDHHACMHFGB_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x162FA910)
#define BDHHACMHFGB_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x162FA9D0)

inline static constexpr unsigned int BDHHACMHFGB_TypeDefinitionIndex = 47964;

	class BDHHACMHFGB : public ::ONEGHOPELAC
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GNJFOJDKONN; // 0x20
		::System::Boolean AGKBAEGPBFB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHHACMHFGB_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + BDHHACMHFGB_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + BDHHACMHFGB_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void NHLBLEMIMIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDHHACMHFGB_NHLBLEMIMIG_OFFSET))(this);
		}

		::System::Void MHLKJCOFAPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDHHACMHFGB_MHLKJCOFAPJ_OFFSET))(this, a1);
		}

	};
