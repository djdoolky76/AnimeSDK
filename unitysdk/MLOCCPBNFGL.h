#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MLOCCPBNFGL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1CDC30)
#define MLOCCPBNFGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1CE1B0)
#define MLOCCPBNFGL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1CDDA0)
#define MLOCCPBNFGL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1CD6E0)
#define MLOCCPBNFGL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1CD970)
#define MLOCCPBNFGL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1CDE40)
#define MLOCCPBNFGL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1CDE90)
#define MLOCCPBNFGL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1CDC70)
#define MLOCCPBNFGL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1CD910)
#define MLOCCPBNFGL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1CDAA0)
#define MLOCCPBNFGL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1CDD00)
#define MLOCCPBNFGL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1CD660)

	class MLOCCPBNFGL : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MLOCCPBNFGL")->GetStaticField(0x2A8E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MLOCCPBNFGL")->GetStaticField(0x2A8E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>**)UnitySDK::FromName("", "MLOCCPBNFGL")->GetStaticField(0x2A8F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MLOCCPBNFGL")->GetStaticField(0x8520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MLOCCPBNFGL")->GetStaticField(0x8521);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::LoadingFuncConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LoadingFuncConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MLOCCPBNFGL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLOCCPBNFGL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MLOCCPBNFGL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MLOCCPBNFGL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MLOCCPBNFGL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::LoadingFuncConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + MLOCCPBNFGL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
