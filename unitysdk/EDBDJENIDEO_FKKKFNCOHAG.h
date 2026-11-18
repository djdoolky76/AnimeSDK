#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define EDBDJENIDEO_FKKKFNCOHAG_FEFCLBKLKMF_OFFSET UNITYSDK_OFFSET(0x15894450)
#define EDBDJENIDEO_FKKKFNCOHAG__CTOR_OFFSET UNITYSDK_OFFSET(0x15894440)

inline static constexpr unsigned int EDBDJENIDEO_FKKKFNCOHAG_TypeDefinitionIndex = 90347;

class EDBDJENIDEO_FKKKFNCOHAG : public ::System::Object
{
public:
	::FJMFECAAPHD* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_FKKKFNCOHAG__CTOR_OFFSET))(this);
	}

	::System::Void FEFCLBKLKMF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_FKKKFNCOHAG_FEFCLBKLKMF_OFFSET))(this);
	}
};
