#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGPLBKLFLED;
namespace System { class String; }

#define NKMIDHGFCDI___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C7320)
#define NKMIDHGFCDI___C__DISPLAYCLASS6_0__ISFILEEXISTBYCONTENTHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1C4C7860)

	class NKMIDHGFCDI___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* contentHash; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMIDHGFCDI___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFileExistByContentHash_b__0(::IGPLBKLFLED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGPLBKLFLED*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI___C__DISPLAYCLASS6_0__ISFILEEXISTBYCONTENTHASH_B__0_OFFSET))(this, a1);
		}

	};
