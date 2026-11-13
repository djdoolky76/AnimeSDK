#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/System/Object.h"
class APKJLMDEMLI;
class GBIDCPEOLMH;
class GMIFBFGDGJK;
class JAHEBNMBGPI;
class KMALCPNMFHH;
class OJOCPEMKKDA;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBIDCPEOLMH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AA38520)
#define GBIDCPEOLMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA38650)
#define GBIDCPEOLMH_DBCHCNBMEPN_OFFSET UNITYSDK_OFFSET(0x1AA39200)
#define GBIDCPEOLMH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA38700)
#define GBIDCPEOLMH_JFBMIFAJICC_OFFSET UNITYSDK_OFFSET(0x1AA38F30)
#define GBIDCPEOLMH_LAMNDGBKILN_OFFSET UNITYSDK_OFFSET(0x1AA387B0)
#define GBIDCPEOLMH_MPJMGHJLHMO_OFFSET UNITYSDK_OFFSET(0x1AA38840)
#define GBIDCPEOLMH_ODAGJPOFHEH_OFFSET UNITYSDK_OFFSET(0x1AA392F0)
#define GBIDCPEOLMH_ONFCJOECHHJ_1_OFFSET UNITYSDK_OFFSET(0x1AA38BA0)
#define GBIDCPEOLMH_ONFCJOECHHJ_OFFSET UNITYSDK_OFFSET(0x1AA38B40)

inline static constexpr unsigned int GBIDCPEOLMH_TypeDefinitionIndex = 38226;

	class GBIDCPEOLMH : public ::System::Object
	{
	public:
		::GMIFBFGDGJK* EEFMDEHLLFI; // 0x10
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceCoreEventType, ::System::Collections::Generic::List_1<::KMALCPNMFHH*>*>* EFBHGNCEAEE; // 0x20
		::System::Void _ctor(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_CTOR_OFFSET))(this, a1, a2);
		}

		static ::GBIDCPEOLMH* BPLPBPMEODA(::PBGNKMMDBGD* a1, ::GMIFBFGDGJK* a2)
		{
			return ((::GBIDCPEOLMH*(*)(::PBGNKMMDBGD*, ::GMIFBFGDGJK*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_DISPOSE_OFFSET))(this);
		}

		::System::Void MPJMGHJLHMO(::RPG::GameCore::CakeRaceCoreEventType a1, ::APKJLMDEMLI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::APKJLMDEMLI*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_MPJMGHJLHMO_OFFSET))(this, a1, a2);
		}

		::System::Void ONFCJOECHHJ(::RPG::GameCore::CakeRaceCoreEventType a1, ::OJOCPEMKKDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::OJOCPEMKKDA*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_ONFCJOECHHJ_OFFSET))(this, a1, a2);
		}

		::System::Void ONFCJOECHHJ_1(::RPG::GameCore::CakeRaceCoreEventType a1, ::OJOCPEMKKDA* a2, ::JAHEBNMBGPI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::OJOCPEMKKDA*, ::JAHEBNMBGPI*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_ONFCJOECHHJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFBMIFAJICC(::RPG::GameCore::CakeRaceCoreEventType a1, ::OJOCPEMKKDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType, ::OJOCPEMKKDA*))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_JFBMIFAJICC_OFFSET))(this, a1, a2);
		}

		::System::Void LAMNDGBKILN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_LAMNDGBKILN_OFFSET))(this);
		}

		::System::Int32 DBCHCNBMEPN(::RPG::GameCore::CakeRaceCoreEventType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_DBCHCNBMEPN_OFFSET))(this, a1);
		}

		::System::Boolean ODAGJPOFHEH(::RPG::GameCore::CakeRaceCoreEventType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceCoreEventType))((::PBYTE)hIl2Cpp + GBIDCPEOLMH_ODAGJPOFHEH_OFFSET))(this, a1);
		}

	};
