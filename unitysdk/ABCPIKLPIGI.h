#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavNodeConditionParamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
class ABCPIKLPIGI;
class FFCGHKGDAJF;
class GLDDJECCBAO;
class NHLGPCOOCMA;
class PFICJAHEGIH;
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABCPIKLPIGI_AMFJPEJBEOM_OFFSET UNITYSDK_OFFSET(0x18C9F4D0)
#define ABCPIKLPIGI_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x18C9D990)
#define ABCPIKLPIGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18C9D6D0)
#define ABCPIKLPIGI_CTOR_OFFSET UNITYSDK_OFFSET(0x18C9D860)
#define ABCPIKLPIGI_DHPIMADHNOC_OFFSET UNITYSDK_OFFSET(0x18C9E970)
#define ABCPIKLPIGI_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x18C9D950)
#define ABCPIKLPIGI_FAIBBPJDBLB_OFFSET UNITYSDK_OFFSET(0x18C9E450)
#define ABCPIKLPIGI_GBALMIDBLHF_OFFSET UNITYSDK_OFFSET(0x18C9EA00)
#define ABCPIKLPIGI_GBFFDMIHLLE_OFFSET UNITYSDK_OFFSET(0x18C9F6C0)
#define ABCPIKLPIGI_GKGDOKHOGKD_OFFSET UNITYSDK_OFFSET(0x18C9DBD0)
#define ABCPIKLPIGI_HIAICCAFNOL_OFFSET UNITYSDK_OFFSET(0x18C9F810)
#define ABCPIKLPIGI_KHCGPOIKEOE_OFFSET UNITYSDK_OFFSET(0x18C9E400)
#define ABCPIKLPIGI_LICEKOAENEG_1_OFFSET UNITYSDK_OFFSET(0x18C9F1B0)
#define ABCPIKLPIGI_LICEKOAENEG_2_OFFSET UNITYSDK_OFFSET(0x18C9F3C0)
#define ABCPIKLPIGI_LICEKOAENEG_3_OFFSET UNITYSDK_OFFSET(0x18C9F320)
#define ABCPIKLPIGI_LICEKOAENEG_OFFSET UNITYSDK_OFFSET(0x18C9ED60)
#define ABCPIKLPIGI_MGEBIFADNFB_OFFSET UNITYSDK_OFFSET(0x18C9D680)
#define ABCPIKLPIGI_ONGICHHKOMK_OFFSET UNITYSDK_OFFSET(0x18C9DDA0)
#define ABCPIKLPIGI_PDOCMMCMDLN_OFFSET UNITYSDK_OFFSET(0x18C9DD10)
#define ABCPIKLPIGI_PJKNNBLLECF_OFFSET UNITYSDK_OFFSET(0x18C9DB40)

inline static constexpr unsigned int ABCPIKLPIGI_TypeDefinitionIndex = 76749;

	class ABCPIKLPIGI : public ::System::Object
	{
	public:
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GLDDJECCBAO*>* HNKJJCIBJGD; // 0x18
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

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FAIBBPJDBLB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Nullable_1<::System::Single> a3)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + ABCPIKLPIGI_FAIBBPJDBLB_OFFSET))(this, a1, a2, a3);
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
