#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakePerformanceConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNIBEGNGNJB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D30F230)
#define PNIBEGNGNJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D30F7B0)
#define PNIBEGNGNJB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D30F3A0)
#define PNIBEGNGNJB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D30ECE0)
#define PNIBEGNGNJB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D30EF70)
#define PNIBEGNGNJB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D30F440)
#define PNIBEGNGNJB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D30F490)
#define PNIBEGNGNJB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D30F270)
#define PNIBEGNGNJB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D30EF10)
#define PNIBEGNGNJB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D30F0A0)
#define PNIBEGNGNJB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D30F300)
#define PNIBEGNGNJB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D30EC60)

inline static constexpr unsigned int PNIBEGNGNJB_TypeDefinitionIndex = 12931;

	class PNIBEGNGNJB : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PNIBEGNGNJB")->GetStaticField(0x46810);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNIBEGNGNJB")->GetStaticField(0x46818);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>**)UnitySDK::FromName("", "PNIBEGNGNJB")->GetStaticField(0x46820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNIBEGNGNJB")->GetStaticField(0x10CF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNIBEGNGNJB")->GetStaticField(0x10CF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakePerformanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakePerformanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakePerformanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNIBEGNGNJB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNIBEGNGNJB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNIBEGNGNJB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNIBEGNGNJB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNIBEGNGNJB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakePerformanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakePerformanceConfigRow*))((::PBYTE)hIl2Cpp + PNIBEGNGNJB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
