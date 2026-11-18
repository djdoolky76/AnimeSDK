#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;

#define POODDBJFAPA_FGKHOCMLIGO_CJPOCBPACDL_OFFSET UNITYSDK_OFFSET(0x1374A7B0)
#define POODDBJFAPA_FGKHOCMLIGO__CTOR_OFFSET UNITYSDK_OFFSET(0x13748040)

inline static constexpr unsigned int POODDBJFAPA_FGKHOCMLIGO_TypeDefinitionIndex = 90269;

class POODDBJFAPA_FGKHOCMLIGO : public ::System::Object
{
public:
	::System::UInt32 HAABDEAADGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_FGKHOCMLIGO__CTOR_OFFSET))(this);
	}

	::System::Boolean CJPOCBPACDL(::IEHMCPFFJLG* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + POODDBJFAPA_FGKHOCMLIGO_CJPOCBPACDL_OFFSET))(this, HAAEBCOBKFF);
	}
};
