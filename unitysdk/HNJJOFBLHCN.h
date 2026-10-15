#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceTiming.h"
#include "unitysdk/System/Object.h"
class AIMNKMEFBKE;
class IJFIHJJPHNA;
class KKPNEOIKLJG;
class PLAJONHLDJN;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNJJOFBLHCN_BILPCHDOHME_OFFSET UNITYSDK_OFFSET(0x1C677020)
#define HNJJOFBLHCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C677140)
#define HNJJOFBLHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C674320)
#define HNJJOFBLHCN_DLMLLDMJNAC_OFFSET UNITYSDK_OFFSET(0x1C676280)
#define HNJJOFBLHCN_FPNKHPOEKBC_OFFSET UNITYSDK_OFFSET(0x1C676A20)
#define HNJJOFBLHCN_HFMKGNFGPBG_OFFSET UNITYSDK_OFFSET(0x1C676A80)
#define HNJJOFBLHCN_IJEICDDOFPG_OFFSET UNITYSDK_OFFSET(0x1C674B90)
#define HNJJOFBLHCN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6744C0)
#define HNJJOFBLHCN_KGBGFLLIAPA_OFFSET UNITYSDK_OFFSET(0x1C6754E0)
#define HNJJOFBLHCN_LAJHNFIEBCE_OFFSET UNITYSDK_OFFSET(0x1C675B00)
#define HNJJOFBLHCN_MJLFFJHOLEB_OFFSET UNITYSDK_OFFSET(0x1C674980)
#define HNJJOFBLHCN_MMBFGDHCENM_OFFSET UNITYSDK_OFFSET(0x1C676870)
#define HNJJOFBLHCN_MONLKGNABLM_OFFSET UNITYSDK_OFFSET(0x1C674F30)

inline static constexpr unsigned int HNJJOFBLHCN_TypeDefinitionIndex = 36474;

	class HNJJOFBLHCN : public ::System::Object
	{
	public:
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x10
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2DialogPerformanceTiming, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* PDDIHGBPBKG; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* CLMEMMHEICD; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>* JJCAJBJICFO; // 0x30
		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>** StaticGet_EJGPIOKBPCN()
		{
			return (::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>**)UnitySDK::FromName("", "HNJJOFBLHCN")->GetStaticField(0x2760);
		}

		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNJJOFBLHCN_CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_INITIALIZE_OFFSET))(this);
		}

		::System::Void MJLFFJHOLEB(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_MJLFFJHOLEB_OFFSET))(this, a1);
		}

		::System::Boolean IJEICDDOFPG(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_IJEICDDOFPG_OFFSET))(this, a1);
		}

		::System::Void MONLKGNABLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_MONLKGNABLM_OFFSET))(this);
		}

		::System::Void KGBGFLLIAPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_KGBGFLLIAPA_OFFSET))(this);
		}

		::System::Void LAJHNFIEBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_LAJHNFIEBCE_OFFSET))(this);
		}

		::System::Void DLMLLDMJNAC(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_DLMLLDMJNAC_OFFSET))(this, a1, a2);
		}

		::System::Void MMBFGDHCENM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_MMBFGDHCENM_OFFSET))(this);
		}

		::System::Boolean FPNKHPOEKBC(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_FPNKHPOEKBC_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatV2SingleDialogPerformance* HFMKGNFGPBG(::RPG::GameCore::DiceCombatV2DialogPerformanceTiming a1)
		{
			return ((::RPG::GameCore::DiceCombatV2SingleDialogPerformance*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2DialogPerformanceTiming))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_HFMKGNFGPBG_OFFSET))(this, a1);
		}

		::KKPNEOIKLJG* BILPCHDOHME(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
		{
			return ((::KKPNEOIKLJG*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN_BILPCHDOHME_OFFSET))(this, a1);
		}

	};
