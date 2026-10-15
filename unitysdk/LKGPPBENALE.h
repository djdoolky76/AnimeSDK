#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageSpecialChangeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKGPPBENALE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D109600)
#define LKGPPBENALE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D109B80)
#define LKGPPBENALE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D109770)
#define LKGPPBENALE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1090F0)
#define LKGPPBENALE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D109380)
#define LKGPPBENALE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D109810)
#define LKGPPBENALE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D109860)
#define LKGPPBENALE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D109640)
#define LKGPPBENALE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D109320)
#define LKGPPBENALE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1094B0)
#define LKGPPBENALE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1096D0)
#define LKGPPBENALE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D109070)

inline static constexpr unsigned int LKGPPBENALE_TypeDefinitionIndex = 14480;

	class LKGPPBENALE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*>**)UnitySDK::FromName("", "LKGPPBENALE")->GetStaticField(0x40280);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LKGPPBENALE")->GetStaticField(0x40288);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LKGPPBENALE")->GetStaticField(0x40290);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LKGPPBENALE")->GetStaticField(0xDB10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKGPPBENALE")->GetStaticField(0xDB11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*>*(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSpecialChangeRow*>(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MessageSpecialChangeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageSpecialChangeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKGPPBENALE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGPPBENALE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKGPPBENALE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGPPBENALE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LKGPPBENALE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MessageSpecialChangeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageSpecialChangeRow*))((::PBYTE)hIl2Cpp + LKGPPBENALE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
