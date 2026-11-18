#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;

#define POODDBJFAPA_JGKMPMBOONN_CAFJIOCEHLE_OFFSET UNITYSDK_OFFSET(0x1BF36870)
#define POODDBJFAPA_JGKMPMBOONN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF36860)

inline static constexpr unsigned int POODDBJFAPA_JGKMPMBOONN_TypeDefinitionIndex = 90270;

class POODDBJFAPA_JGKMPMBOONN : public ::System::Object
{
public:
	::System::Int32 NJBALIKDOCA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_JGKMPMBOONN__CTOR_OFFSET))(this);
	}

	::System::Boolean CAFJIOCEHLE(::IEHMCPFFJLG* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + POODDBJFAPA_JGKMPMBOONN_CAFJIOCEHLE_OFFSET))(this, HAAEBCOBKFF);
	}
};
