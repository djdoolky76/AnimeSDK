#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeTransitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DJJFECDBGIK;
class ECPFBGMALIP;
class FFCGHKGDAJF;
class IOEPMPAKMOK;
class MJOBGAACNDC;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECPFBGMALIP_AOBHBJHANFI_1_OFFSET UNITYSDK_OFFSET(0x12D17BF0)
#define ECPFBGMALIP_AOBHBJHANFI_OFFSET UNITYSDK_OFFSET(0x12D16FD0)
#define ECPFBGMALIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12D168B0)
#define ECPFBGMALIP_CTOR_OFFSET UNITYSDK_OFFSET(0x12D16A80)
#define ECPFBGMALIP_DPGIJKFBDOF_OFFSET UNITYSDK_OFFSET(0x12D16CB0)
#define ECPFBGMALIP_EEDHFGLHMAA_OFFSET UNITYSDK_OFFSET(0x12D18090)
#define ECPFBGMALIP_EJBCJAPMECH_OFFSET UNITYSDK_OFFSET(0x12D16BF0)
#define ECPFBGMALIP_FPMOEHJELID_OFFSET UNITYSDK_OFFSET(0x12D16860)
#define ECPFBGMALIP_GFJKECKDOGC_OFFSET UNITYSDK_OFFSET(0x12D16D10)
#define ECPFBGMALIP_IBFFEPGNBCM_OFFSET UNITYSDK_OFFSET(0x12D17460)
#define ECPFBGMALIP_IOGBJKLPAAK_OFFSET UNITYSDK_OFFSET(0x12D17FB0)
#define ECPFBGMALIP_NIBNOMPBOPL_OFFSET UNITYSDK_OFFSET(0x12D18130)

inline static constexpr unsigned int ECPFBGMALIP_TypeDefinitionIndex = 74605;

	class ECPFBGMALIP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* AFOPLGLPMKK; // 0x10
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EAPOGCIPOIO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MJOBGAACNDC*>* KIMKMPPNJEI; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* KADGKBFMELL; // 0x30
		::System::Collections::Generic::List_1<::DJJFECDBGIK*>* CAEIHNOCJDC; // 0x38
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + ECPFBGMALIP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::NavMap::IMapDataSource* FPMOEHJELID()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_FPMOEHJELID_OFFSET))(this);
		}

		static ::ECPFBGMALIP* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>* a2, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>* a3)
		{
			return ((::ECPFBGMALIP*(*)(::FFCGHKGDAJF*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LevelNavNodeInfo>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::RPG::GameCore::LevelNavNodeTransitInfo>*>*))((::PBYTE)hIl2Cpp + ECPFBGMALIP_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 EJBCJAPMECH(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPFBGMALIP_EJBCJAPMECH_OFFSET))(this, a1);
		}

		::System::Void DPGIJKFBDOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_DPGIJKFBDOF_OFFSET))(this);
		}

		::System::Void GFJKECKDOGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_GFJKECKDOGC_OFFSET))(this);
		}

		::System::Void AOBHBJHANFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_AOBHBJHANFI_OFFSET))(this);
		}

		::System::Void AOBHBJHANFI_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPFBGMALIP_AOBHBJHANFI_1_OFFSET))(this, a1, a2);
		}

		::System::Void IBFFEPGNBCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_IBFFEPGNBCM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::MJOBGAACNDC*>* IOGBJKLPAAK()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::MJOBGAACNDC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP_IOGBJKLPAAK_OFFSET))(this);
		}

		::MJOBGAACNDC* EEDHFGLHMAA(::System::UInt32 a1)
		{
			return ((::MJOBGAACNDC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPFBGMALIP_EEDHFGLHMAA_OFFSET))(this, a1);
		}

		::System::Boolean NIBNOMPBOPL(::UnityEngine::Vector3 a1, ::IOEPMPAKMOK* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + ECPFBGMALIP_NIBNOMPBOPL_OFFSET))(this, a1, a2);
		}

	};
