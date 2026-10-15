#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGNMGANBNAA;

#define DIGCDGKOBMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AD20)
#define DIGCDGKOBMK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54DF80)
#define DIGCDGKOBMK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C54DF90)

inline static constexpr unsigned int DIGCDGKOBMK_TypeDefinitionIndex = 41788;

	class DIGCDGKOBMK : public ::System::Object
	{
	public:
		::AGNMGANBNAA* _Config_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGCDGKOBMK_CTOR_OFFSET))(this);
		}

		::AGNMGANBNAA* get_Config()
		{
			return ((::AGNMGANBNAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGCDGKOBMK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::AGNMGANBNAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGNMGANBNAA*))((::PBYTE)hIl2Cpp + DIGCDGKOBMK_SET_CONFIG_OFFSET))(this, a1);
		}

	};
