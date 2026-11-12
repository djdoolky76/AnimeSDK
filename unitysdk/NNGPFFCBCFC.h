#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickControlType.h"
#include "unitysdk/RPG/Client/TeamTowers/BrickDirectionType.h"
#include "unitysdk/System/Object.h"

#define NNGPFFCBCFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC591630)
#define NNGPFFCBCFC_GET_BRICKCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xC5915B0)
#define NNGPFFCBCFC_GET_BRICKDIRECTIONMODE_OFFSET UNITYSDK_OFFSET(0xC5915D0)
#define NNGPFFCBCFC_GET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0xC591610)
#define NNGPFFCBCFC_GET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0xC5915F0)
#define NNGPFFCBCFC_SET_BRICKCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xC5915C0)
#define NNGPFFCBCFC_SET_BRICKDIRECTIONMODE_OFFSET UNITYSDK_OFFSET(0xC5915E0)
#define NNGPFFCBCFC_SET_KEYBOARDUSEWROTATE_OFFSET UNITYSDK_OFFSET(0xC591620)
#define NNGPFFCBCFC_SET_MOBILEUSEBTNROTATE_OFFSET UNITYSDK_OFFSET(0xC591600)

inline static constexpr unsigned int NNGPFFCBCFC_TypeDefinitionIndex = 81801;

	class NNGPFFCBCFC : public ::System::Object
	{
	public:
		::System::Boolean _KeyBoardUseWRotate_k__BackingField; // 0x10
		::System::Boolean _MobileUseBtnRotate_k__BackingField; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::Client::TeamTowers::BrickControlType _BrickControlMode_k__BackingField; // 0x14
		::RPG::Client::TeamTowers::BrickDirectionType _BrickDirectionMode_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_CTOR_OFFSET))(this);
		}

		::RPG::Client::TeamTowers::BrickControlType get_BrickControlMode()
		{
			return ((::RPG::Client::TeamTowers::BrickControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_GET_BRICKCONTROLMODE_OFFSET))(this);
		}

		::System::Void set_BrickControlMode(::RPG::Client::TeamTowers::BrickControlType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickControlType))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_SET_BRICKCONTROLMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::BrickDirectionType get_BrickDirectionMode()
		{
			return ((::RPG::Client::TeamTowers::BrickDirectionType(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_GET_BRICKDIRECTIONMODE_OFFSET))(this);
		}

		::System::Void set_BrickDirectionMode(::RPG::Client::TeamTowers::BrickDirectionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::BrickDirectionType))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_SET_BRICKDIRECTIONMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_MobileUseBtnRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_GET_MOBILEUSEBTNROTATE_OFFSET))(this);
		}

		::System::Void set_MobileUseBtnRotate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_SET_MOBILEUSEBTNROTATE_OFFSET))(this, a1);
		}

		::System::Boolean get_KeyBoardUseWRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_GET_KEYBOARDUSEWROTATE_OFFSET))(this);
		}

		::System::Void set_KeyBoardUseWRotate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNGPFFCBCFC_SET_KEYBOARDUSEWROTATE_OFFSET))(this, a1);
		}

	};
