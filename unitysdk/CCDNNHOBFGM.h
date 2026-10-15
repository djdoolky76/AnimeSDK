#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountEquipmentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCDNNHOBFGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA0ABE0)
#define CCDNNHOBFGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA0B1B0)
#define CCDNNHOBFGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA0AD50)
#define CCDNNHOBFGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA0A650)
#define CCDNNHOBFGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA0A8E0)
#define CCDNNHOBFGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA0ADF0)
#define CCDNNHOBFGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA0AE40)
#define CCDNNHOBFGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA0AC20)
#define CCDNNHOBFGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA0A880)
#define CCDNNHOBFGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA0AA50)
#define CCDNNHOBFGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA0ACB0)
#define CCDNNHOBFGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA0A5D0)

	class CCDNNHOBFGM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CCDNNHOBFGM")->GetStaticField(0x3B8D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CCDNNHOBFGM")->GetStaticField(0x3B8D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>**)UnitySDK::FromName("", "CCDNNHOBFGM")->GetStaticField(0x3B8E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CCDNNHOBFGM")->GetStaticField(0xCAA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CCDNNHOBFGM")->GetStaticField(0xCAA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountEquipmentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GMAccountEquipmentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GMAccountEquipmentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CCDNNHOBFGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCDNNHOBFGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CCDNNHOBFGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CCDNNHOBFGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CCDNNHOBFGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GMAccountEquipmentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GMAccountEquipmentConfigRow*))((::PBYTE)hIl2Cpp + CCDNNHOBFGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
