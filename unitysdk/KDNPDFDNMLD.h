#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NKNKALIOEGG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDNPDFDNMLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F40FC20)
#define KDNPDFDNMLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4101A0)
#define KDNPDFDNMLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F40FD90)
#define KDNPDFDNMLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F40F6D0)
#define KDNPDFDNMLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F40F960)
#define KDNPDFDNMLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F40FE30)
#define KDNPDFDNMLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F40FE80)
#define KDNPDFDNMLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F40FC60)
#define KDNPDFDNMLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F40F900)
#define KDNPDFDNMLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F40FA90)
#define KDNPDFDNMLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F40FCF0)
#define KDNPDFDNMLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F40F650)

inline static constexpr unsigned int KDNPDFDNMLD_TypeDefinitionIndex = 11611;

	class KDNPDFDNMLD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33580);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33588);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x9F50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x9F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>*(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::NKNKALIOEGG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NKNKALIOEGG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KDNPDFDNMLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNPDFDNMLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDNPDFDNMLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDNPDFDNMLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDNPDFDNMLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NKNKALIOEGG* a1)
		{
			return ((::System::Void(*)(::NKNKALIOEGG*))((::PBYTE)hIl2Cpp + KDNPDFDNMLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
