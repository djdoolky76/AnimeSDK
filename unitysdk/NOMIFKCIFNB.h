#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInfiniteGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOMIFKCIFNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2141A0)
#define NOMIFKCIFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D214CF0)
#define NOMIFKCIFNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D214540)
#define NOMIFKCIFNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2141E0)
#define NOMIFKCIFNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D214A30)
#define NOMIFKCIFNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2145E0)
#define NOMIFKCIFNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D214630)
#define NOMIFKCIFNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D214410)
#define NOMIFKCIFNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2149D0)
#define NOMIFKCIFNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D214BA0)
#define NOMIFKCIFNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2144A0)
#define NOMIFKCIFNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D214950)

inline static constexpr unsigned int NOMIFKCIFNB_TypeDefinitionIndex = 15152;

	class NOMIFKCIFNB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NOMIFKCIFNB")->GetStaticField(0x42690);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NOMIFKCIFNB")->GetStaticField(0x42698);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*>**)UnitySDK::FromName("", "NOMIFKCIFNB")->GetStaticField(0x426A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NOMIFKCIFNB")->GetStaticField(0xFC40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NOMIFKCIFNB")->GetStaticField(0xFC41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NOMIFKCIFNB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOMIFKCIFNB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NOMIFKCIFNB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageInfiniteGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageInfiniteGroupRow*))((::PBYTE)hIl2Cpp + NOMIFKCIFNB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*>*(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInfiniteGroupRow*>(*)())((::PBYTE)hIl2Cpp + NOMIFKCIFNB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageInfiniteGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StageInfiniteGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NOMIFKCIFNB_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
