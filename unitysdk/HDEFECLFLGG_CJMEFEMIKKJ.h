#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HDEFECLFLGG_BHBIOGIDJPF;
class ONDCMMIBPHD;

#define HDEFECLFLGG_CJMEFEMIKKJ_AAKIEDFDHEE_OFFSET UNITYSDK_OFFSET(0x1493DAB0)
#define HDEFECLFLGG_CJMEFEMIKKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1493DAA0)

inline static constexpr unsigned int HDEFECLFLGG_CJMEFEMIKKJ_TypeDefinitionIndex = 83704;

class HDEFECLFLGG_CJMEFEMIKKJ : public ::System::Object
{
public:
	::HDEFECLFLGG_BHBIOGIDJPF* FGBNBFHOKAA; // 0x10
	::System::UInt32 AOCOIDIMLIH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_CJMEFEMIKKJ__CTOR_OFFSET))(this);
	}

	::ONDCMMIBPHD* AAKIEDFDHEE()
	{
		return ((::ONDCMMIBPHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEFECLFLGG_CJMEFEMIKKJ_AAKIEDFDHEE_OFFSET))(this);
	}
};
