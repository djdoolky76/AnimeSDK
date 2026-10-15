#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class ABCPIKLPIGI;
class FFCGHKGDAJF;
class GLDDJECCBAO;
class NHLGPCOOCMA;
class PFICJAHEGIH;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABCPIKLPIGI_AMFJPEJBEOM_OFFSET UNITYSDK_OFFSET(0xB0EFCD0)
#define ABCPIKLPIGI_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB0EE190)
#define ABCPIKLPIGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0EDED0)
#define ABCPIKLPIGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EE060)
#define ABCPIKLPIGI_DHPIMADHNOC_OFFSET UNITYSDK_OFFSET(0xB0EF170)
#define ABCPIKLPIGI_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB0EE150)
#define ABCPIKLPIGI_FAIBBPJDBLB_OFFSET UNITYSDK_OFFSET(0xB0EEC50)
#define ABCPIKLPIGI_GBALMIDBLHF_OFFSET UNITYSDK_OFFSET(0xB0EF200)
#define ABCPIKLPIGI_GBFFDMIHLLE_OFFSET UNITYSDK_OFFSET(0xB0EFEC0)
#define ABCPIKLPIGI_GKGDOKHOGKD_OFFSET UNITYSDK_OFFSET(0xB0EE3D0)
#define ABCPIKLPIGI_HIAICCAFNOL_OFFSET UNITYSDK_OFFSET(0xB0F0010)
#define ABCPIKLPIGI_KHCGPOIKEOE_OFFSET UNITYSDK_OFFSET(0xB0EEC00)
#define ABCPIKLPIGI_LICEKOAENEG_1_OFFSET UNITYSDK_OFFSET(0xB0EF9B0)
#define ABCPIKLPIGI_LICEKOAENEG_2_OFFSET UNITYSDK_OFFSET(0xB0EFBC0)
#define ABCPIKLPIGI_LICEKOAENEG_3_OFFSET UNITYSDK_OFFSET(0xB0EFB20)
#define ABCPIKLPIGI_LICEKOAENEG_OFFSET UNITYSDK_OFFSET(0xB0EF560)
#define ABCPIKLPIGI_MGEBIFADNFB_OFFSET UNITYSDK_OFFSET(0xB0EDE80)
#define ABCPIKLPIGI_ONGICHHKOMK_OFFSET UNITYSDK_OFFSET(0xB0EE5A0)
#define ABCPIKLPIGI_PDOCMMCMDLN_OFFSET UNITYSDK_OFFSET(0xB0EE510)
#define ABCPIKLPIGI_PJKNNBLLECF_OFFSET UNITYSDK_OFFSET(0xB0EE340)

	class ABCPIKLPIGI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GLDDJECCBAO*>* HNKJJCIBJGD; // 0x10
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* DEOJAPMNFIP; // 0x20
		::System::UInt32 LGBKCDDAKFO; // 0x28
		::System::Void _ctor(::FFCGHKGDAJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_CTOR_OFFSET))(this, a1);
		}

		::PFICJAHEGIH* MGEBIFADNFB()
		{
			return ((::PFICJAHEGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_MGEBIFADNFB_OFFSET))(this);
		}

		static ::ABCPIKLPIGI* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::ABCPIKLPIGI*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_BJMNKLGEMPM_OFFSET))(this);
		}

		::GLDDJECCBAO* PJKNNBLLECF(::System::UInt32 a1)
		{
			return ((::GLDDJECCBAO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_PJKNNBLLECF_OFFSET))(this, a1);
		}

		::GLDDJECCBAO* GKGDOKHOGKD(::System::UInt32 a1)
		{
			return ((::GLDDJECCBAO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_GKGDOKHOGKD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* PDOCMMCMDLN(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_PDOCMMCMDLN_OFFSET))(this, a1);
		}

		::GLDDJECCBAO* ONGICHHKOMK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::GLDDJECCBAO*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_ONGICHHKOMK_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KHCGPOIKEOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_KHCGPOIKEOE_OFFSET))(this);
		}

		::System::ValueTuple FAIBBPJDBLB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable* a3)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Nullable*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_FAIBBPJDBLB_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 DHPIMADHNOC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_DHPIMADHNOC_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 LICEKOAENEG(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelNavNodeConditionInfos* a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_LICEKOAENEG_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 LICEKOAENEG_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::RPG::GameCore::LevelNavNodeConditionInfos* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::RPG::GameCore::LevelNavNodeConditionInfos*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_LICEKOAENEG_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 LICEKOAENEG_2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>* a4, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>* a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfos*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::NavMap::NavNodeConditionParamType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_LICEKOAENEG_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 LICEKOAENEG_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3, ::NHLGPCOOCMA* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::NHLGPCOOCMA*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_LICEKOAENEG_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GBALMIDBLHF(::GLDDJECCBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLDDJECCBAO*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_GBALMIDBLHF_OFFSET))(this, a1);
		}

		::System::Void AMFJPEJBEOM(::GLDDJECCBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLDDJECCBAO*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_AMFJPEJBEOM_OFFSET))(this, a1);
		}

		::System::Void GBFFDMIHLLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_GBFFDMIHLLE_OFFSET))(this, a1);
		}

		::System::Void HIAICCAFNOL(::GLDDJECCBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLDDJECCBAO*))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_HIAICCAFNOL_OFFSET))(this, a1);
		}

	};
