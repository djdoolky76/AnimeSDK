#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define IFOKBBHAHIE_NPMJPFJFDIA_NGLONJBIICI_OFFSET UNITYSDK_OFFSET(0x153A5B40)
#define IFOKBBHAHIE_NPMJPFJFDIA_ONGNHACOPIM_OFFSET UNITYSDK_OFFSET(0x153A5AC0)
#define IFOKBBHAHIE_NPMJPFJFDIA__CTOR_OFFSET UNITYSDK_OFFSET(0x153A5AB0)

inline static constexpr unsigned int IFOKBBHAHIE_NPMJPFJFDIA_TypeDefinitionIndex = 67445;

class IFOKBBHAHIE_NPMJPFJFDIA : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NPMJPFJFDIA__CTOR_OFFSET))(this);
	}

	::System::Void ONGNHACOPIM(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NPMJPFJFDIA_ONGNHACOPIM_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void NGLONJBIICI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_NPMJPFJFDIA_NGLONJBIICI_OFFSET))(this, PIIPCLCCOIG);
	}
};
