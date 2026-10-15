#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGameRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHPJAHFEAGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0059F0)
#define JHPJAHFEAGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D005FC0)
#define JHPJAHFEAGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D005B60)
#define JHPJAHFEAGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D005460)
#define JHPJAHFEAGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0056F0)
#define JHPJAHFEAGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D005C00)
#define JHPJAHFEAGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D005C50)
#define JHPJAHFEAGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D005A30)
#define JHPJAHFEAGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D005690)
#define JHPJAHFEAGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D005860)
#define JHPJAHFEAGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D005AC0)
#define JHPJAHFEAGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0053E0)

inline static constexpr unsigned int JHPJAHFEAGM_TypeDefinitionIndex = 11642;

	class JHPJAHFEAGM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*>**)UnitySDK::FromName("", "JHPJAHFEAGM")->GetStaticField(0x2E7E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHPJAHFEAGM")->GetStaticField(0x2E7E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHPJAHFEAGM")->GetStaticField(0x2E7F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHPJAHFEAGM")->GetStaticField(0x9A10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHPJAHFEAGM")->GetStaticField(0x9A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*>*(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenGameRow*>(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenGameRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHipplenGameRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHPJAHFEAGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHPJAHFEAGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHPJAHFEAGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHPJAHFEAGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHPJAHFEAGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenGameRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenGameRow*))((::PBYTE)hIl2Cpp + JHPJAHFEAGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
