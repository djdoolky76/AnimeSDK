#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GGLMHCMEMEI_CIKFCADJEIJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14CE3B20)
#define GGLMHCMEMEI_CIKFCADJEIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14CE3B10)

inline static constexpr unsigned int GGLMHCMEMEI_CIKFCADJEIJ_TypeDefinitionIndex = 86779;

class GGLMHCMEMEI_CIKFCADJEIJ : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLMHCMEMEI_CIKFCADJEIJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ(::Foundation::MultiVersionDiffConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*))((::PBYTE)hIl2Cpp + GGLMHCMEMEI_CIKFCADJEIJ_PNGOHNLELDJ_OFFSET))(this, DFMKILICPFB);
	}
};
