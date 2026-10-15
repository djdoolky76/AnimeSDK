#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PNIFMEAJAEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC339510)
#define PNIFMEAJAEB_GET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xC3394D0)
#define PNIFMEAJAEB_GET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xC3394F0)
#define PNIFMEAJAEB_SET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xC3394E0)
#define PNIFMEAJAEB_SET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xC339500)

inline static constexpr unsigned int PNIFMEAJAEB_TypeDefinitionIndex = 80819;

	class PNIFMEAJAEB : public ::System::Object
	{
	public:
		::System::Int32 _MaxWave_k__BackingField; // 0x10
		::System::Int32 _CurWave_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIFMEAJAEB_CTOR_OFFSET))(this);
		}

		::System::Int32 get_CurWave()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIFMEAJAEB_GET_CURWAVE_OFFSET))(this);
		}

		::System::Void set_CurWave(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNIFMEAJAEB_SET_CURWAVE_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxWave()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIFMEAJAEB_GET_MAXWAVE_OFFSET))(this);
		}

		::System::Void set_MaxWave(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNIFMEAJAEB_SET_MAXWAVE_OFFSET))(this, a1);
		}

	};
