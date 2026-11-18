#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GBKIDFBFPGP_GEDCOFEGFPI;
class ONBFBGNEAKB;

#define GBKIDFBFPGP_IEOPBJCPGAD_BAIOABLCNAI_OFFSET UNITYSDK_OFFSET(0x15CD0F40)
#define GBKIDFBFPGP_IEOPBJCPGAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD0F30)

inline static constexpr unsigned int GBKIDFBFPGP_IEOPBJCPGAD_TypeDefinitionIndex = 58617;

class GBKIDFBFPGP_IEOPBJCPGAD : public ::System::Object
{
public:
	::GBKIDFBFPGP_GEDCOFEGFPI* FGBNBFHOKAA; // 0x10
	::System::Int32 EJFGMAHJMHK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_IEOPBJCPGAD__CTOR_OFFSET))(this);
	}

	::System::Void BAIOABLCNAI(::ONBFBGNEAKB* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::ONBFBGNEAKB*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_IEOPBJCPGAD_BAIOABLCNAI_OFFSET))(this, GLAOEHCGCFO);
	}
};
