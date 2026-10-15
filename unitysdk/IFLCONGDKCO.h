#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingSpecialTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFLCONGDKCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEF3AF0)
#define IFLCONGDKCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEF40C0)
#define IFLCONGDKCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEF3C60)
#define IFLCONGDKCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEF3560)
#define IFLCONGDKCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEF37F0)
#define IFLCONGDKCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEF3D00)
#define IFLCONGDKCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEF3D50)
#define IFLCONGDKCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEF3B30)
#define IFLCONGDKCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEF3790)
#define IFLCONGDKCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEF3960)
#define IFLCONGDKCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEF3BC0)
#define IFLCONGDKCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEF34E0)

inline static constexpr unsigned int IFLCONGDKCO_TypeDefinitionIndex = 13992;

	class IFLCONGDKCO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IFLCONGDKCO")->GetStaticField(0x21E80);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IFLCONGDKCO")->GetStaticField(0x21E88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*>**)UnitySDK::FromName("", "IFLCONGDKCO")->GetStaticField(0x21E90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFLCONGDKCO")->GetStaticField(0x79E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IFLCONGDKCO")->GetStaticField(0x79E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingSpecialTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::LoadingSpecialTypeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoadingSpecialTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IFLCONGDKCO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFLCONGDKCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFLCONGDKCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFLCONGDKCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IFLCONGDKCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::LoadingSpecialTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingSpecialTypeConfigRow*))((::PBYTE)hIl2Cpp + IFLCONGDKCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
