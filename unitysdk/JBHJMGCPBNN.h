#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JBHJMGCPBNN;
class OGFNMNGJPIC;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define JBHJMGCPBNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1656FB80)
#define JBHJMGCPBNN_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1656F690)
#define JBHJMGCPBNN_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1656FA00)
#define JBHJMGCPBNN_KPAFBJFNFJA_OFFSET UNITYSDK_OFFSET(0x1656FB30)
#define JBHJMGCPBNN_OHNODFLDOGI_OFFSET UNITYSDK_OFFSET(0x1656FA70)
#define JBHJMGCPBNN__ONBIND_OFFSET UNITYSDK_OFFSET(0x1656F510)
#define JBHJMGCPBNN___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x1656FBC0)

inline static constexpr unsigned int JBHJMGCPBNN_TypeDefinitionIndex = 72278;

	class JBHJMGCPBNN : public ::FMPCODLIOLG
	{
	public:
		::System::Action_1<::JBHJMGCPBNN*>* CIFOILLJFNF; // 0x60
		::UnityEngine::UI::Text* GOHFAIIDICB; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::UnityEngine::UI::Text* PDKECBBIBBP; // 0x78
		::UnityEngine::Vector2 IKKNJMJCDOJ; // 0x80
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* IIFENECAOBG; // 0x0
		// static const ::System::String* CGNGHKIIGCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHJMGCPBNN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHJMGCPBNN__ONBIND_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK(::OGFNMNGJPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGFNMNGJPIC*))((::PBYTE)hIl2Cpp + JBHJMGCPBNN_DMKJAJLNEBK_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHJMGCPBNN_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void OHNODFLDOGI(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JBHJMGCPBNN_OHNODFLDOGI_OFFSET))(this, a1);
		}

		::System::Void KPAFBJFNFJA(::System::Action_1<::JBHJMGCPBNN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JBHJMGCPBNN*>*))((::PBYTE)hIl2Cpp + JBHJMGCPBNN_KPAFBJFNFJA_OFFSET))(this, a1);
		}

		::System::Void __OnBind_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHJMGCPBNN___ONBIND_B__1_0_OFFSET))(this);
		}

	};
