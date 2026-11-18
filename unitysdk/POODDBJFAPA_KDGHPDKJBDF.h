#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHMCPFFJLG;

#define POODDBJFAPA_KDGHPDKJBDF_DBMDGFDNAFI_OFFSET UNITYSDK_OFFSET(0x194BEE50)
#define POODDBJFAPA_KDGHPDKJBDF__CTOR_OFFSET UNITYSDK_OFFSET(0x194BEE40)

inline static constexpr unsigned int POODDBJFAPA_KDGHPDKJBDF_TypeDefinitionIndex = 90276;

class POODDBJFAPA_KDGHPDKJBDF : public ::System::Object
{
public:
	::System::UInt32 HAABDEAADGI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_KDGHPDKJBDF__CTOR_OFFSET))(this);
	}

	::System::Boolean DBMDGFDNAFI(::IEHMCPFFJLG* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHMCPFFJLG*))((::PBYTE)hIl2Cpp + POODDBJFAPA_KDGHPDKJBDF_DBMDGFDNAFI_OFFSET))(this, HAAEBCOBKFF);
	}
};
