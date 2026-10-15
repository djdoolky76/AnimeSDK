#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class CBFJBNFLHJE;
class LJEEEDGAJOC;
class MGKEJEAJGGK;
class NAHFJHAGNGE;
class PPDGBIFKBAC;
namespace RPG::GameCore { class BaseExpeditionBattleAction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FPBAFGOJCNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1590CD50)
#define FPBAFGOJCNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1590B7F0)
#define FPBAFGOJCNK_EAFBILPIOHI_OFFSET UNITYSDK_OFFSET(0x1590CAA0)
#define FPBAFGOJCNK_JGIONOJIDDB_OFFSET UNITYSDK_OFFSET(0x1590C180)
#define FPBAFGOJCNK_PAKJHBKAKPB_OFFSET UNITYSDK_OFFSET(0x1590B800)

inline static constexpr unsigned int FPBAFGOJCNK_TypeDefinitionIndex = 63906;

	class FPBAFGOJCNK : public ::System::Object
	{
	public:
		::MGKEJEAJGGK* HJOADEMMCLN; // 0x10
		::LJEEEDGAJOC* ICIKOFLGOLL; // 0x18
		::NAHFJHAGNGE* PMIJOPOIDML; // 0x20
		static ::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateType>** StaticGet_OIHBECGKGPH()
		{
			return (::Il2CppArray<::RPG::GameCore::ExpeditionBattleFlowStateType>**)UnitySDK::FromName("", "FPBAFGOJCNK")->GetStaticField(0x5C800);
		}

		::System::Void _ctor(::MGKEJEAJGGK* a1, ::LJEEEDGAJOC* a2, ::NAHFJHAGNGE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MGKEJEAJGGK*, ::LJEEEDGAJOC*, ::NAHFJHAGNGE*))((::PBYTE)hIl2Cpp + FPBAFGOJCNK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBAFGOJCNK_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::PPDGBIFKBAC*>* PAKJHBKAKPB(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a3)
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::PPDGBIFKBAC*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FPBAFGOJCNK_PAKJHBKAKPB_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*>* JGIONOJIDDB(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::BaseExpeditionBattleAction*>*>*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::CAFGGCCJPNI*>*))((::PBYTE)hIl2Cpp + FPBAFGOJCNK_JGIONOJIDDB_OFFSET))(this, a1, a2);
		}

		::CBFJBNFLHJE* EAFBILPIOHI(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::CAFGGCCJPNI* a3)
		{
			return ((::CBFJBNFLHJE*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::CAFGGCCJPNI*))((::PBYTE)hIl2Cpp + FPBAFGOJCNK_EAFBILPIOHI_OFFSET))(this, a1, a2, a3);
		}

	};
