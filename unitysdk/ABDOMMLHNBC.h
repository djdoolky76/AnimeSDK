#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define ABDOMMLHNBC_CKHJOANMBDM_OFFSET UNITYSDK_OFFSET(0xB0EF910)
#define ABDOMMLHNBC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EFA80)
#define ABDOMMLHNBC_DMHJINGNBIH_OFFSET UNITYSDK_OFFSET(0xB0EEEA0)
#define ABDOMMLHNBC_IBIMCLMLHFA_OFFSET UNITYSDK_OFFSET(0xB0EECE0)
#define ABDOMMLHNBC_KMPFFIKGOEK_OFFSET UNITYSDK_OFFSET(0xB0EECC0)
#define ABDOMMLHNBC_ONLIAPJJNJM_OFFSET UNITYSDK_OFFSET(0xB0EECD0)
#define ABDOMMLHNBC_PKMLGHEDGPJ_OFFSET UNITYSDK_OFFSET(0xB0EF7B0)

inline static constexpr unsigned int ABDOMMLHNBC_TypeDefinitionIndex = 74214;

	class ABDOMMLHNBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOMMLHNBC_CTOR_OFFSET))(this);
		}

		::UnityEngine::Renderer* KMPFFIKGOEK()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOMMLHNBC_KMPFFIKGOEK_OFFSET))(this);
		}

		::UnityEngine::Collider* ONLIAPJJNJM()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOMMLHNBC_ONLIAPJJNJM_OFFSET))(this);
		}

		::UnityEngine::Transform* IBIMCLMLHFA(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABDOMMLHNBC_IBIMCLMLHFA_OFFSET))(this, a1);
		}

		::System::Boolean DMHJINGNBIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDOMMLHNBC_DMHJINGNBIH_OFFSET))(this);
		}

		static ::System::Single PKMLGHEDGPJ()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + ABDOMMLHNBC_PKMLGHEDGPJ_OFFSET))();
		}

		static ::System::Single CKHJOANMBDM()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + ABDOMMLHNBC_CKHJOANMBDM_OFFSET))();
		}

	};
