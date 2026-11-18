#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAOMCKHAMBD;
class POFIMLGOIGD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define POFIMLGOIGD_LPGFFELLADI_AFILDHEHJPM_OFFSET UNITYSDK_OFFSET(0x1D1F6560)
#define POFIMLGOIGD_LPGFFELLADI_NDHMFOPCMFD_OFFSET UNITYSDK_OFFSET(0x1D1F6680)
#define POFIMLGOIGD_LPGFFELLADI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F6550)

inline static constexpr unsigned int POFIMLGOIGD_LPGFFELLADI_TypeDefinitionIndex = 57459;

class POFIMLGOIGD_LPGFFELLADI : public ::System::Object
{
public:
	::POFIMLGOIGD* KLHPEBKNIFB; // 0x10
	::System::Action_2<::System::Boolean, ::EAOMCKHAMBD*>* NPFIONPDFED; // 0x18
	::System::Int32 KOKHDIFPJOL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LPGFFELLADI__CTOR_OFFSET))(this);
	}

	::System::Void AFILDHEHJPM(::EAOMCKHAMBD* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::EAOMCKHAMBD*))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LPGFFELLADI_AFILDHEHJPM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void NDHMFOPCMFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_LPGFFELLADI_NDHMFOPCMFD_OFFSET))(this);
	}
};
