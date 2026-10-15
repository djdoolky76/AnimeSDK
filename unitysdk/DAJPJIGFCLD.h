#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerIceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DAJPJIGFCLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC9CC50)
#define DAJPJIGFCLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC9D1D0)
#define DAJPJIGFCLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC9CDC0)
#define DAJPJIGFCLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC9C740)
#define DAJPJIGFCLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC9C9D0)
#define DAJPJIGFCLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC9CE60)
#define DAJPJIGFCLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC9CEB0)
#define DAJPJIGFCLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC9CC90)
#define DAJPJIGFCLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC9C970)
#define DAJPJIGFCLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC9CB00)
#define DAJPJIGFCLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC9CD20)
#define DAJPJIGFCLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC9C6C0)

inline static constexpr unsigned int DAJPJIGFCLD_TypeDefinitionIndex = 13173;

	class DAJPJIGFCLD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*>**)UnitySDK::FromName("", "DAJPJIGFCLD")->GetStaticField(0x40B40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DAJPJIGFCLD")->GetStaticField(0x40B48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DAJPJIGFCLD")->GetStaticField(0x40B50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DAJPJIGFCLD")->GetStaticField(0xF670);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DAJPJIGFCLD")->GetStaticField(0xF671);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*>*(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerIceRow*>(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerIceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerIceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DAJPJIGFCLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAJPJIGFCLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DAJPJIGFCLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJPJIGFCLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DAJPJIGFCLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerIceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerIceRow*))((::PBYTE)hIl2Cpp + DAJPJIGFCLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
