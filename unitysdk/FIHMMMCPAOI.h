#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODGEOHLNBIP.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
class HFEOGNAMHCG;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIHMMMCPAOI_APDCCFBPCEF_OFFSET UNITYSDK_OFFSET(0x157A7F80)
#define FIHMMMCPAOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x157A8870)
#define FIHMMMCPAOI_CTOR_OFFSET UNITYSDK_OFFSET(0x157A79A0)
#define FIHMMMCPAOI_DCPIGALKBBB_OFFSET UNITYSDK_OFFSET(0x157A84A0)
#define FIHMMMCPAOI_HPPCGJDIFMO_OFFSET UNITYSDK_OFFSET(0x157A8580)
#define FIHMMMCPAOI_JJJAGNBCLBJ_OFFSET UNITYSDK_OFFSET(0x157A8270)
#define FIHMMMCPAOI_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x157A7E80)
#define FIHMMMCPAOI_NINKGGDNLFJ_OFFSET UNITYSDK_OFFSET(0x157A8340)
#define FIHMMMCPAOI___NOTIFYFLOWDISPOSE_B__5_0_OFFSET UNITYSDK_OFFSET(0x157A89C0)

	class FIHMMMCPAOI : public ::ODGEOHLNBIP
	{
	public:
		::System::Collections::Generic::List_1<::HFEOGNAMHCG*>* BALPKNPJIMP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueFormulaData*>* OIJFFAAEDNK; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>** StaticGet_BDPMEPMMHAA()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>**)UnitySDK::FromName("", "FIHMMMCPAOI")->GetStaticField(0x6CE10);
		}

		::System::Void _ctor(::System::Collections::Generic::List_1<::HFEOGNAMHCG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HFEOGNAMHCG*>*))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIHMMMCPAOI_CCTOR_OFFSET))();
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void APDCCFBPCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_APDCCFBPCEF_OFFSET))(this);
		}

		::System::Func_1<::RPG::Client::Promises::IPromise*>* JJJAGNBCLBJ(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_JJJAGNBCLBJ_OFFSET))(this, a1);
		}

		::System::Func_1<::RPG::Client::Promises::IPromise*>* NINKGGDNLFJ(::HFEOGNAMHCG* a1)
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_NINKGGDNLFJ_OFFSET))(this, a1);
		}

		::System::Func_1<::RPG::Client::Promises::IPromise*>* DCPIGALKBBB()
		{
			return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_DCPIGALKBBB_OFFSET))(this);
		}

		::System::Int32 HPPCGJDIFMO(::HFEOGNAMHCG* a1, ::HFEOGNAMHCG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HFEOGNAMHCG*, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + FIHMMMCPAOI_HPPCGJDIFMO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* __NotifyFlowDispose_b__5_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHMMMCPAOI___NOTIFYFLOWDISPOSE_B__5_0_OFFSET))(this);
		}

	};
