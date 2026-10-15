#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIGIGHKEMHP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C9F40)
#define LIGIGHKEMHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CA510)
#define LIGIGHKEMHP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0CA0B0)
#define LIGIGHKEMHP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C99B0)
#define LIGIGHKEMHP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C9C40)
#define LIGIGHKEMHP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0CA150)
#define LIGIGHKEMHP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0CA1A0)
#define LIGIGHKEMHP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C9F80)
#define LIGIGHKEMHP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C9BE0)
#define LIGIGHKEMHP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C9DB0)
#define LIGIGHKEMHP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0CA010)
#define LIGIGHKEMHP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C9930)

inline static constexpr unsigned int LIGIGHKEMHP_TypeDefinitionIndex = 11706;

	class LIGIGHKEMHP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*>**)UnitySDK::FromName("", "LIGIGHKEMHP")->GetStaticField(0x3BB10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIGIGHKEMHP")->GetStaticField(0x3BB18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LIGIGHKEMHP")->GetStaticField(0x3BB20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIGIGHKEMHP")->GetStaticField(0xBFC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIGIGHKEMHP")->GetStaticField(0xBFC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*>*(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventRow*>(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LIGIGHKEMHP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIGIGHKEMHP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIGIGHKEMHP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIGIGHKEMHP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIGIGHKEMHP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEventRow*))((::PBYTE)hIl2Cpp + LIGIGHKEMHP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
