#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LAELJHAMFOF;

#define HDPANJAGMCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C339F0)
#define HDPANJAGMCM_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x15C338C0)
#define HDPANJAGMCM_GET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x15C33960)
#define HDPANJAGMCM_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15C33910)
#define HDPANJAGMCM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15C33940)
#define HDPANJAGMCM_OPBJLHHADNB_OFFSET UNITYSDK_OFFSET(0x15C33980)
#define HDPANJAGMCM_SET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x15C33970)
#define HDPANJAGMCM_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15C33930)
#define HDPANJAGMCM_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x15C33950)

inline static constexpr unsigned int HDPANJAGMCM_TypeDefinitionIndex = 62540;

	class HDPANJAGMCM : public ::System::Object
	{
	public:
		::LAELJHAMFOF* _BattleAvatarService_k__BackingField; // 0x10
		::RPG::GameCore::BattleExtraPropertyAddition _Type_k__BackingField; // 0x18
		::AHHNGJGLOKA _Identifier_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_CTOR_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_EPGHHDPDFFE_OFFSET))(this);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::AHHNGJGLOKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + HDPANJAGMCM_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleExtraPropertyAddition get_Type()
		{
			return ((::RPG::GameCore::BattleExtraPropertyAddition(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::BattleExtraPropertyAddition a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + HDPANJAGMCM_SET_TYPE_OFFSET))(this, a1);
		}

		::LAELJHAMFOF* get_BattleAvatarService()
		{
			return ((::LAELJHAMFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_GET_BATTLEAVATARSERVICE_OFFSET))(this);
		}

		::System::Void set_BattleAvatarService(::LAELJHAMFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAELJHAMFOF*))((::PBYTE)hIl2Cpp + HDPANJAGMCM_SET_BATTLEAVATARSERVICE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint OPBJLHHADNB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPANJAGMCM_OPBJLHHADNB_OFFSET))(this);
		}

	};
