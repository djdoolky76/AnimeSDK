#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhoneCaseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLLNGNNGEGC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0406F0)
#define GLLNGNNGEGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E040C70)
#define GLLNGNNGEGC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E040860)
#define GLLNGNNGEGC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0401A0)
#define GLLNGNNGEGC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E040430)
#define GLLNGNNGEGC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E040900)
#define GLLNGNNGEGC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E040950)
#define GLLNGNNGEGC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E040730)
#define GLLNGNNGEGC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0403D0)
#define GLLNGNNGEGC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0405A0)
#define GLLNGNNGEGC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0407C0)
#define GLLNGNNGEGC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E040120)

inline static constexpr unsigned int GLLNGNNGEGC_TypeDefinitionIndex = 14607;

	class GLLNGNNGEGC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLLNGNNGEGC")->GetStaticField(0x11600);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>**)UnitySDK::FromName("", "GLLNGNNGEGC")->GetStaticField(0x11608);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLLNGNNGEGC")->GetStaticField(0x11610);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLLNGNNGEGC")->GetStaticField(0x3950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLLNGNNGEGC")->GetStaticField(0x3951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhoneCaseConfigRow*>(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PhoneCaseConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PhoneCaseConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLLNGNNGEGC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLNGNNGEGC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLLNGNNGEGC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLLNGNNGEGC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLLNGNNGEGC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PhoneCaseConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhoneCaseConfigRow*))((::PBYTE)hIl2Cpp + GLLNGNNGEGC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
