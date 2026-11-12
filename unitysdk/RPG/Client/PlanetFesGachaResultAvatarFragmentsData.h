#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"
class AIMNHEHKIMI;
class EKPBGMKJGDL;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesGachaResultAvatarFragmentsData; }

#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET UNITYSDK_OFFSET(0xE630C30)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE630740)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE630670)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE6308B0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE630710)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET UNITYSDK_OFFSET(0xE630FE0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET UNITYSDK_OFFSET(0xE630F30)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0xE630CA0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET UNITYSDK_OFFSET(0xE630B90)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0xE630F10)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET UNITYSDK_OFFSET(0xE630F20)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET UNITYSDK_OFFSET(0xE630CF0)
#define RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET UNITYSDK_OFFSET(0xE630990)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesGachaResultAvatarFragmentsData_TypeDefinitionIndex = 68536;

	class PlanetFesGachaResultAvatarFragmentsData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _TransferCoin_k__BackingField; // 0x10
		::RPG::Client::PlanetFesAvatarData* _AvatarData; // 0x20
		::System::Boolean IsLevelUp; // 0x28
		::System::Boolean IsTransfer; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 TransferNum; // 0x2C
		::System::UInt32 NextLevelTotalFragment; // 0x30
		::System::UInt32 CurrentLevelTotalFragment; // 0x34
		::System::UInt32 CurrentLevel; // 0x38
		::System::UInt32 AvatarRarity; // 0x3C
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 PreviousLevel; // 0x44
		::System::UInt32 TransferItemID; // 0x48
		::System::UInt32 CurrentFragmentsNum; // 0x4C
		::System::UInt32 AddFragmentsNum; // 0x50
		::System::UInt32 PreviousLevelTotalFragment; // 0x54
		::System::Void _ctor(::EKPBGMKJGDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKPBGMKJGDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EKPBGMKJGDL* a1, ::AIMNHEHKIMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EKPBGMKJGDL*, ::AIMNHEHKIMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create(::EKPBGMKJGDL* a1)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::EKPBGMKJGDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesGachaResultAvatarFragmentsData* Create_1(::EKPBGMKJGDL* a1, ::AIMNHEHKIMI* a2)
		{
			return ((::RPG::Client::PlanetFesGachaResultAvatarFragmentsData*(*)(::EKPBGMKJGDL*, ::AIMNHEHKIMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsStarMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSTARMAX_OFFSET))(this);
		}

		::System::Boolean get_IsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_ISSKIPLEVELUP_OFFSET))(this);
		}

		::System::Numerics::BigInteger get_TransferCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GET_TRANSFERCOIN_OFFSET))(this);
		}

		::System::Void set_TransferCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_SET_TRANSFERCOIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsStarMax(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_CHECKISSTARMAX_OFFSET))(this, a1);
		}

		::System::UInt32 GetFragmentNum(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETFRAGMENTNUM_OFFSET))(this, a1);
		}

		::System::UInt32 GetCurrentFragmentNumAfterLevelUP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA_GETCURRENTFRAGMENTNUMAFTERLEVELUP_OFFSET))(this);
		}

		::System::Void _InitFragmentData(::EKPBGMKJGDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKPBGMKJGDL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__INITFRAGMENTDATA_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsSkipLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESGACHARESULTAVATARFRAGMENTSDATA__CHECKISSKIPLEVELUP_OFFSET))(this);
		}

	};
}
