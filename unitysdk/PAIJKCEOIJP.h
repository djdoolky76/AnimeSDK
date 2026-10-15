#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

#define PAIJKCEOIJP_CIPPMEDPIGP_OFFSET UNITYSDK_OFFSET(0xBFC2CC0)
#define PAIJKCEOIJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC2D90)
#define PAIJKCEOIJP_EJMGECHNFNL_OFFSET UNITYSDK_OFFSET(0xBFC2C60)
#define PAIJKCEOIJP_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xBFC2D50)
#define PAIJKCEOIJP_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xBFC2D70)
#define PAIJKCEOIJP_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xBFC2D10)
#define PAIJKCEOIJP_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xBFC2D30)
#define PAIJKCEOIJP_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xBFC2D60)
#define PAIJKCEOIJP_SET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xBFC2D80)
#define PAIJKCEOIJP_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xBFC2D20)
#define PAIJKCEOIJP_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xBFC2D40)

inline static constexpr unsigned int PAIJKCEOIJP_TypeDefinitionIndex = 78557;

	class PAIJKCEOIJP : public ::System::Object
	{
	public:
		::System::Int32 _PositionY_k__BackingField; // 0x10
		::System::Boolean _IsBlock_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x18
		::System::Int32 _PositionX_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_CTOR_OFFSET))(this);
		}

		::System::Void EJMGECHNFNL(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_EJMGECHNFNL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CIPPMEDPIGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_CIPPMEDPIGP_OFFSET))(this, a1);
		}

		::System::Int32 get_PositionX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_GET_POSITIONX_OFFSET))(this);
		}

		::System::Void set_PositionX(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_SET_POSITIONX_OFFSET))(this, a1);
		}

		::System::Int32 get_PositionY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_GET_POSITIONY_OFFSET))(this);
		}

		::System::Void set_PositionY(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_SET_POSITIONY_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChessDirection get_Direction()
		{
			return ((::RPG::Client::Prop::ChessDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_Direction(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_SET_DIRECTION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Void set_IsBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAIJKCEOIJP_SET_ISBLOCK_OFFSET))(this, a1);
		}

	};
