#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChatBubbleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JHJPKHLOOHB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E21D210)
#define JHJPKHLOOHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21D7E0)
#define JHJPKHLOOHB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E21D380)
#define JHJPKHLOOHB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E21CC80)
#define JHJPKHLOOHB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E21CF10)
#define JHJPKHLOOHB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E21D420)
#define JHJPKHLOOHB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E21D470)
#define JHJPKHLOOHB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E21D250)
#define JHJPKHLOOHB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E21CEB0)
#define JHJPKHLOOHB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E21D080)
#define JHJPKHLOOHB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E21D2E0)
#define JHJPKHLOOHB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E21CC00)

inline static constexpr unsigned int JHJPKHLOOHB_TypeDefinitionIndex = 13071;

	class JHJPKHLOOHB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JHJPKHLOOHB")->GetStaticField(0x2DA80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JHJPKHLOOHB")->GetStaticField(0x2DA88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>**)UnitySDK::FromName("", "JHJPKHLOOHB")->GetStaticField(0x2DA90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JHJPKHLOOHB")->GetStaticField(0x9890);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JHJPKHLOOHB")->GetStaticField(0x9891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>*(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChatBubbleRow*>(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChatBubbleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChatBubbleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JHJPKHLOOHB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHJPKHLOOHB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JHJPKHLOOHB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JHJPKHLOOHB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JHJPKHLOOHB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChatBubbleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChatBubbleRow*))((::PBYTE)hIl2Cpp + JHJPKHLOOHB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
