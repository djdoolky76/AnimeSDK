#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GFIGNLHKPPE;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MJDCEGKHJEG_FMMNKHPGPIF_AOPGIHELAIA_OFFSET UNITYSDK_OFFSET(0x13191100)
#define MJDCEGKHJEG_FMMNKHPGPIF_LLABDJJLDCO_OFFSET UNITYSDK_OFFSET(0x131910A0)
#define MJDCEGKHJEG_FMMNKHPGPIF__CTOR_OFFSET UNITYSDK_OFFSET(0x13191090)

inline static constexpr unsigned int MJDCEGKHJEG_FMMNKHPGPIF_TypeDefinitionIndex = 56439;

class MJDCEGKHJEG_FMMNKHPGPIF : public ::System::Object
{
public:
	::System::Action_1<::OAEFGCLEHHO*>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::GFIGNLHKPPE*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMMNKHPGPIF__CTOR_OFFSET))(this);
	}

	::System::Void LLABDJJLDCO(::OAEFGCLEHHO* EEOGNEDJCPO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMMNKHPGPIF_LLABDJJLDCO_OFFSET))(this, EEOGNEDJCPO);
	}

	::System::Void AOPGIHELAIA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_FMMNKHPGPIF_AOPGIHELAIA_OFFSET))(this, GLAOEHCGCFO);
	}
};
