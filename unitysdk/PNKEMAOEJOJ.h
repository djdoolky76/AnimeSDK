#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentRemarkConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNKEMAOEJOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D310F00)
#define PNKEMAOEJOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3114D0)
#define PNKEMAOEJOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D311070)
#define PNKEMAOEJOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D310970)
#define PNKEMAOEJOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D310C00)
#define PNKEMAOEJOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D311110)
#define PNKEMAOEJOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D311160)
#define PNKEMAOEJOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D310F40)
#define PNKEMAOEJOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D310BA0)
#define PNKEMAOEJOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D310D70)
#define PNKEMAOEJOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D310FD0)
#define PNKEMAOEJOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D3108F0)

	class PNKEMAOEJOJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*>**)UnitySDK::FromName("", "PNKEMAOEJOJ")->GetStaticField(0x46A30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNKEMAOEJOJ")->GetStaticField(0x46A38);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PNKEMAOEJOJ")->GetStaticField(0x46A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNKEMAOEJOJ")->GetStaticField(0x10D60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNKEMAOEJOJ")->GetStaticField(0x10D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentRemarkConfigRow*>(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAugmentRemarkConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightAugmentRemarkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAugmentRemarkConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentRemarkConfigRow*))((::PBYTE)hIl2Cpp + PNKEMAOEJOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
