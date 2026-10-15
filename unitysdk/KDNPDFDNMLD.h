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

#define KDNPDFDNMLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0574A0)
#define KDNPDFDNMLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D057A20)
#define KDNPDFDNMLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D057610)
#define KDNPDFDNMLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D056F50)
#define KDNPDFDNMLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0571E0)
#define KDNPDFDNMLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0576B0)
#define KDNPDFDNMLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D057700)
#define KDNPDFDNMLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0574E0)
#define KDNPDFDNMLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D057180)
#define KDNPDFDNMLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D057310)
#define KDNPDFDNMLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D057570)
#define KDNPDFDNMLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D056ED0)

inline static constexpr unsigned int KDNPDFDNMLD_TypeDefinitionIndex = 11560;

	class KDNPDFDNMLD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKNKALIOEGG*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33EE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33EE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0x33EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0xA900);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDNPDFDNMLD")->GetStaticField(0xA901);
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
