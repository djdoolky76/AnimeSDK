#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMHIOADBIPH;
class OEFEEFMOGPH;
namespace System { template <typename T> class Action_1; }

#define OEFEEFMOGPH_ALJBIDIAOFH_AOJFBKBMADF_OFFSET UNITYSDK_OFFSET(0x114EACD0)
#define OEFEEFMOGPH_ALJBIDIAOFH_BCGMDFEANMO_OFFSET UNITYSDK_OFFSET(0x114EAC70)
#define OEFEEFMOGPH_ALJBIDIAOFH_BEDNEGCILNB_OFFSET UNITYSDK_OFFSET(0x114EABF0)
#define OEFEEFMOGPH_ALJBIDIAOFH__CTOR_OFFSET UNITYSDK_OFFSET(0x114EABE0)

inline static constexpr unsigned int OEFEEFMOGPH_ALJBIDIAOFH_TypeDefinitionIndex = 49745;

class OEFEEFMOGPH_ALJBIDIAOFH : public ::System::Object
{
public:
	::System::Action_1<::JMHIOADBIPH*>* HDGJKAPAOHD; // 0x10
	::OEFEEFMOGPH* KLHPEBKNIFB; // 0x18
	::System::Boolean FKKBLANCMDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_ALJBIDIAOFH__CTOR_OFFSET))(this);
	}

	::System::Void BEDNEGCILNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_ALJBIDIAOFH_BEDNEGCILNB_OFFSET))(this);
	}

	::System::Void BCGMDFEANMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_ALJBIDIAOFH_BCGMDFEANMO_OFFSET))(this);
	}

	::System::Void AOJFBKBMADF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEFEEFMOGPH_ALJBIDIAOFH_AOJFBKBMADF_OFFSET))(this);
	}
};
