#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActivityResidentConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace ZLinq { class ValueEnumerable; }

#define JNHHOOFNCEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D052580)
#define JNHHOOFNCEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D052B00)
#define JNHHOOFNCEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0526F0)
#define JNHHOOFNCEE_EHAFELPCLKB_OFFSET UNITYSDK_OFFSET(0x1D052390)
#define JNHHOOFNCEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D051FD0)
#define JNHHOOFNCEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D052260)
#define JNHHOOFNCEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D052790)
#define JNHHOOFNCEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0527E0)
#define JNHHOOFNCEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0525C0)
#define JNHHOOFNCEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D052200)
#define JNHHOOFNCEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0523F0)
#define JNHHOOFNCEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D052650)
#define JNHHOOFNCEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D051F50)

inline static constexpr unsigned int JNHHOOFNCEE_TypeDefinitionIndex = 13438;

	class JNHHOOFNCEE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>**)UnitySDK::FromName("", "JNHHOOFNCEE")->GetStaticField(0x2FE10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JNHHOOFNCEE")->GetStaticField(0x2FE18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNHHOOFNCEE")->GetStaticField(0x2FE20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNHHOOFNCEE")->GetStaticField(0xA1E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNHHOOFNCEE")->GetStaticField(0xA1E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable* EHAFELPCLKB()
		{
			return ((::ZLinq::ValueEnumerable*(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_EHAFELPCLKB_OFFSET))();
		}

		static ::RPG::GameCore::GridFightActivityResidentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNHHOOFNCEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNHHOOFNCEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNHHOOFNCEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNHHOOFNCEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNHHOOFNCEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightActivityResidentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + JNHHOOFNCEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
