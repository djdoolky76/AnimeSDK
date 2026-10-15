#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MenuItemNameRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKGIKKKCJDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD35E10)
#define DKGIKKKCJDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD363E0)
#define DKGIKKKCJDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD35F80)
#define DKGIKKKCJDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD35880)
#define DKGIKKKCJDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD35B10)
#define DKGIKKKCJDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD36020)
#define DKGIKKKCJDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD36070)
#define DKGIKKKCJDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD35E50)
#define DKGIKKKCJDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD35AB0)
#define DKGIKKKCJDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD35C80)
#define DKGIKKKCJDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD35EE0)
#define DKGIKKKCJDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD35800)

inline static constexpr unsigned int DKGIKKKCJDF_TypeDefinitionIndex = 13133;

	class DKGIKKKCJDF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DKGIKKKCJDF")->GetStaticField(0x4E020);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKGIKKKCJDF")->GetStaticField(0x4E028);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>**)UnitySDK::FromName("", "DKGIKKKCJDF")->GetStaticField(0x4E030);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKGIKKKCJDF")->GetStaticField(0x11F20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKGIKKKCJDF")->GetStaticField(0x11F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>*(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MenuItemNameRow*>(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MenuItemNameRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MenuItemNameRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DKGIKKKCJDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKGIKKKCJDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKGIKKKCJDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKGIKKKCJDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKGIKKKCJDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MenuItemNameRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MenuItemNameRow*))((::PBYTE)hIl2Cpp + DKGIKKKCJDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
