#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNCJNHDMCBH;

#define ONFOMOAKFFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4A2B0)
#define ONFOMOAKFFN_GET_DIYMECHATRONID_OFFSET UNITYSDK_OFFSET(0xBF4A280)
#define ONFOMOAKFFN_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xBF4A2A0)
#define ONFOMOAKFFN_GET_PAINTCOLORID_OFFSET UNITYSDK_OFFSET(0xBF4A290)

inline static constexpr unsigned int ONFOMOAKFFN_TypeDefinitionIndex = 80118;

	class ONFOMOAKFFN : public ::System::Object
	{
	public:
		::System::UInt32 _DiyMechatronID_k__BackingField; // 0x10
		::System::UInt32 _PaintColorID_k__BackingField; // 0x14
		::System::UInt32 _InstanceID_k__BackingField; // 0x18
		::System::Void _ctor(::FNCJNHDMCBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNCJNHDMCBH*))((::PBYTE)hIl2Cpp + ONFOMOAKFFN_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiyMechatronID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFOMOAKFFN_GET_DIYMECHATRONID_OFFSET))(this);
		}

		::System::UInt32 get_PaintColorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFOMOAKFFN_GET_PAINTCOLORID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFOMOAKFFN_GET_INSTANCEID_OFFSET))(this);
		}

	};
