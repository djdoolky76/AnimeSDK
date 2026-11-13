#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
namespace System { class Object; }

#define JKAOPBAAFMI_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x17B12E30)
#define JKAOPBAAFMI_CTOR_OFFSET UNITYSDK_OFFSET(0x17B12ED0)
#define JKAOPBAAFMI_FIIOLLFPAFG_OFFSET UNITYSDK_OFFSET(0x17B12E80)
#define JKAOPBAAFMI_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x17B12280)
#define JKAOPBAAFMI_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x17B121A0)
#define JKAOPBAAFMI_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x17B12360)
#define JKAOPBAAFMI_POJFGLBHNDG_OFFSET UNITYSDK_OFFSET(0x17B123D0)

inline static constexpr unsigned int JKAOPBAAFMI_TypeDefinitionIndex = 60992;

	class JKAOPBAAFMI : public ::LJKHPOHKIIF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void POJFGLBHNDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_POJFGLBHNDG_OFFSET))(this);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_AKAMIKMOPMD_OFFSET))(this, a1);
		}

		::System::Void FIIOLLFPAFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKAOPBAAFMI_FIIOLLFPAFG_OFFSET))(this, a1);
		}

	};
