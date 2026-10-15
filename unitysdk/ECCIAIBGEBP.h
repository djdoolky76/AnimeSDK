#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class LongPressEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define ECCIAIBGEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x12D03890)
#define ECCIAIBGEBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D03B80)
#define ECCIAIBGEBP_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0x12D03940)

inline static constexpr unsigned int ECCIAIBGEBP_TypeDefinitionIndex = 49904;

	class ECCIAIBGEBP : public ::System::Object
	{
	public:
		::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* GBMLHDDJMJM; // 0x10
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x18
		::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x20
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x28
		::System::Void _ctor(::RPG::Client::LongPressEvent* a1, ::CEEGMMCFCBG* a2, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a3, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::CEEGMMCFCBG*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*))((::PBYTE)hIl2Cpp + ECCIAIBGEBP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JJJJGFJDKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCIAIBGEBP_JJJJGFJDKOJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCIAIBGEBP_DISPOSE_OFFSET))(this);
		}

	};
