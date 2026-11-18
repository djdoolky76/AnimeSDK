#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMMOLFIBFPK;
class LOHPBEPDLOG;
namespace MoleMole { class CameraShotData; }

#define LOHPBEPDLOG_FFBMCMNBLFH_HNNOAOBAHPC_OFFSET UNITYSDK_OFFSET(0x125A0A10)
#define LOHPBEPDLOG_FFBMCMNBLFH__CTOR_OFFSET UNITYSDK_OFFSET(0x125A0A00)

inline static constexpr unsigned int LOHPBEPDLOG_FFBMCMNBLFH_TypeDefinitionIndex = 58898;

class LOHPBEPDLOG_FFBMCMNBLFH : public ::System::Object
{
public:
	::MoleMole::CameraShotData* CNABFFJNFIE; // 0x10
	::LOHPBEPDLOG* KLHPEBKNIFB; // 0x18
	::System::Boolean BLPGOHDADDC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FFBMCMNBLFH__CTOR_OFFSET))(this);
	}

	::System::Void HNNOAOBAHPC(::KMMOLFIBFPK* IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::KMMOLFIBFPK*))((::PBYTE)hIl2Cpp + LOHPBEPDLOG_FFBMCMNBLFH_HNNOAOBAHPC_OFFSET))(this, IMLLDOHDCNC);
	}
};
