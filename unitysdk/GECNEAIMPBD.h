#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFACHPPOANI;

#define GECNEAIMPBD_CTOR_OFFSET UNITYSDK_OFFSET(0x17CCB080)
#define GECNEAIMPBD_GCFIFILAALG_OFFSET UNITYSDK_OFFSET(0x17CCB030)
#define GECNEAIMPBD_HGAMLCFBAHL_OFFSET UNITYSDK_OFFSET(0x17CCAFF0)
#define GECNEAIMPBD_KGDLMPEABGG_OFFSET UNITYSDK_OFFSET(0x17CCAFB0)

inline static constexpr unsigned int GECNEAIMPBD_TypeDefinitionIndex = 75220;

	class GECNEAIMPBD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECNEAIMPBD_CTOR_OFFSET))(this);
		}

		::System::Void KGDLMPEABGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECNEAIMPBD_KGDLMPEABGG_OFFSET))(this);
		}

		::System::Boolean HGAMLCFBAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GECNEAIMPBD_HGAMLCFBAHL_OFFSET))(this);
		}

		::System::Void GCFIFILAALG(::HFACHPPOANI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFACHPPOANI*))((::PBYTE)hIl2Cpp + GECNEAIMPBD_GCFIFILAALG_OFFSET))(this, a1);
		}

	};
