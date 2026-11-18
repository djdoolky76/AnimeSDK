#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { class Action; }

#define NBMIGEDEJEC_AIJMIJEDBGH_OFFSET UNITYSDK_OFFSET(0x18F99F50)
#define NBMIGEDEJEC_LGGINIMIBLC_OFFSET UNITYSDK_OFFSET(0x18F9A260)

inline static constexpr unsigned int NBMIGEDEJEC_TypeDefinitionIndex = 69868;

class NBMIGEDEJEC : public ::System::Object
{
public:
	static ::System::Void AIJMIJEDBGH(::System::Int32 LABJKINHNMH, ::System::Action* LABKJEADHHI)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + NBMIGEDEJEC_AIJMIJEDBGH_OFFSET))(LABJKINHNMH, LABKJEADHHI);
	}

	static ::System::Void LGGINIMIBLC(::IBENDELLLAO* HHIJHDFHPOI, ::System::Int32 LABJKINHNMH)
	{
		return ((::System::Void(*)(::IBENDELLLAO*, ::System::Int32))((::PBYTE)hIl2Cpp + NBMIGEDEJEC_LGGINIMIBLC_OFFSET))(HHIJHDFHPOI, LABJKINHNMH);
	}
};
