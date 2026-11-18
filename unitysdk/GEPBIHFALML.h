#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Color.h"

#define GEPBIHFALML__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD1D00)

inline static constexpr unsigned int GEPBIHFALML_TypeDefinitionIndex = 91205;

class GEPBIHFALML : public ::IOONMNPCCNF
{
public:
	::System::Single GLANNHGGCGI; // 0x18
	::System::Single KPJKFDGADFO; // 0x1C
	::System::Single JCFNADPEIOM; // 0x20
	::System::Single OMGFPAHNHHC; // 0x24
	::UnityEngine::Color DKDIKIIPGHE; // 0x28
	::System::Boolean HBCDLLEODDI; // 0x38
	::System::Boolean EGKFEFHOAAB; // 0x39
	::System::Byte _padding0[0x2];
	::System::Single PEEIBPEGNEF; // 0x3C
	::System::Single APFDDBDFKBH; // 0x40
	::System::Single HNJMAAIBHLB; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPBIHFALML__CTOR_OFFSET))(this);
	}
};
