#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSummonBEOverrideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OABBJLKGKPP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D21AF40)
#define OABBJLKGKPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D21B540)
#define OABBJLKGKPP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D21B0B0)
#define OABBJLKGKPP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D21A970)
#define OABBJLKGKPP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D21AC00)
#define OABBJLKGKPP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D21B150)
#define OABBJLKGKPP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D21B1A0)
#define OABBJLKGKPP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D21AF80)
#define OABBJLKGKPP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D21ABA0)
#define OABBJLKGKPP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D21AD70)
#define OABBJLKGKPP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D21B010)
#define OABBJLKGKPP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D21A8F0)

inline static constexpr unsigned int OABBJLKGKPP_TypeDefinitionIndex = 13532;

	class OABBJLKGKPP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OABBJLKGKPP")->GetStaticField(0x42910);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*>**)UnitySDK::FromName("", "OABBJLKGKPP")->GetStaticField(0x42918);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OABBJLKGKPP")->GetStaticField(0x42920);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OABBJLKGKPP")->GetStaticField(0xFCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OABBJLKGKPP")->GetStaticField(0xFCE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSummonBEOverrideConfigRow*>(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSummonBEOverrideConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSummonBEOverrideConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OABBJLKGKPP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABBJLKGKPP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OABBJLKGKPP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OABBJLKGKPP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OABBJLKGKPP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSummonBEOverrideConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSummonBEOverrideConfigRow*))((::PBYTE)hIl2Cpp + OABBJLKGKPP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
