#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LJOBINFCKKE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3025A0)
#define LJOBINFCKKE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E302B70)
#define LJOBINFCKKE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E302710)
#define LJOBINFCKKE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E302010)
#define LJOBINFCKKE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3022A0)
#define LJOBINFCKKE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3027B0)
#define LJOBINFCKKE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E302800)
#define LJOBINFCKKE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3025E0)
#define LJOBINFCKKE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E302240)
#define LJOBINFCKKE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E302410)
#define LJOBINFCKKE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E302670)
#define LJOBINFCKKE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E301F90)

inline static constexpr unsigned int LJOBINFCKKE_TypeDefinitionIndex = 13510;

	class LJOBINFCKKE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LJOBINFCKKE")->GetStaticField(0x35260);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LJOBINFCKKE")->GetStaticField(0x35268);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*>**)UnitySDK::FromName("", "LJOBINFCKKE")->GetStaticField(0x35270);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LJOBINFCKKE")->GetStaticField(0xB4F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LJOBINFCKKE")->GetStaticField(0xB4F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAssistantMessageConfigRow*>(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAssistantMessageConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightAssistantMessageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LJOBINFCKKE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJOBINFCKKE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LJOBINFCKKE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LJOBINFCKKE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LJOBINFCKKE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + LJOBINFCKKE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
