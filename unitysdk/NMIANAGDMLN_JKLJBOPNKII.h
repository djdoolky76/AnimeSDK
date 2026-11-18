#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define NMIANAGDMLN_JKLJBOPNKII_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x114AE1F0)
#define NMIANAGDMLN_JKLJBOPNKII__CTOR_OFFSET UNITYSDK_OFFSET(0x114AE270)

inline static constexpr unsigned int NMIANAGDMLN_JKLJBOPNKII_TypeDefinitionIndex = 65197;

class NMIANAGDMLN_JKLJBOPNKII : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* LMEMFDGPIAO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIANAGDMLN_JKLJBOPNKII__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMIANAGDMLN_JKLJBOPNKII_ONCREATEPROPERTY_OFFSET))(this);
	}
};
