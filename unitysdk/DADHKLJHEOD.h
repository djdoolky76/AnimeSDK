#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DADHKLJHEOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC6AD0)
#define DADHKLJHEOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC75E0)
#define DADHKLJHEOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC6E70)
#define DADHKLJHEOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC6B10)
#define DADHKLJHEOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC7360)
#define DADHKLJHEOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC6F10)
#define DADHKLJHEOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC6F60)
#define DADHKLJHEOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC6D40)
#define DADHKLJHEOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC7300)
#define DADHKLJHEOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC7490)
#define DADHKLJHEOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC6DD0)
#define DADHKLJHEOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC7280)

	class DADHKLJHEOD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x466C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x466C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x466D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x10CB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x10CB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DADHKLJHEOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextJoinConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TextJoinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DADHKLJHEOD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
