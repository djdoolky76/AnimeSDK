#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOIFCABNBMH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9F11C0)
#define BOIFCABNBMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F1740)
#define BOIFCABNBMH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9F1330)
#define BOIFCABNBMH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9F0CB0)
#define BOIFCABNBMH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9F0F40)
#define BOIFCABNBMH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9F13D0)
#define BOIFCABNBMH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9F1420)
#define BOIFCABNBMH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9F1200)
#define BOIFCABNBMH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9F0EE0)
#define BOIFCABNBMH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9F1070)
#define BOIFCABNBMH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9F1290)
#define BOIFCABNBMH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9F0C30)

inline static constexpr unsigned int BOIFCABNBMH_TypeDefinitionIndex = 13018;

	class BOIFCABNBMH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>**)UnitySDK::FromName("", "BOIFCABNBMH")->GetStaticField(0x39130);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOIFCABNBMH")->GetStaticField(0x39138);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BOIFCABNBMH")->GetStaticField(0x39140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOIFCABNBMH")->GetStaticField(0xC310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOIFCABNBMH")->GetStaticField(0xC311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>*(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOIFCABNBMH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOIFCABNBMH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOIFCABNBMH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOIFCABNBMH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOIFCABNBMH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDataRow*))((::PBYTE)hIl2Cpp + BOIFCABNBMH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
