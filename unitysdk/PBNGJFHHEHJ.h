#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBNGJFHHEHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C76E0)
#define PBNGJFHHEHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C7CB0)
#define PBNGJFHHEHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C7850)
#define PBNGJFHHEHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C7150)
#define PBNGJFHHEHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C73E0)
#define PBNGJFHHEHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C78F0)
#define PBNGJFHHEHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C7940)
#define PBNGJFHHEHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C7720)
#define PBNGJFHHEHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C7380)
#define PBNGJFHHEHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C7550)
#define PBNGJFHHEHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C77B0)
#define PBNGJFHHEHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C70D0)

	class PBNGJFHHEHJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBNGJFHHEHJ")->GetStaticField(0x3E1A0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PBNGJFHHEHJ")->GetStaticField(0x3E1A8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*>**)UnitySDK::FromName("", "PBNGJFHHEHJ")->GetStaticField(0x3E1B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBNGJFHHEHJ")->GetStaticField(0xD4C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBNGJFHHEHJ")->GetStaticField(0xD4C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPrayQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPrayQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPrayQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPrayQuestConfigRow*))((::PBYTE)hIl2Cpp + PBNGJFHHEHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
