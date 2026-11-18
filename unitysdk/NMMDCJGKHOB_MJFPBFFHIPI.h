#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NMMDCJGKHOB_MJFPBFFHIPI_FLHPBHOJDGN_OFFSET UNITYSDK_OFFSET(0x10DA9BA0)
#define NMMDCJGKHOB_MJFPBFFHIPI__CTOR_OFFSET UNITYSDK_OFFSET(0x10DA4F10)

inline static constexpr unsigned int NMMDCJGKHOB_MJFPBFFHIPI_TypeDefinitionIndex = 54815;

class NMMDCJGKHOB_MJFPBFFHIPI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* EJGDHCIBCJH; // 0x10
	::System::String* OLOMNNBBHPJ; // 0x18
	::System::String* EOKDLMDFPOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MJFPBFFHIPI__CTOR_OFFSET))(this);
	}

	::System::Void FLHPBHOJDGN(::OAEFGCLEHHO* DLJPLHKELCO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_MJFPBFFHIPI_FLHPBHOJDGN_OFFSET))(this, DLJPLHKELCO);
	}
};
