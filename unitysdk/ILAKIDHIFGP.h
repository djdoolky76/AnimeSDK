#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDGHPCBNKMP_GFFFJPGLBMP;
class LDGHPCBNKMP_LCCMLOBCINM;

#define ILAKIDHIFGP_GENHGNOEFME_OFFSET UNITYSDK_OFFSET(0x15ED3540)
#define ILAKIDHIFGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED3530)

inline static constexpr unsigned int ILAKIDHIFGP_TypeDefinitionIndex = 54317;

class ILAKIDHIFGP : public ::System::Object
{
public:
	::LDGHPCBNKMP_GFFFJPGLBMP* AEDMAJLFHLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAKIDHIFGP__CTOR_OFFSET))(this);
	}

	::LDGHPCBNKMP_LCCMLOBCINM* GENHGNOEFME()
	{
		return ((::LDGHPCBNKMP_LCCMLOBCINM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAKIDHIFGP_GENHGNOEFME_OFFSET))(this);
	}
};
