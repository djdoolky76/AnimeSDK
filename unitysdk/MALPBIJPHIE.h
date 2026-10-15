#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MALPBIJPHIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D131BA0)
#define MALPBIJPHIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1321A0)
#define MALPBIJPHIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D131D10)
#define MALPBIJPHIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1315D0)
#define MALPBIJPHIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D131860)
#define MALPBIJPHIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D131DB0)
#define MALPBIJPHIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D131E00)
#define MALPBIJPHIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D131BE0)
#define MALPBIJPHIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D131800)
#define MALPBIJPHIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1319D0)
#define MALPBIJPHIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D131C70)
#define MALPBIJPHIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D131550)

	class MALPBIJPHIE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x47110);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x47118);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x47120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x10EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x10EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILHardLevelGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ILHardLevelGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MALPBIJPHIE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MALPBIJPHIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILHardLevelGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILHardLevelGroupConfigRow*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
