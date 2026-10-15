#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/System/Object.h"

#define PAIJKCEOIJP_CIPPMEDPIGP_OFFSET UNITYSDK_OFFSET(0xBFCA1C0)
#define PAIJKCEOIJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCA290)
#define PAIJKCEOIJP_EJMGECHNFNL_OFFSET UNITYSDK_OFFSET(0xBFCA160)
#define PAIJKCEOIJP_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xBFCA250)
#define PAIJKCEOIJP_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xBFCA270)
#define PAIJKCEOIJP_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xBFCA210)
#define PAIJKCEOIJP_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xBFCA230)
#define PAIJKCEOIJP_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xBFCA260)
#define PAIJKCEOIJP_SET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xBFCA280)
#define PAIJKCEOIJP_SET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xBFCA220)
#define PAIJKCEOIJP_SET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xBFCA240)

inline static constexpr unsigned int PAIJKCEOIJP_TypeDefinitionIndex = 78558;

	class PAIJKCEOIJP : public ::System::Object
	{
	public:
		::System::Int32 _PositionX_k__BackingField; // 0x10
		::RPG::Client::Prop::ChessDirection _Direction_k__BackingField; // 0x14
		::System::Boolean _IsBlock_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _PositionY_k__BackingField; // 0x1C
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
