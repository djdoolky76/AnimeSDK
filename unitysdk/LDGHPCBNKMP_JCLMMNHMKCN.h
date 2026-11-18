#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define LDGHPCBNKMP_JCLMMNHMKCN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15BC6B10)
#define LDGHPCBNKMP_JCLMMNHMKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x15BC3920)

inline static constexpr unsigned int LDGHPCBNKMP_JCLMMNHMKCN_TypeDefinitionIndex = 72763;

class LDGHPCBNKMP_JCLMMNHMKCN : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* PEGPJJFILHJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_JCLMMNHMKCN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDGHPCBNKMP_JCLMMNHMKCN_ONCREATEPROPERTY_OFFSET))(this);
	}
};
