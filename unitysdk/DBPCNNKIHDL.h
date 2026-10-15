#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleFailureTipsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBPCNNKIHDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCA38A0)
#define DBPCNNKIHDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCA3E20)
#define DBPCNNKIHDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCA3A10)
#define DBPCNNKIHDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCA3350)
#define DBPCNNKIHDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCA35E0)
#define DBPCNNKIHDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCA3AB0)
#define DBPCNNKIHDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCA3B00)
#define DBPCNNKIHDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCA38E0)
#define DBPCNNKIHDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCA3580)
#define DBPCNNKIHDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCA3710)
#define DBPCNNKIHDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCA3970)
#define DBPCNNKIHDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCA32D0)

inline static constexpr unsigned int DBPCNNKIHDL_TypeDefinitionIndex = 12866;

	class DBPCNNKIHDL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DBPCNNKIHDL")->GetStaticField(0x410C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DBPCNNKIHDL")->GetStaticField(0x410C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>**)UnitySDK::FromName("", "DBPCNNKIHDL")->GetStaticField(0x410D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DBPCNNKIHDL")->GetStaticField(0xF800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DBPCNNKIHDL")->GetStaticField(0xF801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleFailureTipsConfigRow*>(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BattleFailureTipsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattleFailureTipsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DBPCNNKIHDL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBPCNNKIHDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DBPCNNKIHDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBPCNNKIHDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DBPCNNKIHDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BattleFailureTipsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BattleFailureTipsConfigRow*))((::PBYTE)hIl2Cpp + DBPCNNKIHDL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
