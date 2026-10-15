#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJCOFAFLAEI.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"

#define DCIAAMADOGH_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0xE23F470)
#define DCIAAMADOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xE23F230)
#define DCIAAMADOGH_GET_EXPSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE23F240)
#define DCIAAMADOGH_GET_EXP_OFFSET UNITYSDK_OFFSET(0xE23F260)
#define DCIAAMADOGH_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xE23F280)
#define DCIAAMADOGH_NJDEGEGEJGO_OFFSET UNITYSDK_OFFSET(0xE23F2A0)
#define DCIAAMADOGH_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0xE23F2F0)
#define DCIAAMADOGH_SET_EXPSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE23F250)
#define DCIAAMADOGH_SET_EXP_OFFSET UNITYSDK_OFFSET(0xE23F270)
#define DCIAAMADOGH_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0xE23F290)

inline static constexpr unsigned int DCIAAMADOGH_TypeDefinitionIndex = 79037;

	class DCIAAMADOGH : public ::System::Object
	{
	public:
		::GJCOFAFLAEI _ExpSourceType_k__BackingField; // 0x10
		::System::UInt32 _SourceID_k__BackingField; // 0x14
		::System::UInt32 _Exp_k__BackingField; // 0x18
		::System::Void _ctor(::GJCOFAFLAEI a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::GJCOFAFLAEI, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DCIAAMADOGH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::GJCOFAFLAEI get_ExpSourceType()
		{
			return ((::GJCOFAFLAEI(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_GET_EXPSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_ExpSourceType(::GJCOFAFLAEI a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJCOFAFLAEI))((::PBYTE)hIl2Cpp + DCIAAMADOGH_SET_EXPSOURCETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Exp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_GET_EXP_OFFSET))(this);
		}

		::System::Void set_Exp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCIAAMADOGH_SET_EXP_OFFSET))(this, a1);
		}

		::System::UInt32 get_SourceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_GET_SOURCEID_OFFSET))(this);
		}

		::System::Void set_SourceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCIAAMADOGH_SET_SOURCEID_OFFSET))(this, a1);
		}

		::System::Boolean NJDEGEGEJGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_NJDEGEGEJGO_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_PNLLINHJDJF_OFFSET))(this);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIAAMADOGH_CPEEIHDCIFD_OFFSET))(this);
		}

	};
