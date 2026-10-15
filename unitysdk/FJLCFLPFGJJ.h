#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJLCFLPFGJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDCCA60)
#define FJLCFLPFGJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDCCFE0)
#define FJLCFLPFGJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDCCBD0)
#define FJLCFLPFGJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDCC510)
#define FJLCFLPFGJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDCC7A0)
#define FJLCFLPFGJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDCCC70)
#define FJLCFLPFGJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDCCCC0)
#define FJLCFLPFGJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDCCAA0)
#define FJLCFLPFGJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDCC740)
#define FJLCFLPFGJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDCC8D0)
#define FJLCFLPFGJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDCCB30)
#define FJLCFLPFGJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDCC490)

inline static constexpr unsigned int FJLCFLPFGJJ_TypeDefinitionIndex = 12833;

	class FJLCFLPFGJJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FJLCFLPFGJJ")->GetStaticField(0x122A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*>**)UnitySDK::FromName("", "FJLCFLPFGJJ")->GetStaticField(0x122A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FJLCFLPFGJJ")->GetStaticField(0x122B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FJLCFLPFGJJ")->GetStaticField(0x3BD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FJLCFLPFGJJ")->GetStaticField(0x3BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*>*(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleAreaRow*>(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleAreaRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleAreaRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleAreaRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + FJLCFLPFGJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
