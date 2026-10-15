#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABDIOODJOE;
class HFJKOCDOAEH;

#define BABDIOODJOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15BC0990)
#define BABDIOODJOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC0A20)
#define BABDIOODJOE_GET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x15BC0A90)
#define BABDIOODJOE_GET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x15BC0AB0)
#define BABDIOODJOE_SET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x15BC0AA0)
#define BABDIOODJOE_SET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x15BC0AC0)
#define BABDIOODJOE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15BC0A30)

inline static constexpr unsigned int BABDIOODJOE_TypeDefinitionIndex = 67704;

	class BABDIOODJOE : public ::System::Object
	{
	public:
		::System::UInt32 _FreeGoodsNum_k__BackingField; // 0x10
		::System::UInt32 _MaxFreeGoodsNum_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDIOODJOE_CTOR_OFFSET))(this);
		}

		static ::BABDIOODJOE* BPLPBPMEODA(::HFJKOCDOAEH* a1)
		{
			return ((::BABDIOODJOE*(*)(::HFJKOCDOAEH*))((::PBYTE)hIl2Cpp + BABDIOODJOE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Update(::HFJKOCDOAEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFJKOCDOAEH*))((::PBYTE)hIl2Cpp + BABDIOODJOE_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FreeGoodsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDIOODJOE_GET_FREEGOODSNUM_OFFSET))(this);
		}

		::System::Void set_FreeGoodsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BABDIOODJOE_SET_FREEGOODSNUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxFreeGoodsNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABDIOODJOE_GET_MAXFREEGOODSNUM_OFFSET))(this);
		}

		::System::Void set_MaxFreeGoodsNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BABDIOODJOE_SET_MAXFREEGOODSNUM_OFFSET))(this, a1);
		}

	};
