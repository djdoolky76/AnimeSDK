#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJDGABPDGH;

#define NBILAHJEBCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544B30)
#define NBILAHJEBCL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C544B20)
#define NBILAHJEBCL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C544B10)

inline static constexpr unsigned int NBILAHJEBCL_TypeDefinitionIndex = 41866;

	class NBILAHJEBCL : public ::System::Object
	{
	public:
		::APJDGABPDGH* _Config_k__BackingField; // 0x10
		::System::UInt32 _Identifier_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::APJDGABPDGH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APJDGABPDGH*))((::PBYTE)hIl2Cpp + NBILAHJEBCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBILAHJEBCL_GET_IDENTIFIER_OFFSET))(this);
		}

		::APJDGABPDGH* get_Config()
		{
			return ((::APJDGABPDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBILAHJEBCL_GET_CONFIG_OFFSET))(this);
		}

	};
