#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNEHIEJFFNM;
namespace System { class Action; }

#define ANCMHBBFOED_JFAADLLPFHF_AHJLAJIIONA_OFFSET UNITYSDK_OFFSET(0x1820F670)
#define ANCMHBBFOED_JFAADLLPFHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F660)

inline static constexpr unsigned int ANCMHBBFOED_JFAADLLPFHF_TypeDefinitionIndex = 55172;

class ANCMHBBFOED_JFAADLLPFHF : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JFAADLLPFHF__CTOR_OFFSET))(this);
	}

	::System::Void AHJLAJIIONA(::GNEHIEJFFNM* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::GNEHIEJFFNM*))((::PBYTE)hIl2Cpp + ANCMHBBFOED_JFAADLLPFHF_AHJLAJIIONA_OFFSET))(this, GLAOEHCGCFO);
	}
};
