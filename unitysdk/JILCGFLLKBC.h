#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JILCGFLLKBC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D007910)
#define JILCGFLLKBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D008460)
#define JILCGFLLKBC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D007CB0)
#define JILCGFLLKBC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D007950)
#define JILCGFLLKBC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0081A0)
#define JILCGFLLKBC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D007D50)
#define JILCGFLLKBC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D007DA0)
#define JILCGFLLKBC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D007B80)
#define JILCGFLLKBC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D008140)
#define JILCGFLLKBC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0082D0)
#define JILCGFLLKBC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D007C10)
#define JILCGFLLKBC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0080C0)

inline static constexpr unsigned int JILCGFLLKBC_TypeDefinitionIndex = 15203;

	class JILCGFLLKBC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JILCGFLLKBC")->GetStaticField(0x2E940);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*>**)UnitySDK::FromName("", "JILCGFLLKBC")->GetStaticField(0x2E948);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JILCGFLLKBC")->GetStaticField(0x2E950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JILCGFLLKBC")->GetStaticField(0x9A30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JILCGFLLKBC")->GetStaticField(0x9A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JILCGFLLKBC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JILCGFLLKBC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JILCGFLLKBC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StoryLineConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryLineConfigRow*))((::PBYTE)hIl2Cpp + JILCGFLLKBC_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineConfigRow*>(*)())((::PBYTE)hIl2Cpp + JILCGFLLKBC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StoryLineConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StoryLineConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JILCGFLLKBC_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
