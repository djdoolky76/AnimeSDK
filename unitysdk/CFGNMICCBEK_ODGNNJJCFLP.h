#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOCCBECFDKA;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define CFGNMICCBEK_ODGNNJJCFLP_GBIMOOFIPII_OFFSET UNITYSDK_OFFSET(0x1153C600)
#define CFGNMICCBEK_ODGNNJJCFLP_MELHBECGANK_OFFSET UNITYSDK_OFFSET(0x1153C500)
#define CFGNMICCBEK_ODGNNJJCFLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1153C4F0)

inline static constexpr unsigned int CFGNMICCBEK_ODGNNJJCFLP_TypeDefinitionIndex = 91452;

class CFGNMICCBEK_ODGNNJJCFLP : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* IFKOKLCPMNF; // 0x10
	::System::Action_1<::AOCCBECFDKA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_ODGNNJJCFLP__CTOR_OFFSET))(this);
	}

	::System::Void MELHBECGANK(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_ODGNNJJCFLP_MELHBECGANK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void GBIMOOFIPII(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CFGNMICCBEK_ODGNNJJCFLP_GBIMOOFIPII_OFFSET))(this, NAPFALLANDL);
	}
};
