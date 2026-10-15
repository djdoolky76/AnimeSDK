#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MIFEMBBHLPB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCIAPEKMBBJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDD36E0)
#define FCIAPEKMBBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDD3C60)
#define FCIAPEKMBBJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDD3850)
#define FCIAPEKMBBJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDD31D0)
#define FCIAPEKMBBJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDD3460)
#define FCIAPEKMBBJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDD38F0)
#define FCIAPEKMBBJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDD3940)
#define FCIAPEKMBBJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDD3720)
#define FCIAPEKMBBJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDD3400)
#define FCIAPEKMBBJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDD3590)
#define FCIAPEKMBBJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDD37B0)
#define FCIAPEKMBBJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDD3150)

inline static constexpr unsigned int FCIAPEKMBBJ_TypeDefinitionIndex = 13910;

	class FCIAPEKMBBJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FCIAPEKMBBJ")->GetStaticField(0xFFB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FCIAPEKMBBJ")->GetStaticField(0xFFB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*>**)UnitySDK::FromName("", "FCIAPEKMBBJ")->GetStaticField(0xFFC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FCIAPEKMBBJ")->GetStaticField(0x3620);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FCIAPEKMBBJ")->GetStaticField(0x3621);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*>*(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MIFEMBBHLPB*>(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::MIFEMBBHLPB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MIFEMBBHLPB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MIFEMBBHLPB* a1)
		{
			return ((::System::Void(*)(::MIFEMBBHLPB*))((::PBYTE)hIl2Cpp + FCIAPEKMBBJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
