#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace RPG::Client { class GridFightRichTextNodeCompiler; }

#define NCFDMBOBAGN___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x150F7DD0)
#define NCFDMBOBAGN___C__DISPLAYCLASS4_0__COMPILENODEENTRY_B__0_OFFSET UNITYSDK_OFFSET(0x150F82C0)

inline static constexpr unsigned int NCFDMBOBAGN___c__DisplayClass4_0_TypeDefinitionIndex = 67083;

	class NCFDMBOBAGN___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FMKEJLGKEMH* textNode; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFDMBOBAGN___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _CompileNodeEntry_b__0(::RPG::Client::GridFightRichTextNodeCompiler* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRichTextNodeCompiler*))((::PBYTE)hIl2Cpp + NCFDMBOBAGN___C__DISPLAYCLASS4_0__COMPILENODEENTRY_B__0_OFFSET))(this, a1);
		}

	};
