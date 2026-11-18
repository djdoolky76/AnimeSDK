#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFNEOJHAEOM;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_LGHECGFLAOK_KPINIKKBAOJ_OFFSET UNITYSDK_OFFSET(0x125A4550)
#define LPJHHHCOLMO_LGHECGFLAOK_LNPEGKICHLG_OFFSET UNITYSDK_OFFSET(0x125A45C0)
#define LPJHHHCOLMO_LGHECGFLAOK__CTOR_OFFSET UNITYSDK_OFFSET(0x125A4540)

inline static constexpr unsigned int LPJHHHCOLMO_LGHECGFLAOK_TypeDefinitionIndex = 46623;

class LPJHHHCOLMO_LGHECGFLAOK : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::CFNEOJHAEOM*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGHECGFLAOK__CTOR_OFFSET))(this);
	}

	::System::Void KPINIKKBAOJ(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGHECGFLAOK_KPINIKKBAOJ_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void LNPEGKICHLG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_LGHECGFLAOK_LNPEGKICHLG_OFFSET))(this, DJCNCELJPOM);
	}
};
