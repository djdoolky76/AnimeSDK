#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine::Events { class UnityAction; }

#define FKDOJIKMFLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1675B060)
#define FKDOJIKMFLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1675B0A0)
#define FKDOJIKMFLG___C___ONBINDHANDLERS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1675B0B0)

inline static constexpr unsigned int FKDOJIKMFLG___c_TypeDefinitionIndex = 74431;

	class FKDOJIKMFLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x662E0);
		}

		static ::UnityEngine::Events::UnityAction** StaticGet___9__6_0()
		{
			return (::UnityEngine::Events::UnityAction**)UnitySDK::FromName("", "<>c")->GetStaticField(0x662E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKDOJIKMFLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnBindHandlers_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG___C___ONBINDHANDLERS_B__6_0_OFFSET))(this);
		}

	};
