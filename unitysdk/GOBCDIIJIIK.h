#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define GOBCDIIJIIK_FFDGEEPAMJH_OFFSET UNITYSDK_OFFSET(0x15B23440)
#define GOBCDIIJIIK_IONLFEBLBGG_OFFSET UNITYSDK_OFFSET(0x15B23680)
#define GOBCDIIJIIK_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x15B234C0)
#define GOBCDIIJIIK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B23200)
#define GOBCDIIJIIK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15B23640)
#define GOBCDIIJIIK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15B23480)

	class GOBCDIIJIIK : public ::System::Object
	{
	public:
		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBCDIIJIIK_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBCDIIJIIK_PAGKOAEOLKA_OFFSET))();
		}

		static ::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBCDIIJIIK_JKCPLEJCBML_OFFSET))();
		}

		static ::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBCDIIJIIK_NPAFMEBNFOB_OFFSET))();
		}

		static ::UnityEngine::Object* IONLFEBLBGG(::System::String* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOBCDIIJIIK_IONLFEBLBGG_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FFDGEEPAMJH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBCDIIJIIK_FFDGEEPAMJH_OFFSET))();
		}

	};
