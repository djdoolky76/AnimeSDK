#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveReplyRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPCHIBKDJGJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D319560)
#define PPCHIBKDJGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D319B30)
#define PPCHIBKDJGJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3196D0)
#define PPCHIBKDJGJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D318FD0)
#define PPCHIBKDJGJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D319260)
#define PPCHIBKDJGJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D319770)
#define PPCHIBKDJGJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3197C0)
#define PPCHIBKDJGJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D3195A0)
#define PPCHIBKDJGJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D319200)
#define PPCHIBKDJGJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3193D0)
#define PPCHIBKDJGJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D319630)
#define PPCHIBKDJGJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D318F50)

	class PPCHIBKDJGJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PPCHIBKDJGJ")->GetStaticField(0x47440);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPCHIBKDJGJ")->GetStaticField(0x47448);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*>**)UnitySDK::FromName("", "PPCHIBKDJGJ")->GetStaticField(0x47450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPCHIBKDJGJ")->GetStaticField(0x10F90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPCHIBKDJGJ")->GetStaticField(0x10F91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*>*(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveReplyRow*>(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveReplyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveReplyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveReplyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveReplyRow*))((::PBYTE)hIl2Cpp + PPCHIBKDJGJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
