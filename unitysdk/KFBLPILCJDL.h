#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FBIIMMMKDDL.h"

class KPLBNFNCCND;

#define KFBLPILCJDL_DEHDOLMPPFB_OFFSET UNITYSDK_OFFSET(0x17702D70)

inline static constexpr unsigned int KFBLPILCJDL_TypeDefinitionIndex = 38470;

class KFBLPILCJDL : public ::System::Object
{
public:
	static ::KPLBNFNCCND* DEHDOLMPPFB(::System::Int32 KMMGKJPAOMF, ::System::Int32 OLAHFMECDAI, ::FBIIMMMKDDL& PHHDHIBOCKA)
	{
		return ((::KPLBNFNCCND*(*)(::System::Int32, ::System::Int32, ::FBIIMMMKDDL&))((::PBYTE)hIl2Cpp + KFBLPILCJDL_DEHDOLMPPFB_OFFSET))(KMMGKJPAOMF, OLAHFMECDAI, PHHDHIBOCKA);
	}
};
