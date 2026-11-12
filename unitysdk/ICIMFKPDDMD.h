#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICIMFKPDDMD_CEHBLMGKHHN;
namespace RPG::Client { class UIPrefabLoader; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define ICIMFKPDDMD_CTOR_OFFSET UNITYSDK_OFFSET(0x16DFA790)
#define ICIMFKPDDMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DFA900)
#define ICIMFKPDDMD_INIJCJJLPKM_1_OFFSET UNITYSDK_OFFSET(0x16DFA950)
#define ICIMFKPDDMD_MPFKCHHCIMO_OFFSET UNITYSDK_OFFSET(0x16DFAC40)
#define ICIMFKPDDMD_NMENMJMBNOL_OFFSET UNITYSDK_OFFSET(0x16DFAA90)

inline static constexpr unsigned int ICIMFKPDDMD_TypeDefinitionIndex = 73160;

	class ICIMFKPDDMD : public ::System::Object
	{
	public:
		::ICIMFKPDDMD_CEHBLMGKHHN* IGHAHBNLIJA; // 0x10
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* BEHHICMOFIE; // 0x18
		::RPG::Client::UIPrefabLoader* HMELCEOFACP; // 0x20
		::System::String* GEJIJFFILEB; // 0x28
		::System::Boolean PHPDDOADFJA; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 FHOEGPHJJHB; // 0x34
		::System::Void _ctor(::System::String* a1, ::ICIMFKPDDMD_CEHBLMGKHHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICIMFKPDDMD_CEHBLMGKHHN*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* INIJCJJLPKM_1()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_INIJCJJLPKM_1_OFFSET))(this);
		}

		::System::Void MPFKCHHCIMO(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_MPFKCHHCIMO_OFFSET))(this, a1);
		}

		::System::Void NMENMJMBNOL(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICIMFKPDDMD_NMENMJMBNOL_OFFSET))(this, a1, a2);
		}

	};
