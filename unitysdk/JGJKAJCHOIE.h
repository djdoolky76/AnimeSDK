#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KPCDEJGJHBK;
namespace UnityEngine { class GameObject; }

#define JGJKAJCHOIE_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0xB194770)
#define JGJKAJCHOIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB194A30)
#define JGJKAJCHOIE_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0xB194810)
#define JGJKAJCHOIE_EHNAOLICBHN_OFFSET UNITYSDK_OFFSET(0xB1947C0)
#define JGJKAJCHOIE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB194A10)
#define JGJKAJCHOIE_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0xB194720)
#define JGJKAJCHOIE_JHOFAJPNGJK_OFFSET UNITYSDK_OFFSET(0xB194930)
#define JGJKAJCHOIE_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB1949B0)
#define JGJKAJCHOIE_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB1948A0)
#define JGJKAJCHOIE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB194A20)

inline static constexpr unsigned int JGJKAJCHOIE_TypeDefinitionIndex = 76542;

	class JGJKAJCHOIE : public ::MKHNMHOHEAK
	{
	public:
		::UnityEngine::GameObject* _GameObject_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_CTOR_OFFSET))(this);
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_CGNOBOOCGNB_OFFSET))(this, a1);
		}

		::System::Void EHNAOLICBHN(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_EHNAOLICBHN_OFFSET))(this, a1);
		}

		::System::Void ECCJCGOJDJB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_ECCJCGOJDJB_OFFSET))(this, a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void JHOFAJPNGJK(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_JHOFAJPNGJK_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_GameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_GET_GAMEOBJECT_OFFSET))(this);
		}

		::System::Void set_GameObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + JGJKAJCHOIE_SET_GAMEOBJECT_OFFSET))(this, a1);
		}

	};
