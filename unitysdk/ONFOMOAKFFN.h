#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNCJNHDMCBH;

#define ONFOMOAKFFN_CTOR_OFFSET UNITYSDK_OFFSET(0x17D79590)
#define ONFOMOAKFFN_GET_DIYMECHATRONID_OFFSET UNITYSDK_OFFSET(0x17D79560)
#define ONFOMOAKFFN_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17D79580)
#define ONFOMOAKFFN_GET_PAINTCOLORID_OFFSET UNITYSDK_OFFSET(0x17D79570)

inline static constexpr unsigned int ONFOMOAKFFN_TypeDefinitionIndex = 82895;

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
