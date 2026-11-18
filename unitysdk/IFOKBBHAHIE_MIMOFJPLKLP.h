#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_MIMOFJPLKLP_DKLPFOGELHI_OFFSET UNITYSDK_OFFSET(0x1013BD50)
#define IFOKBBHAHIE_MIMOFJPLKLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1013BD40)

inline static constexpr unsigned int IFOKBBHAHIE_MIMOFJPLKLP_TypeDefinitionIndex = 67422;

class IFOKBBHAHIE_MIMOFJPLKLP : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIMOFJPLKLP__CTOR_OFFSET))(this);
	}

	::System::Void DKLPFOGELHI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_MIMOFJPLKLP_DKLPFOGELHI_OFFSET))(this, PIIPCLCCOIG);
	}
};
