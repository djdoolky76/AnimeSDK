#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBJLLEBFGPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C943820)
#define NBJLLEBFGPD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C9438B0)
#define NBJLLEBFGPD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C9438C0)

inline static constexpr unsigned int NBJLLEBFGPD_TypeDefinitionIndex = 41940;

	class NBJLLEBFGPD : public ::System::Object
	{
	public:
		::System::Single _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLEBFGPD_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLEBFGPD_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJLLEBFGPD_SET_VALUE_OFFSET))(this, a1);
		}

	};
