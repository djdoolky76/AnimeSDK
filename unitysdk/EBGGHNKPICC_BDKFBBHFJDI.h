#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EBGGHNKPICC_BDKFBBHFJDI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x148C4DE0)
#define EBGGHNKPICC_BDKFBBHFJDI__CTOR_OFFSET UNITYSDK_OFFSET(0x148C4DD0)

inline static constexpr unsigned int EBGGHNKPICC_BDKFBBHFJDI_TypeDefinitionIndex = 84925;

class EBGGHNKPICC_BDKFBBHFJDI : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGGHNKPICC_BDKFBBHFJDI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGGHNKPICC_BDKFBBHFJDI_PNGOHNLELDJ_OFFSET))(this);
	}
};
