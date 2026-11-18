#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_ODFEBNLKHCF_JMLKDBBBNDH_OFFSET UNITYSDK_OFFSET(0x1A39DB80)
#define IFOKBBHAHIE_ODFEBNLKHCF_ONGGKGEJPFI_OFFSET UNITYSDK_OFFSET(0x1A39DB90)
#define IFOKBBHAHIE_ODFEBNLKHCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39DB70)

inline static constexpr unsigned int IFOKBBHAHIE_ODFEBNLKHCF_TypeDefinitionIndex = 67439;

class IFOKBBHAHIE_ODFEBNLKHCF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_ODFEBNLKHCF__CTOR_OFFSET))(this);
	}

	::System::Void JMLKDBBBNDH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_ODFEBNLKHCF_JMLKDBBBNDH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void ONGGKGEJPFI(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_ODFEBNLKHCF_ONGGKGEJPFI_OFFSET))(this, GLAOEHCGCFO);
	}
};
