#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLEAFONPDBM_ChangeSource.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
class KLEAFONPDBM;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace System { class Object; }
namespace System { class String; }

#define KLEAFONPDBM_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0xB4EE990)
#define KLEAFONPDBM_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xB4F01F0)
#define KLEAFONPDBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB4EE6E0)
#define KLEAFONPDBM_DAPIPJGPBLE_OFFSET UNITYSDK_OFFSET(0xB4EF1C0)
#define KLEAFONPDBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4EFB60)
#define KLEAFONPDBM_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0xB4F0280)
#define KLEAFONPDBM_GET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xB4F0290)
#define KLEAFONPDBM_GMAKJNMIHFO_OFFSET UNITYSDK_OFFSET(0xB4EF7D0)
#define KLEAFONPDBM_HBMKDAGAPAI_OFFSET UNITYSDK_OFFSET(0xB4EF620)
#define KLEAFONPDBM_IPGKMKFKMPB_OFFSET UNITYSDK_OFFSET(0xB4EECD0)
#define KLEAFONPDBM_LIPEJCLFIDK_OFFSET UNITYSDK_OFFSET(0xB4EF3B0)
#define KLEAFONPDBM_LMCCAPGILDB_OFFSET UNITYSDK_OFFSET(0xB4EF480)
#define KLEAFONPDBM_MFNCADGAEMN_OFFSET UNITYSDK_OFFSET(0xB4EFD20)
#define KLEAFONPDBM_MGGLGCJABMG_OFFSET UNITYSDK_OFFSET(0xB4EE7C0)
#define KLEAFONPDBM_MIEKDJHOBGM_OFFSET UNITYSDK_OFFSET(0xB4EF010)
#define KLEAFONPDBM_MMHKHLMDMGE_OFFSET UNITYSDK_OFFSET(0xB4F0120)
#define KLEAFONPDBM_OOFFOHOJNKN_OFFSET UNITYSDK_OFFSET(0xB4EE9F0)
#define KLEAFONPDBM_SET__COMMONCONFIG_OFFSET UNITYSDK_OFFSET(0xB4F02A0)
#define KLEAFONPDBM_TICK_OFFSET UNITYSDK_OFFSET(0xB4EFCA0)

inline static constexpr unsigned int KLEAFONPDBM_TypeDefinitionIndex = 73312;

	class KLEAFONPDBM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::EraFlipperCommonConfig* __CommonConfig_k__BackingField; // 0x18
		::RPG::Client::EraFlipperManager* KLKIMALJKKE; // 0x20
		::RPG::Client::AchievementData* AKIEODBOBPF; // 0x28
		::System::Boolean HOPFFGJEIEI; // 0x30
		::System::Boolean BIKIJLMGCMJ; // 0x31
		::System::Boolean EIOFOEKBIHO; // 0x32
		::System::Boolean MPLOONMNECE; // 0x33
		::System::Nullable_1<::RPG::GameCore::EraStateType> BGDKFBODOEO; // 0x34
		// static const ::System::Object KOKMKAGEEKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_CTOR_OFFSET))(this);
		}

		::System::Void MGGLGCJABMG(::KLEAFONPDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEAFONPDBM*))((::PBYTE)hIl2Cpp + KLEAFONPDBM_MGGLGCJABMG_OFFSET))(this, a1);
		}

		::System::Void OOFFOHOJNKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_OOFFOHOJNKN_OFFSET))(this);
		}

		::System::Void MIEKDJHOBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_MIEKDJHOBGM_OFFSET))(this);
		}

		::System::Void LMCCAPGILDB(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KLEAFONPDBM_LMCCAPGILDB_OFFSET))(this, a1, a2);
		}

		::System::Void GMAKJNMIHFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_GMAKJNMIHFO_OFFSET))(this);
		}

		::System::Void DAPIPJGPBLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_DAPIPJGPBLE_OFFSET))(this);
		}

		::System::Void LIPEJCLFIDK(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KLEAFONPDBM_LIPEJCLFIDK_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLEAFONPDBM_TICK_OFFSET))(this, a1);
		}

		::System::Void IPGKMKFKMPB(::System::Boolean a1, ::KLEAFONPDBM_ChangeSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::KLEAFONPDBM_ChangeSource))((::PBYTE)hIl2Cpp + KLEAFONPDBM_IPGKMKFKMPB_OFFSET))(this, a1, a2);
		}

		::System::Void MMHKHLMDMGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLEAFONPDBM_MMHKHLMDMGE_OFFSET))(this, a1);
		}

		::System::Void MFNCADGAEMN(::System::Boolean a1, ::KLEAFONPDBM_ChangeSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::KLEAFONPDBM_ChangeSource))((::PBYTE)hIl2Cpp + KLEAFONPDBM_MFNCADGAEMN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 HBMKDAGAPAI(::System::String* a1, ::System::String* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KLEAFONPDBM_HBMKDAGAPAI_OFFSET))(this, a1, a2);
		}

		::System::Void CEPJHGNMKJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLEAFONPDBM_CEPJHGNMKJD_OFFSET))(this, a1);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLEAFONPDBM_APLLCIPBJFH_OFFSET))(this, a1);
		}

		::RPG::Client::EraFlipperCommonConfig* get__CommonConfig()
		{
			return ((::RPG::Client::EraFlipperCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEAFONPDBM_GET__COMMONCONFIG_OFFSET))(this);
		}

		::System::Void set__CommonConfig(::RPG::Client::EraFlipperCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + KLEAFONPDBM_SET__COMMONCONFIG_OFFSET))(this, a1);
		}

	};
