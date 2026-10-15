#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkRoundOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNGHNIGHJLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0513F0)
#define JNGHNIGHJLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D051970)
#define JNGHNIGHJLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D051560)
#define JNGHNIGHJLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D050EA0)
#define JNGHNIGHJLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D051130)
#define JNGHNIGHJLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D051600)
#define JNGHNIGHJLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D051650)
#define JNGHNIGHJLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D051430)
#define JNGHNIGHJLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0510D0)
#define JNGHNIGHJLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0512A0)
#define JNGHNIGHJLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0514C0)
#define JNGHNIGHJLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D050E20)

inline static constexpr unsigned int JNGHNIGHJLL_TypeDefinitionIndex = 13026;

	class JNGHNIGHJLL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JNGHNIGHJLL")->GetStaticField(0x2FC40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNGHNIGHJLL")->GetStaticField(0x2FC48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*>**)UnitySDK::FromName("", "JNGHNIGHJLL")->GetStaticField(0x2FC50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNGHNIGHJLL")->GetStaticField(0xA190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNGHNIGHJLL")->GetStaticField(0xA191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*>*(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundOptionRow*>(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraWorkRoundOptionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraWorkRoundOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNGHNIGHJLL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNGHNIGHJLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNGHNIGHJLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNGHNIGHJLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNGHNIGHJLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraWorkRoundOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraWorkRoundOptionRow*))((::PBYTE)hIl2Cpp + JNGHNIGHJLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
