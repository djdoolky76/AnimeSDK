#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGFDPHBFBPB_AKDNNDBNFKJ_JFIPFJFBILM_OFFSET UNITYSDK_OFFSET(0x1D97BC30)
#define CGFDPHBFBPB_AKDNNDBNFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97BC20)

inline static constexpr unsigned int CGFDPHBFBPB_AKDNNDBNFKJ_TypeDefinitionIndex = 94195;

class CGFDPHBFBPB_AKDNNDBNFKJ : public ::System::Object
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFDPHBFBPB_AKDNNDBNFKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean JFIPFJFBILM(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGFDPHBFBPB_AKDNNDBNFKJ_JFIPFJFBILM_OFFSET))(this, HAAEBCOBKFF);
	}
};
