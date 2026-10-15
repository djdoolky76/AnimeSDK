#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityExpeditionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLAJOLKPPKE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2039A0)
#define NLAJOLKPPKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D204520)
#define NLAJOLKPPKE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D203B10)
#define NLAJOLKPPKE_DFEBIKHBOMF_OFFSET UNITYSDK_OFFSET(0x1D203F70)
#define NLAJOLKPPKE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D203410)
#define NLAJOLKPPKE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2036A0)
#define NLAJOLKPPKE_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1D204490)
#define NLAJOLKPPKE_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1D204000)
#define NLAJOLKPPKE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D203BB0)
#define NLAJOLKPPKE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D203C00)
#define NLAJOLKPPKE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2039E0)
#define NLAJOLKPPKE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D203640)
#define NLAJOLKPPKE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D203810)
#define NLAJOLKPPKE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D203A70)
#define NLAJOLKPPKE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D203390)

inline static constexpr unsigned int NLAJOLKPPKE_TypeDefinitionIndex = 11458;

	class NLAJOLKPPKE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_AMCMCGOBGOG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0x41730);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0x41738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*>**)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0x41740);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0x41748);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0xF8C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0xF8C1);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NLAJOLKPPKE")->GetStaticField(0xF8C2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionGroupRow*>(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityExpeditionGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityExpeditionGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityExpeditionGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityExpeditionGroupRow*))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Boolean DFEBIKHBOMF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NLAJOLKPPKE_DFEBIKHBOMF_OFFSET))(a1, a2);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAJOLKPPKE_HFBAFEEPOLN_OFFSET))();
		}

	};
