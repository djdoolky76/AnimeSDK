#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MCFHDIPLICI___c__DisplayClass0_0.h"
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define MCFHDIPLICI_AAJHAAOOHAO_OFFSET UNITYSDK_OFFSET(0xB878980)
#define MCFHDIPLICI_CTOR_OFFSET UNITYSDK_OFFSET(0xB879390)
#define MCFHDIPLICI_MDMKMELEDLI_OFFSET UNITYSDK_OFFSET(0xB879220)
#define MCFHDIPLICI_OBMGOFOHNHN_OFFSET UNITYSDK_OFFSET(0xB878B80)
#define MCFHDIPLICI__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET UNITYSDK_OFFSET(0xB878DC0)

inline static constexpr unsigned int MCFHDIPLICI_TypeDefinitionIndex = 52054;

	class MCFHDIPLICI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFHDIPLICI_CTOR_OFFSET))(this);
		}

		static ::System::Void AAJHAAOOHAO(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MCFHDIPLICI_AAJHAAOOHAO_OFFSET))(a1, a2, a3);
		}

		static ::SimpleJSON::JSONNode* MDMKMELEDLI(::SimpleJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MCFHDIPLICI_MDMKMELEDLI_OFFSET))(a1, a2);
		}

		static ::SimpleJSON::JSONNode* OBMGOFOHNHN(::SimpleJSON::JSONNode* a1, ::System::String* a2)
		{
			return ((::SimpleJSON::JSONNode*(*)(::SimpleJSON::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MCFHDIPLICI_OBMGOFOHNHN_OFFSET))(a1, a2);
		}

		static ::System::Void _SetJsonNodeValue_g__SetJsonNodeValueByKey_0_0(::SimpleJSON::JSONNode* a1, ::System::String* a2, ::SimpleJSON::JSONNode* a3, ::MCFHDIPLICI___c__DisplayClass0_0 a4)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::System::String*, ::SimpleJSON::JSONNode*, ::MCFHDIPLICI___c__DisplayClass0_0))((::PBYTE)hIl2Cpp + MCFHDIPLICI__SETJSONNODEVALUE_G__SETJSONNODEVALUEBYKEY_0_0_OFFSET))(a1, a2, a3, a4);
		}

	};
