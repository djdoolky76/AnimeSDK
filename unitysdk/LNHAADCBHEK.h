#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNHAADCBHEK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E417A20)
#define LNHAADCBHEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E418600)
#define LNHAADCBHEK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E417DC0)
#define LNHAADCBHEK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E417A60)
#define LNHAADCBHEK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E418300)
#define LNHAADCBHEK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E417E60)
#define LNHAADCBHEK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E417EB0)
#define LNHAADCBHEK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E417C90)
#define LNHAADCBHEK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4182A0)
#define LNHAADCBHEK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E418470)
#define LNHAADCBHEK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E417D20)
#define LNHAADCBHEK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E418220)

inline static constexpr unsigned int LNHAADCBHEK_TypeDefinitionIndex = 15426;

	class LNHAADCBHEK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>**)UnitySDK::FromName("", "LNHAADCBHEK")->GetStaticField(0x3D4D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNHAADCBHEK")->GetStaticField(0x3D4D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNHAADCBHEK")->GetStaticField(0x3D4E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNHAADCBHEK")->GetStaticField(0xC370);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNHAADCBHEK")->GetStaticField(0xC371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNHAADCBHEK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHAADCBHEK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNHAADCBHEK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotMailDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotMailDataRow*))((::PBYTE)hIl2Cpp + LNHAADCBHEK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>*(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotMailDataRow*>(*)())((::PBYTE)hIl2Cpp + LNHAADCBHEK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotMailDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotMailDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNHAADCBHEK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
