#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ImgDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFIHCNLOGIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D12B780)
#define MFIHCNLOGIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12C360)
#define MFIHCNLOGIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D12BB20)
#define MFIHCNLOGIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D12B7C0)
#define MFIHCNLOGIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D12C060)
#define MFIHCNLOGIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D12BBC0)
#define MFIHCNLOGIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D12BC10)
#define MFIHCNLOGIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D12B9F0)
#define MFIHCNLOGIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D12C000)
#define MFIHCNLOGIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D12C1D0)
#define MFIHCNLOGIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D12BA80)
#define MFIHCNLOGIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D12BF80)

inline static constexpr unsigned int MFIHCNLOGIE_TypeDefinitionIndex = 15196;

	class MFIHCNLOGIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>**)UnitySDK::FromName("", "MFIHCNLOGIE")->GetStaticField(0x43760);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MFIHCNLOGIE")->GetStaticField(0x43768);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MFIHCNLOGIE")->GetStaticField(0x43770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MFIHCNLOGIE")->GetStaticField(0xFFF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MFIHCNLOGIE")->GetStaticField(0xFFF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MFIHCNLOGIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MFIHCNLOGIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MFIHCNLOGIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ImgDanmuContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ImgDanmuContentRow*))((::PBYTE)hIl2Cpp + MFIHCNLOGIE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + MFIHCNLOGIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ImgDanmuContentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ImgDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MFIHCNLOGIE_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
