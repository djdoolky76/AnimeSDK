#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJBJEEGAAIF;
namespace System::Net::Http { class ByteArrayContent; }
namespace System::Net::Http { class HttpResponseMessage; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define JJBJEEGAAIF_BKOKGKKLEPI_BOAGIGKACFJ_OFFSET UNITYSDK_OFFSET(0x1F7A4790)
#define JJBJEEGAAIF_BKOKGKKLEPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A4290)

inline static constexpr unsigned int JJBJEEGAAIF_BKOKGKKLEPI_TypeDefinitionIndex = 28744;

class JJBJEEGAAIF_BKOKGKKLEPI : public ::System::Object
{
public:
	::System::Net::Http::ByteArrayContent* NGHLLDAJJJE; // 0x10
	::JJBJEEGAAIF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBJEEGAAIF_BKOKGKKLEPI__CTOR_OFFSET))(this);
	}

	::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* BOAGIGKACFJ()
	{
		return ((::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJBJEEGAAIF_BKOKGKKLEPI_BOAGIGKACFJ_OFFSET))(this);
	}
};
