#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class LongPressEvent; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Events { class UnityAction; }

#define JNKGDNBKDEC_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB3940)
#define JNKGDNBKDEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAB3C30)
#define JNKGDNBKDEC_JJJJGFJDKOJ_OFFSET UNITYSDK_OFFSET(0xBAB39F0)

inline static constexpr unsigned int JNKGDNBKDEC_TypeDefinitionIndex = 50952;

	class JNKGDNBKDEC : public ::System::Object
	{
	public:
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x10
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x18
		::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* GBMLHDDJMJM; // 0x20
		::UnityEngine::Events::UnityAction* MBOEDFCNCJF; // 0x28
		::System::Void _ctor(::RPG::Client::LongPressEvent* a1, ::CEEGMMCFCBG* a2, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a3, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*, ::CEEGMMCFCBG*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*, ::System::Action_2<::RPG::Client::LongPressEvent*, ::UnityEngine::Events::UnityAction*>*))((::PBYTE)hIl2Cpp + JNKGDNBKDEC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JJJJGFJDKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKGDNBKDEC_JJJJGFJDKOJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKGDNBKDEC_DISPOSE_OFFSET))(this);
		}

	};
