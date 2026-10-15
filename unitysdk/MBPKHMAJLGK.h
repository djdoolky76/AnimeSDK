#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGPGHCDBOE;

#define MBPKHMAJLGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB86B7E0)
#define MBPKHMAJLGK_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xB86B7C0)
#define MBPKHMAJLGK_SET_OWNER_OFFSET UNITYSDK_OFFSET(0xB86B7D0)

inline static constexpr unsigned int MBPKHMAJLGK_TypeDefinitionIndex = 79790;

	class MBPKHMAJLGK : public ::System::Object
	{
	public:
		::JIGPGHCDBOE* _Owner_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPKHMAJLGK_CTOR_OFFSET))(this);
		}

		::JIGPGHCDBOE* get_Owner()
		{
			return ((::JIGPGHCDBOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPKHMAJLGK_GET_OWNER_OFFSET))(this);
		}

		::System::Void set_Owner(::JIGPGHCDBOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIGPGHCDBOE*))((::PBYTE)hIl2Cpp + MBPKHMAJLGK_SET_OWNER_OFFSET))(this, a1);
		}

	};
