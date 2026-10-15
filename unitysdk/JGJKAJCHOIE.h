#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KPCDEJGJHBK;
namespace UnityEngine { class GameObject; }

#define JGJKAJCHOIE_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0xB19AAE0)
#define JGJKAJCHOIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB19ADA0)
#define JGJKAJCHOIE_ECCJCGOJDJB_OFFSET UNITYSDK_OFFSET(0xB19AB80)
#define JGJKAJCHOIE_EHNAOLICBHN_OFFSET UNITYSDK_OFFSET(0xB19AB30)
#define JGJKAJCHOIE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB19AD80)
#define JGJKAJCHOIE_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0xB19AA90)
#define JGJKAJCHOIE_JHOFAJPNGJK_OFFSET UNITYSDK_OFFSET(0xB19ACA0)
#define JGJKAJCHOIE_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB19AD20)
#define JGJKAJCHOIE_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB19AC10)
#define JGJKAJCHOIE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xB19AD90)

inline static constexpr unsigned int JGJKAJCHOIE_TypeDefinitionIndex = 76543;

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
