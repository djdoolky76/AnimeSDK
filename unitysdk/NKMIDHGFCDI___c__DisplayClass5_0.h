#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGPLBKLFLED;
namespace System { class String; }

#define NKMIDHGFCDI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C498BB0)
#define NKMIDHGFCDI___C__DISPLAYCLASS5_0__ISFILEEXIST_B__0_OFFSET UNITYSDK_OFFSET(0x1C499220)

inline static constexpr unsigned int NKMIDHGFCDI___c__DisplayClass5_0_TypeDefinitionIndex = 41503;

	class NKMIDHGFCDI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* file; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMIDHGFCDI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFileExist_b__0(::IGPLBKLFLED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGPLBKLFLED*))((::PBYTE)hIl2Cpp + NKMIDHGFCDI___C__DISPLAYCLASS5_0__ISFILEEXIST_B__0_OFFSET))(this, a1);
		}

	};
