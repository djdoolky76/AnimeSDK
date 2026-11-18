#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define OICJDIOEPGL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18445BC0)
#define OICJDIOEPGL__CTOR_OFFSET UNITYSDK_OFFSET(0x18445C60)

inline static constexpr unsigned int OICJDIOEPGL_TypeDefinitionIndex = 87215;

class OICJDIOEPGL : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* LOGLFAJAJEG; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* GDBLAPIDHHG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICJDIOEPGL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICJDIOEPGL_ONCREATEPROPERTY_OFFSET))(this);
	}
};
