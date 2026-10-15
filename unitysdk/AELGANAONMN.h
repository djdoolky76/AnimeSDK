#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BookSeriesWorldConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AELGANAONMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCB2CE0)
#define AELGANAONMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCB3260)
#define AELGANAONMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCB2E50)
#define AELGANAONMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCB2790)
#define AELGANAONMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCB2A20)
#define AELGANAONMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCB2EF0)
#define AELGANAONMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCB2F40)
#define AELGANAONMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCB2D20)
#define AELGANAONMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCB29C0)
#define AELGANAONMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCB2B90)
#define AELGANAONMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCB2DB0)
#define AELGANAONMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCB2710)

inline static constexpr unsigned int AELGANAONMN_TypeDefinitionIndex = 12904;

	class AELGANAONMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>**)UnitySDK::FromName("", "AELGANAONMN")->GetStaticField(0x374A0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AELGANAONMN")->GetStaticField(0x374A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AELGANAONMN")->GetStaticField(0x374B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AELGANAONMN")->GetStaticField(0xBBB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AELGANAONMN")->GetStaticField(0xBBB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookSeriesWorldConfigRow*>(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BookSeriesWorldConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BookSeriesWorldConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AELGANAONMN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AELGANAONMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AELGANAONMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AELGANAONMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AELGANAONMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BookSeriesWorldConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BookSeriesWorldConfigRow*))((::PBYTE)hIl2Cpp + AELGANAONMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
