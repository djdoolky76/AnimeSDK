#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EAHKNAFKJCK_GMCPPJPFMID_OFFSET UNITYSDK_OFFSET(0x15466070)
#define EAHKNAFKJCK_HBKFNPDKJKK_OFFSET UNITYSDK_OFFSET(0x15465FE0)
#define EAHKNAFKJCK_JKHKOGCEHBO_OFFSET UNITYSDK_OFFSET(0x15465F80)

inline static constexpr unsigned int EAHKNAFKJCK_TypeDefinitionIndex = 75072;

class EAHKNAFKJCK : public ::System::Object
{
public:
	static ::System::Double JKHKOGCEHBO(::System::Int64 GDNMMCKIJHJ, ::System::UInt32 HEMBOBKLAND)
	{
		return ((::System::Double(*)(::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + EAHKNAFKJCK_JKHKOGCEHBO_OFFSET))(GDNMMCKIJHJ, HEMBOBKLAND);
	}

	static ::System::Double HBKFNPDKJKK(::System::Int64 FMOPIACNALD, ::System::Int64 GDNMMCKIJHJ, ::System::UInt32 HEMBOBKLAND)
	{
		return ((::System::Double(*)(::System::Int64, ::System::Int64, ::System::UInt32))((::PBYTE)hIl2Cpp + EAHKNAFKJCK_HBKFNPDKJKK_OFFSET))(FMOPIACNALD, GDNMMCKIJHJ, HEMBOBKLAND);
	}

	static ::System::UInt32 GMCPPJPFMID(::System::Double FIAKMAFICHM, ::System::Int64 GDNMMCKIJHJ, ::System::UInt32 HEMBOBKLAND, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::UInt32(*)(::System::Double, ::System::Int64, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + EAHKNAFKJCK_GMCPPJPFMID_OFFSET))(FIAKMAFICHM, GDNMMCKIJHJ, HEMBOBKLAND, HAFDIMGJBHC);
	}
};
