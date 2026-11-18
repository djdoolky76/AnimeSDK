#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Text::RegularExpressions { class ExclusiveReference; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexRunnerFactory; }
namespace System::Text::RegularExpressions { class SharedReference; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY_ADDCOMPILED_OFFSET UNITYSDK_OFFSET(0x1DD50860)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD50820)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int CachedCodeEntry_TypeDefinitionIndex = 2718;

	class CachedCodeEntry : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* _caps; // 0x10
		::Il2CppArray<::System::String*>* _capslist; // 0x18
		::System::Text::RegularExpressions::RegexCode* _code; // 0x20
		::System::String* _key; // 0x28
		::System::Text::RegularExpressions::RegexRunnerFactory* _factory; // 0x30
		::System::Text::RegularExpressions::ExclusiveReference* _runnerref; // 0x38
		::System::Collections::Hashtable* _capnames; // 0x40
		::System::Text::RegularExpressions::SharedReference* _replref; // 0x48
		::System::Int32 _capsize; // 0x50

		::System::Void _ctor(::System::String* key, ::System::Collections::Hashtable* capnames, ::Il2CppArray<::System::String*>* capslist, ::System::Text::RegularExpressions::RegexCode* code, ::System::Collections::Hashtable* caps, ::System::Int32 capsize, ::System::Text::RegularExpressions::ExclusiveReference* runner, ::System::Text::RegularExpressions::SharedReference* repl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Hashtable*, ::Il2CppArray<::System::String*>*, ::System::Text::RegularExpressions::RegexCode*, ::System::Collections::Hashtable*, ::System::Int32, ::System::Text::RegularExpressions::ExclusiveReference*, ::System::Text::RegularExpressions::SharedReference*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY__CTOR_OFFSET))(this, key, capnames, capslist, code, caps, capsize, runner, repl);
		}

		::System::Void AddCompiled(::System::Text::RegularExpressions::RegexRunnerFactory* factory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexRunnerFactory*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_CACHEDCODEENTRY_ADDCOMPILED_OFFSET))(this, factory);
		}
	};
}
