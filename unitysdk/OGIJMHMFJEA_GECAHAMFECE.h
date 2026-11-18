#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICIJJJLDLBM;

#define OGIJMHMFJEA_GECAHAMFECE_NFGKFJKJOJC_OFFSET UNITYSDK_OFFSET(0xE14CB00)
#define OGIJMHMFJEA_GECAHAMFECE__CTOR_OFFSET UNITYSDK_OFFSET(0xE14CAF0)

inline static constexpr unsigned int OGIJMHMFJEA_GECAHAMFECE_TypeDefinitionIndex = 59718;

class OGIJMHMFJEA_GECAHAMFECE : public ::System::Object
{
public:
	::System::Boolean EKJFLNILEMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGIJMHMFJEA_GECAHAMFECE__CTOR_OFFSET))(this);
	}

	::System::Void NFGKFJKJOJC(::ICIJJJLDLBM* OGMFOALCDAE)
	{
		return ((::System::Void(*)(::PVOID, ::ICIJJJLDLBM*))((::PBYTE)hIl2Cpp + OGIJMHMFJEA_GECAHAMFECE_NFGKFJKJOJC_OFFSET))(this, OGMFOALCDAE);
	}
};
