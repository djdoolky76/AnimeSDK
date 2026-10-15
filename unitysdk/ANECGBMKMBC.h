#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class NHIBHAEEOOE;
namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANECGBMKMBC_AKLACHIECEI_OFFSET UNITYSDK_OFFSET(0x15594070)
#define ANECGBMKMBC_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x155941A0)
#define ANECGBMKMBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15594300)
#define ANECGBMKMBC_CFAMEELGNMM_OFFSET UNITYSDK_OFFSET(0x155939D0)
#define ANECGBMKMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15593740)
#define ANECGBMKMBC_DIDJNNJLBBD_OFFSET UNITYSDK_OFFSET(0x15593B40)
#define ANECGBMKMBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15593780)
#define ANECGBMKMBC_EBPICCGKNGP_OFFSET UNITYSDK_OFFSET(0x15594230)
#define ANECGBMKMBC_IIJINJOJCMO_OFFSET UNITYSDK_OFFSET(0x15593C60)
#define ANECGBMKMBC_JFLBNMEILHL_OFFSET UNITYSDK_OFFSET(0x155942E0)
#define ANECGBMKMBC_LMJFMGPJJAH_OFFSET UNITYSDK_OFFSET(0x155937D0)
#define ANECGBMKMBC_MFIHBBIKCFE_OFFSET UNITYSDK_OFFSET(0x155942F0)
#define ANECGBMKMBC_NODEDJMPKMP_OFFSET UNITYSDK_OFFSET(0x15593FC0)
#define ANECGBMKMBC_TICK_OFFSET UNITYSDK_OFFSET(0x15593970)

	class ANECGBMKMBC : public ::System::Object
	{
	public:
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x10
		::NHIBHAEEOOE* DPIBNIBLAPA; // 0x18
		::System::Collections::Generic::List_1<::NHIBHAEEOOE*>* FCOBDHMIHLD; // 0x20
		::System::Single ANGHPDNPDMB; // 0x28
		::System::Boolean CAMEICHFJCI; // 0x2C
		::System::Boolean MHBFEMBCKKG; // 0x2D
		::System::Byte _padding0[0x2];
		::System::UInt32 EJJOBKJKIJD; // 0x30
		static ::System::Single* StaticGet_APJGAMMGENJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "ANECGBMKMBC")->GetStaticField(0x14640);
		}

		::System::Void _ctor(::RPG::Client::PerformanceManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + ANECGBMKMBC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANECGBMKMBC_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANECGBMKMBC_TICK_OFFSET))(this, a1);
		}

		::System::Boolean DIDJNNJLBBD(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + ANECGBMKMBC_DIDJNNJLBBD_OFFSET))(this, a1, a2);
		}

		::System::Boolean IIJINJOJCMO(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + ANECGBMKMBC_IIJINJOJCMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean AKLACHIECEI(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + ANECGBMKMBC_AKLACHIECEI_OFFSET))(this, a1, a2);
		}

		::System::Void LMJFMGPJJAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_LMJFMGPJJAH_OFFSET))(this);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void CFAMEELGNMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANECGBMKMBC_CFAMEELGNMM_OFFSET))(this, a1);
		}

		::System::Void NODEDJMPKMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_NODEDJMPKMP_OFFSET))(this);
		}

		::System::Void EBPICCGKNGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_EBPICCGKNGP_OFFSET))(this);
		}

		::System::Boolean JFLBNMEILHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_JFLBNMEILHL_OFFSET))(this);
		}

		::System::UInt32 MFIHBBIKCFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANECGBMKMBC_MFIHBBIKCFE_OFFSET))(this);
		}

	};
