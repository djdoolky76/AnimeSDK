#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define IHJDJHNNCKG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x15C10250)
#define IHJDJHNNCKG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x15C10370)
#define IHJDJHNNCKG_DOPMOOOEFCC_OFFSET UNITYSDK_OFFSET(0x15C0FA80)
#define IHJDJHNNCKG_ELHJGNAMKHJ_OFFSET UNITYSDK_OFFSET(0x15C0FA30)
#define IHJDJHNNCKG_MMFJBFKAPJK_OFFSET UNITYSDK_OFFSET(0x15C102E0)
#define IHJDJHNNCKG_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x15C0F9D0)
#define IHJDJHNNCKG_ONSTART_OFFSET UNITYSDK_OFFSET(0x15C0F970)
#define IHJDJHNNCKG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C10240)

inline static constexpr unsigned int IHJDJHNNCKG_TypeDefinitionIndex = 64717;

class IHJDJHNNCKG : public ::JGELKBLKFHE
{
public:
	// static const ::System::Int32 IKMHKICMMMP = 0x760B; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void ELHJGNAMKHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_ELHJGNAMKHJ_OFFSET))(this);
	}

	::System::Void DOPMOOOEFCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_DOPMOOOEFCC_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void MMFJBFKAPJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_MMFJBFKAPJK_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJDJHNNCKG_DOPGAFCKMNF_OFFSET))(this);
	}
};
