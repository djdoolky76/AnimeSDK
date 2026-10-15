#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JCACLNMIADA_CTOR_OFFSET UNITYSDK_OFFSET(0x16577E40)
#define JCACLNMIADA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x16577C60)
#define JCACLNMIADA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x16577CA0)
#define JCACLNMIADA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16577980)
#define JCACLNMIADA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x16577990)

inline static constexpr unsigned int JCACLNMIADA_TypeDefinitionIndex = 56114;

	class JCACLNMIADA : public ::DBGDNLLDPFI
	{
	public:
		::System::String* CIDCEJCGOGB; // 0x10
		::System::String* CJLKMGHEIGC; // 0x18
		::System::String* EOBLJJBOBIN; // 0x20
		::System::Byte JBCBONFABOM; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x2C
		::System::Int32 KBAPBCNJHDB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCACLNMIADA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + JCACLNMIADA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCACLNMIADA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCACLNMIADA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCACLNMIADA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
