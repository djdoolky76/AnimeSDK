#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define AJACKPCNNDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CB0F30)
#define AJACKPCNNDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB0F70)
#define AJACKPCNNDM___C___COLLECTRENDERERS_B__8_0_OFFSET UNITYSDK_OFFSET(0x12CB0F80)

	class AJACKPCNNDM___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__8_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A800);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJACKPCNNDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJACKPCNNDM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CollectRenderers_b__8_0(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + AJACKPCNNDM___C___COLLECTRENDERERS_B__8_0_OFFSET))(this, a1);
		}

	};
