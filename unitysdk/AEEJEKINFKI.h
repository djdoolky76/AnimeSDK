#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerOutfitBaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEEJEKINFKI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC82EE0)
#define AEEJEKINFKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC83460)
#define AEEJEKINFKI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC83050)
#define AEEJEKINFKI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC82990)
#define AEEJEKINFKI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC82C20)
#define AEEJEKINFKI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC830F0)
#define AEEJEKINFKI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC83140)
#define AEEJEKINFKI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC82F20)
#define AEEJEKINFKI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC82BC0)
#define AEEJEKINFKI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC82D50)
#define AEEJEKINFKI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC82FB0)
#define AEEJEKINFKI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC82910)

inline static constexpr unsigned int AEEJEKINFKI_TypeDefinitionIndex = 14510;

	class AEEJEKINFKI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AEEJEKINFKI")->GetStaticField(0x3E200);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>**)UnitySDK::FromName("", "AEEJEKINFKI")->GetStaticField(0x3E208);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AEEJEKINFKI")->GetStaticField(0x3E210);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AEEJEKINFKI")->GetStaticField(0xEA80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AEEJEKINFKI")->GetStaticField(0xEA81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>*(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerOutfitBaseRow*>(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerOutfitBaseRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerOutfitBaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AEEJEKINFKI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEEJEKINFKI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AEEJEKINFKI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEEJEKINFKI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AEEJEKINFKI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerOutfitBaseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerOutfitBaseRow*))((::PBYTE)hIl2Cpp + AEEJEKINFKI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
