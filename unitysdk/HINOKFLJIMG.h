#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTreasuryInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HINOKFLJIMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E827040)
#define HINOKFLJIMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E827610)
#define HINOKFLJIMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E8271B0)
#define HINOKFLJIMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E826AB0)
#define HINOKFLJIMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E826D40)
#define HINOKFLJIMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E827250)
#define HINOKFLJIMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E8272A0)
#define HINOKFLJIMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E827080)
#define HINOKFLJIMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E826CE0)
#define HINOKFLJIMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E826EB0)
#define HINOKFLJIMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E827110)
#define HINOKFLJIMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E826A30)

inline static constexpr unsigned int HINOKFLJIMG_TypeDefinitionIndex = 13502;

	class HINOKFLJIMG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HINOKFLJIMG")->GetStaticField(0x17B00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HINOKFLJIMG")->GetStaticField(0x17B08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*>**)UnitySDK::FromName("", "HINOKFLJIMG")->GetStaticField(0x17B10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HINOKFLJIMG")->GetStaticField(0x5550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HINOKFLJIMG")->GetStaticField(0x5551);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTreasuryInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTreasuryInfoConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTreasuryInfoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HINOKFLJIMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINOKFLJIMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HINOKFLJIMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HINOKFLJIMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HINOKFLJIMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTreasuryInfoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTreasuryInfoConfigRow*))((::PBYTE)hIl2Cpp + HINOKFLJIMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
