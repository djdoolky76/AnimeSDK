#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class JANIKHDFJLA;
class KDOJKNPADNC;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MACJPMIDFNL_AKOJHBDFOPN_OFFSET UNITYSDK_OFFSET(0xC0A34D0)
#define MACJPMIDFNL_BEFCGMHDBOP_OFFSET UNITYSDK_OFFSET(0xC0A21E0)
#define MACJPMIDFNL_CAAJLAOIEJI_OFFSET UNITYSDK_OFFSET(0xC0A2DE0)
#define MACJPMIDFNL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC0A3A50)
#define MACJPMIDFNL_CTOR_OFFSET UNITYSDK_OFFSET(0xC0A0E30)
#define MACJPMIDFNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0A1550)
#define MACJPMIDFNL_DMCHEDILPKP_OFFSET UNITYSDK_OFFSET(0xC0A1C50)
#define MACJPMIDFNL_EPBJHNBJBMC_OFFSET UNITYSDK_OFFSET(0xC0A3330)
#define MACJPMIDFNL_GPOLBDHKLCI_OFFSET UNITYSDK_OFFSET(0xC0A23D0)
#define MACJPMIDFNL_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xC0A1A90)
#define MACJPMIDFNL_JDDAGHGHPGP_OFFSET UNITYSDK_OFFSET(0xC0A3780)
#define MACJPMIDFNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC0A25B0)
#define MACJPMIDFNL_KOEAIIEENCF_OFFSET UNITYSDK_OFFSET(0xC0A1FB0)
#define MACJPMIDFNL_LJFPKNJJOOE_OFFSET UNITYSDK_OFFSET(0xC0A2B20)
#define MACJPMIDFNL_OEHMIDGKIOD_OFFSET UNITYSDK_OFFSET(0xC0A33C0)
#define MACJPMIDFNL_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xC0A18D0)
#define MACJPMIDFNL_PJMLDMJDHMA_OFFSET UNITYSDK_OFFSET(0xC0A2AE0)
#define MACJPMIDFNL_PLGNLKALBNN_OFFSET UNITYSDK_OFFSET(0xC0A1E00)

inline static constexpr unsigned int MACJPMIDFNL_TypeDefinitionIndex = 65685;

	class MACJPMIDFNL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FDHOAEDHKCH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KDOJKNPADNC*>* BJGMIIELLKH; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GFGBFKPKDDL; // 0x20
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Single>>* GANCEIODDPB; // 0x28
		::System::Collections::Generic::List_1<::JANIKHDFJLA*>* GADMAOCHBKN; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* HPGMBOKOGAA; // 0x38
		::System::Int32 HEKJKPOBAED; // 0x40
		::System::Boolean MCAPIAKDMAA; // 0x44
		::System::Boolean FMNEEONAMNO; // 0x45
		::System::Boolean CMMCCMBHNJH; // 0x46
		::System::Byte _padding0[0x1];
		::System::Single DNNNHDAEAHH; // 0x48
		::System::Single IJKFPHAKDEA; // 0x4C
		::System::UInt32 MFGLBHGCOOJ; // 0x50
		::System::Int32 LAOKICEOJFB; // 0x54
		::System::Single HPCHCEFOKJB; // 0x58
		::System::Int32 CIAJDNHFBKN; // 0x5C
		static ::System::Int32* StaticGet_KNMJMOMOPFG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MACJPMIDFNL")->GetStaticField(0x159C0);
		}

		::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MACJPMIDFNL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACJPMIDFNL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_DISPOSE_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void DMCHEDILPKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_DMCHEDILPKP_OFFSET))(this);
		}

		::System::Void PLGNLKALBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_PLGNLKALBNN_OFFSET))(this);
		}

		::System::Void KOEAIIEENCF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MACJPMIDFNL_KOEAIIEENCF_OFFSET))(this, a1);
		}

		::System::Void BEFCGMHDBOP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MACJPMIDFNL_BEFCGMHDBOP_OFFSET))(this, a1);
		}

		::System::Void GPOLBDHKLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_GPOLBDHKLCI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MACJPMIDFNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LJFPKNJJOOE(::KDOJKNPADNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDOJKNPADNC*))((::PBYTE)hIl2Cpp + MACJPMIDFNL_LJFPKNJJOOE_OFFSET))(this, a1);
		}

		::System::Boolean EPBJHNBJBMC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MACJPMIDFNL_EPBJHNBJBMC_OFFSET))(this, a1);
		}

		::System::Boolean OEHMIDGKIOD(::System::Single a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MACJPMIDFNL_OEHMIDGKIOD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AKOJHBDFOPN(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MACJPMIDFNL_AKOJHBDFOPN_OFFSET))(this, a1, a2);
		}

		::System::Void JDDAGHGHPGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MACJPMIDFNL_JDDAGHGHPGP_OFFSET))(this, a1);
		}

		::System::Void CAAJLAOIEJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_CAAJLAOIEJI_OFFSET))(this);
		}

		::System::Boolean PJMLDMJDHMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MACJPMIDFNL_PJMLDMJDHMA_OFFSET))(this);
		}

	};
