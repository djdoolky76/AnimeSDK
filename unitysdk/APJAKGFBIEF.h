#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LKLEBOOCADM.h"
class GGCFMPIBGHA;
class IAFKJCICCOP;

#define APJAKGFBIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15BAC430)
#define APJAKGFBIEF_EFHOJNKCMDL_OFFSET UNITYSDK_OFFSET(0x15BAC440)

inline static constexpr unsigned int APJAKGFBIEF_TypeDefinitionIndex = 67135;

	class APJAKGFBIEF : public ::LKLEBOOCADM
	{
	public:
		::GGCFMPIBGHA* LEEMNOCGBOJ; // 0x18
		::System::Void _ctor(::IAFKJCICCOP* a1, ::GGCFMPIBGHA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*, ::GGCFMPIBGHA*))((::PBYTE)hIl2Cpp + APJAKGFBIEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EFHOJNKCMDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APJAKGFBIEF_EFHOJNKCMDL_OFFSET))(this);
		}

	};
