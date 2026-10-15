#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BAMOCNEALHK_AAEKJNLAJEC_OFFSET UNITYSDK_OFFSET(0x1C8823F0)
#define BAMOCNEALHK_BBPECMALGPA_OFFSET UNITYSDK_OFFSET(0x1C881E60)
#define BAMOCNEALHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8827E0)
#define BAMOCNEALHK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C882350)
#define BAMOCNEALHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C882750)
#define BAMOCNEALHK_GAKGNOAEFAM_OFFSET UNITYSDK_OFFSET(0x1C882010)
#define BAMOCNEALHK_GAPFDLGBOKD_OFFSET UNITYSDK_OFFSET(0x1C882270)
#define BAMOCNEALHK_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x1C882200)
#define BAMOCNEALHK_HFFBCPHLNEJ_OFFSET UNITYSDK_OFFSET(0x1C882480)
#define BAMOCNEALHK_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0x1C881EB0)
#define BAMOCNEALHK_MOLEJCLFFKI_OFFSET UNITYSDK_OFFSET(0x1C882600)
#define BAMOCNEALHK_OOFKOICLFLE_OFFSET UNITYSDK_OFFSET(0x1C882060)

inline static constexpr unsigned int BAMOCNEALHK_TypeDefinitionIndex = 43720;

	class BAMOCNEALHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*>* NNJIDEOKDII; // 0x10
		::Il2CppArray<::System::Single>* FBEBNLOPIBL; // 0x18
		::System::Single JGCJFLDDOBM; // 0x20
		::System::Single GOCNDFOEJLF; // 0x24
		static ::System::Single* StaticGet_CKKLOBHGMMC()
		{
			return (::System::Single*)UnitySDK::FromName("", "BAMOCNEALHK")->GetStaticField(0x94B0);
		}

		static ::System::Single* StaticGet_IDECEGANGLA()
		{
			return (::System::Single*)UnitySDK::FromName("", "BAMOCNEALHK")->GetStaticField(0x94B4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOCNEALHK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAMOCNEALHK_CCTOR_OFFSET))();
		}

		::System::Void BBPECMALGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOCNEALHK_BBPECMALGPA_OFFSET))(this);
		}

		::System::Void GAKGNOAEFAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOCNEALHK_GAKGNOAEFAM_OFFSET))(this);
		}

		::System::Void OOFKOICLFLE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BAMOCNEALHK_OOFKOICLFLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single HAIEJENPAMD(::RPG::GameCore::ChenLingFesProperty a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + BAMOCNEALHK_HAIEJENPAMD_OFFSET))(this, a1);
		}

		::System::Single GAPFDLGBOKD(::RPG::GameCore::ChenLingFesProperty a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + BAMOCNEALHK_GAPFDLGBOKD_OFFSET))(this, a1);
		}

		::System::Void MFCFABPGFGB(::RPG::GameCore::ChenLingFesProperty a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Single))((::PBYTE)hIl2Cpp + BAMOCNEALHK_MFCFABPGFGB_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOCNEALHK_CLEAR_OFFSET))(this);
		}

		::System::Void AAEKJNLAJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMOCNEALHK_AAEKJNLAJEC_OFFSET))(this);
		}

		::System::Void HFFBCPHLNEJ(::RPG::GameCore::ChenLingFesProperty a1, ::System::Action_2<::System::Single, ::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + BAMOCNEALHK_HFFBCPHLNEJ_OFFSET))(this, a1, a2);
		}

		::System::Void MOLEJCLFFKI(::RPG::GameCore::ChenLingFesProperty a1, ::System::Action_2<::System::Single, ::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesProperty, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + BAMOCNEALHK_MOLEJCLFFKI_OFFSET))(this, a1, a2);
		}

	};
