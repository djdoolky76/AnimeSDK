#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class NHIBHAEEOOE;
namespace RPG::Client { class PerformanceManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANECGBMKMBC_AKLACHIECEI_OFFSET UNITYSDK_OFFSET(0x15588880)
#define ANECGBMKMBC_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x155889B0)
#define ANECGBMKMBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x15588B10)
#define ANECGBMKMBC_CFAMEELGNMM_OFFSET UNITYSDK_OFFSET(0x155881E0)
#define ANECGBMKMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x15587F50)
#define ANECGBMKMBC_DIDJNNJLBBD_OFFSET UNITYSDK_OFFSET(0x15588350)
#define ANECGBMKMBC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15587F90)
#define ANECGBMKMBC_EBPICCGKNGP_OFFSET UNITYSDK_OFFSET(0x15588A40)
#define ANECGBMKMBC_IIJINJOJCMO_OFFSET UNITYSDK_OFFSET(0x15588470)
#define ANECGBMKMBC_JFLBNMEILHL_OFFSET UNITYSDK_OFFSET(0x15588AF0)
#define ANECGBMKMBC_LMJFMGPJJAH_OFFSET UNITYSDK_OFFSET(0x15587FE0)
#define ANECGBMKMBC_MFIHBBIKCFE_OFFSET UNITYSDK_OFFSET(0x15588B00)
#define ANECGBMKMBC_NODEDJMPKMP_OFFSET UNITYSDK_OFFSET(0x155887D0)
#define ANECGBMKMBC_TICK_OFFSET UNITYSDK_OFFSET(0x15588180)

inline static constexpr unsigned int ANECGBMKMBC_TypeDefinitionIndex = 60754;

	class ANECGBMKMBC : public ::System::Object
	{
	public:
		::NHIBHAEEOOE* DPIBNIBLAPA; // 0x10
		::System::Collections::Generic::List_1<::NHIBHAEEOOE*>* FCOBDHMIHLD; // 0x18
		::RPG::Client::PerformanceManager* HDPDEGPELBN; // 0x20
		::System::UInt32 EJJOBKJKIJD; // 0x28
		::System::Boolean MHBFEMBCKKG; // 0x2C
		::System::Boolean CAMEICHFJCI; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Single ANGHPDNPDMB; // 0x30
		static ::System::Single* StaticGet_APJGAMMGENJ()
		{
			return (::System::Single*)UnitySDK::FromName("", "ANECGBMKMBC")->GetStaticField(0x13E90);
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
