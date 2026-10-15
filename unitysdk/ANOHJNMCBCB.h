#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBackServantConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANOHJNMCBCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE6D90)
#define ANOHJNMCBCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE7390)
#define ANOHJNMCBCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE6F00)
#define ANOHJNMCBCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE67C0)
#define ANOHJNMCBCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE6A50)
#define ANOHJNMCBCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE6FA0)
#define ANOHJNMCBCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE6FF0)
#define ANOHJNMCBCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE6DD0)
#define ANOHJNMCBCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE69F0)
#define ANOHJNMCBCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE6BC0)
#define ANOHJNMCBCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE6E60)
#define ANOHJNMCBCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE6740)

	class ANOHJNMCBCB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANOHJNMCBCB")->GetStaticField(0x3C4D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>**)UnitySDK::FromName("", "ANOHJNMCBCB")->GetStaticField(0x3C4D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "ANOHJNMCBCB")->GetStaticField(0x3C4E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANOHJNMCBCB")->GetStaticField(0xCE50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANOHJNMCBCB")->GetStaticField(0xCE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBackServantConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightBackServantConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ANOHJNMCBCB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANOHJNMCBCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANOHJNMCBCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANOHJNMCBCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANOHJNMCBCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBackServantConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBackServantConfigRow*))((::PBYTE)hIl2Cpp + ANOHJNMCBCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
