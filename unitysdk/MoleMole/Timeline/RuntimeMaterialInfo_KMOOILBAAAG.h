#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace System { class String; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG_KGMOKGBLDHD_OFFSET UNITYSDK_OFFSET(0x1A728C80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG_NCCHLECJOFF_OFFSET UNITYSDK_OFFSET(0x1A728C00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A728BF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_KMOOILBAAAG_TypeDefinitionIndex = 65823;

	class RuntimeMaterialInfo_KMOOILBAAAG : public ::System::Object
	{
	public:
		::System::String* FKNNJOOKECA; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG__CTOR_OFFSET))(this);
		}

		::System::Boolean NCCHLECJOFF(::MoleMole::Timeline::FloatRecorderUnit* IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG_NCCHLECJOFF_OFFSET))(this, IPMMCGDMODG);
		}

		::System::Boolean KGMOKGBLDHD(::MoleMole::Timeline::ColorRecorderUnit* IPMMCGDMODG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_KMOOILBAAAG_KGMOKGBLDHD_OFFSET))(this, IPMMCGDMODG);
		}
	};
}
