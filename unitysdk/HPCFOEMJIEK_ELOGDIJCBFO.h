#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HPCFOEMJIEK;
namespace MoleMole { class ConfigTimelineData; }

#define HPCFOEMJIEK_ELOGDIJCBFO_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x16F51E40)
#define HPCFOEMJIEK_ELOGDIJCBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F51E30)

inline static constexpr unsigned int HPCFOEMJIEK_ELOGDIJCBFO_TypeDefinitionIndex = 83294;

class HPCFOEMJIEK_ELOGDIJCBFO : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::HPCFOEMJIEK* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_ELOGDIJCBFO__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::ConfigTimelineData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + HPCFOEMJIEK_ELOGDIJCBFO_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
