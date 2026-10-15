#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleBuffEffect.h"
#include "unitysdk/RPG/GameCore/MarbleBuffType.h"
#include "unitysdk/RPG/GameCore/MarbleLifeTime.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class NBIBOKEFKIH;
namespace RPG::GameCore { class MarbleBuffConfig; }

#define NDEAGEPIBKK_CFINKMFANFE_OFFSET UNITYSDK_OFFSET(0x1C937F70)
#define NDEAGEPIBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C93DD30)
#define NDEAGEPIBKK_DBOHNFFMLNF_OFFSET UNITYSDK_OFFSET(0x1C93DE60)
#define NDEAGEPIBKK_FMPJJHKCNGG_OFFSET UNITYSDK_OFFSET(0x1C93DD70)
#define NDEAGEPIBKK_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1C9445C0)
#define NDEAGEPIBKK_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C944640)
#define NDEAGEPIBKK_GET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C944600)
#define NDEAGEPIBKK_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C944620)
#define NDEAGEPIBKK_GET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C9445E0)
#define NDEAGEPIBKK_HPNEBOOLALO_OFFSET UNITYSDK_OFFSET(0x1C937F00)
#define NDEAGEPIBKK_ILIDMKFENBK_OFFSET UNITYSDK_OFFSET(0x1C93DCC0)
#define NDEAGEPIBKK_JEDEFJFEGBB_OFFSET UNITYSDK_OFFSET(0x1C937F50)
#define NDEAGEPIBKK_JINFMODBBKM_OFFSET UNITYSDK_OFFSET(0x1C93ECF0)
#define NDEAGEPIBKK_KKMAEKDGECI_OFFSET UNITYSDK_OFFSET(0x1C93EE50)
#define NDEAGEPIBKK_LECHEBIBFHM_OFFSET UNITYSDK_OFFSET(0x1C9445A0)
#define NDEAGEPIBKK_LMABJDHENPK_OFFSET UNITYSDK_OFFSET(0x1C944580)
#define NDEAGEPIBKK_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1C93B590)
#define NDEAGEPIBKK_NHLLMJMDAPI_OFFSET UNITYSDK_OFFSET(0x1C93EE30)
#define NDEAGEPIBKK_OMLHJFMHAJM_OFFSET UNITYSDK_OFFSET(0x1C93DDD0)
#define NDEAGEPIBKK_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x1C9445D0)
#define NDEAGEPIBKK_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C944650)
#define NDEAGEPIBKK_SET_ROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C944610)
#define NDEAGEPIBKK_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0x1C944630)
#define NDEAGEPIBKK_SET_STACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1C9445F0)

inline static constexpr unsigned int NDEAGEPIBKK_TypeDefinitionIndex = 43090;

	class NDEAGEPIBKK : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleBuffConfig* _Config_k__BackingField; // 0x10
		::System::UInt32 _Source_k__BackingField; // 0x18
		::System::Int32 _RoundCount_k__BackingField; // 0x1C
		::System::Nullable_1<::System::Single> PNGPEKDABLL; // 0x20
		::System::UInt32 _BuffId_k__BackingField; // 0x28
		::System::UInt32 _StackCount_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::MarbleBuffConfig* a2, ::NBIBOKEFKIH* a3, ::System::UInt32 a4, ::System::Int32 a5, ::System::Nullable_1<::System::Single> a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::MarbleBuffConfig*, ::NBIBOKEFKIH*, ::System::UInt32, ::System::Int32, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void FMPJJHKCNGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_FMPJJHKCNGG_OFFSET))(this);
		}

		::System::Void CFINKMFANFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_CFINKMFANFE_OFFSET))(this);
		}

		::System::Void ILIDMKFENBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_ILIDMKFENBK_OFFSET))(this, a1);
		}

		::System::Void OMLHJFMHAJM(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_OMLHJFMHAJM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPNEBOOLALO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_HPNEBOOLALO_OFFSET))(this);
		}

		::System::Boolean DBOHNFFMLNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_DBOHNFFMLNF_OFFSET))(this);
		}

		::System::UInt32 get_BuffId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_SET_BUFFID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleBuffType LMABJDHENPK()
		{
			return ((::RPG::GameCore::MarbleBuffType(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_LMABJDHENPK_OFFSET))(this);
		}

		::RPG::GameCore::MarbleLifeTime JEDEFJFEGBB()
		{
			return ((::RPG::GameCore::MarbleLifeTime(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_JEDEFJFEGBB_OFFSET))(this);
		}

		::RPG::GameCore::MarbleBuffEffect JINFMODBBKM()
		{
			return ((::RPG::GameCore::MarbleBuffEffect(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_JINFMODBBKM_OFFSET))(this);
		}

		::RPG::GameCore::MarbleValue NHLLMJMDAPI()
		{
			return ((::RPG::GameCore::MarbleValue(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_NHLLMJMDAPI_OFFSET))(this);
		}

		::RPG::GameCore::MarbleOperation KKMAEKDGECI()
		{
			return ((::RPG::GameCore::MarbleOperation(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_KKMAEKDGECI_OFFSET))(this);
		}

		::System::Single MNLDMBGAJIF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::UInt32 get_StackCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_GET_STACKCOUNT_OFFSET))(this);
		}

		::System::Void set_StackCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_SET_STACKCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 LECHEBIBFHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_LECHEBIBFHM_OFFSET))(this);
		}

		::System::Int32 get_RoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_GET_ROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_RoundCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_SET_ROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Source()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_GET_SOURCE_OFFSET))(this);
		}

		::System::Void set_Source(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_SET_SOURCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::MarbleBuffConfig* get_Config()
		{
			return ((::RPG::GameCore::MarbleBuffConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::MarbleBuffConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleBuffConfig*))((::PBYTE)hIl2Cpp + NDEAGEPIBKK_SET_CONFIG_OFFSET))(this, a1);
		}

	};
