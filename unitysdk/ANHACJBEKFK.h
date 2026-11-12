#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinConditionalItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANHACJBEKFK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE8D4C0)
#define ANHACJBEKFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E0A0)
#define ANHACJBEKFK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE8D860)
#define ANHACJBEKFK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE8D500)
#define ANHACJBEKFK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE8DDA0)
#define ANHACJBEKFK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE8D900)
#define ANHACJBEKFK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE8D950)
#define ANHACJBEKFK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE8D730)
#define ANHACJBEKFK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE8DD40)
#define ANHACJBEKFK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE8DF10)
#define ANHACJBEKFK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE8D7C0)
#define ANHACJBEKFK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE8DCC0)

inline static constexpr unsigned int ANHACJBEKFK_TypeDefinitionIndex = 15444;

	class ANHACJBEKFK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*>**)UnitySDK::FromName("", "ANHACJBEKFK")->GetStaticField(0x30A30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANHACJBEKFK")->GetStaticField(0x30A38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ANHACJBEKFK")->GetStaticField(0x30A40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANHACJBEKFK")->GetStaticField(0xA440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANHACJBEKFK")->GetStaticField(0xA441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANHACJBEKFK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANHACJBEKFK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANHACJBEKFK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextJoinConditionalItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextJoinConditionalItemRow*))((::PBYTE)hIl2Cpp + ANHACJBEKFK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*>*(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConditionalItemRow*>(*)())((::PBYTE)hIl2Cpp + ANHACJBEKFK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextJoinConditionalItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TextJoinConditionalItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANHACJBEKFK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
