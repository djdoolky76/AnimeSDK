#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NMLIIGKIMLD;
class ODLBEJANMEG;

#define NMLIIGKIMLD_JJDMNDAENCH_PKMALIBMJHM_OFFSET UNITYSDK_OFFSET(0x1376C5A0)
#define NMLIIGKIMLD_JJDMNDAENCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1376C590)

inline static constexpr unsigned int NMLIIGKIMLD_JJDMNDAENCH_TypeDefinitionIndex = 57958;

class NMLIIGKIMLD_JJDMNDAENCH : public ::System::Object
{
public:
	::ODLBEJANMEG* NMILJILPHHH; // 0x10
	::NMLIIGKIMLD* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_JJDMNDAENCH__CTOR_OFFSET))(this);
	}

	::System::Void PKMALIBMJHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLIIGKIMLD_JJDMNDAENCH_PKMALIBMJHM_OFFSET))(this);
	}
};
