#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VisitorBehaviorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OFMBCPLDPKK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D23C680)
#define OFMBCPLDPKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D23D250)
#define OFMBCPLDPKK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D23CA20)
#define OFMBCPLDPKK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D23C6C0)
#define OFMBCPLDPKK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D23CF50)
#define OFMBCPLDPKK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D23CAC0)
#define OFMBCPLDPKK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D23CB10)
#define OFMBCPLDPKK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D23C8F0)
#define OFMBCPLDPKK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D23CEF0)
#define OFMBCPLDPKK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D23D080)
#define OFMBCPLDPKK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D23C980)
#define OFMBCPLDPKK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D23CE70)

inline static constexpr unsigned int OFMBCPLDPKK_TypeDefinitionIndex = 15369;

	class OFMBCPLDPKK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OFMBCPLDPKK")->GetStaticField(0x45800);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*>**)UnitySDK::FromName("", "OFMBCPLDPKK")->GetStaticField(0x45808);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OFMBCPLDPKK")->GetStaticField(0x45810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OFMBCPLDPKK")->GetStaticField(0x10620);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OFMBCPLDPKK")->GetStaticField(0x10621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OFMBCPLDPKK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMBCPLDPKK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OFMBCPLDPKK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::VisitorBehaviorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::VisitorBehaviorConfigRow*))((::PBYTE)hIl2Cpp + OFMBCPLDPKK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::VisitorBehaviorConfigRow*>(*)())((::PBYTE)hIl2Cpp + OFMBCPLDPKK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::VisitorBehaviorConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::VisitorBehaviorConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OFMBCPLDPKK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
