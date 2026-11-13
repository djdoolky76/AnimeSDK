#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentExpiredConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFGJBPCHEID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E59BE50)
#define JFGJBPCHEID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59C420)
#define JFGJBPCHEID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E59BFC0)
#define JFGJBPCHEID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E59B8C0)
#define JFGJBPCHEID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E59BB50)
#define JFGJBPCHEID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E59C060)
#define JFGJBPCHEID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E59C0B0)
#define JFGJBPCHEID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E59BE90)
#define JFGJBPCHEID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E59BAF0)
#define JFGJBPCHEID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E59BCC0)
#define JFGJBPCHEID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E59BF20)
#define JFGJBPCHEID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E59B840)

inline static constexpr unsigned int JFGJBPCHEID_TypeDefinitionIndex = 13482;

	class JFGJBPCHEID : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*>**)UnitySDK::FromName("", "JFGJBPCHEID")->GetStaticField(0x34010);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JFGJBPCHEID")->GetStaticField(0x34018);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JFGJBPCHEID")->GetStaticField(0x34020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFGJBPCHEID")->GetStaticField(0xA160);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JFGJBPCHEID")->GetStaticField(0xA161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAugmentExpiredConfigRow*>(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAugmentExpiredConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightAugmentExpiredConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JFGJBPCHEID_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGJBPCHEID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JFGJBPCHEID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFGJBPCHEID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JFGJBPCHEID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAugmentExpiredConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAugmentExpiredConfigRow*))((::PBYTE)hIl2Cpp + JFGJBPCHEID_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
