#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotExtraItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIEGKBFEODL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF5AD50)
#define EIEGKBFEODL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5B320)
#define EIEGKBFEODL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF5AEC0)
#define EIEGKBFEODL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF5A7C0)
#define EIEGKBFEODL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF5AA50)
#define EIEGKBFEODL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF5AF60)
#define EIEGKBFEODL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF5AFB0)
#define EIEGKBFEODL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF5AD90)
#define EIEGKBFEODL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF5A9F0)
#define EIEGKBFEODL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF5ABC0)
#define EIEGKBFEODL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF5AE20)
#define EIEGKBFEODL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF5A740)

inline static constexpr unsigned int EIEGKBFEODL_TypeDefinitionIndex = 11737;

	class EIEGKBFEODL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIEGKBFEODL")->GetStaticField(0x37E30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*>**)UnitySDK::FromName("", "EIEGKBFEODL")->GetStaticField(0x37E38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EIEGKBFEODL")->GetStaticField(0x37E40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIEGKBFEODL")->GetStaticField(0xC1A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIEGKBFEODL")->GetStaticField(0xC1A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*>*(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotExtraItemRow*>(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHotExtraItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHotExtraItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EIEGKBFEODL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEGKBFEODL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIEGKBFEODL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIEGKBFEODL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIEGKBFEODL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHotExtraItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHotExtraItemRow*))((::PBYTE)hIl2Cpp + EIEGKBFEODL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
