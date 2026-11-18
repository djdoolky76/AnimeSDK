#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IDMIMLFPPMN_OINDCIPFLKL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xEA17CE0)
#define IDMIMLFPPMN_OINDCIPFLKL__CTOR_OFFSET UNITYSDK_OFFSET(0xEA17CD0)

inline static constexpr unsigned int IDMIMLFPPMN_OINDCIPFLKL_TypeDefinitionIndex = 42818;

class IDMIMLFPPMN_OINDCIPFLKL : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_OINDCIPFLKL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDMIMLFPPMN_OINDCIPFLKL_PNGOHNLELDJ_OFFSET))(this);
	}
};
