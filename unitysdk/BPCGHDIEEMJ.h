#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBuildConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPCGHDIEEMJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9F80B0)
#define BPCGHDIEEMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9F8D00)
#define BPCGHDIEEMJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9F8450)
#define BPCGHDIEEMJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9F80F0)
#define BPCGHDIEEMJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9F89C0)
#define BPCGHDIEEMJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9F84F0)
#define BPCGHDIEEMJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9F8540)
#define BPCGHDIEEMJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9F8320)
#define BPCGHDIEEMJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9F8960)
#define BPCGHDIEEMJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9F8B30)
#define BPCGHDIEEMJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9F83B0)
#define BPCGHDIEEMJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9F88E0)

inline static constexpr unsigned int BPCGHDIEEMJ_TypeDefinitionIndex = 15275;

	class BPCGHDIEEMJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>**)UnitySDK::FromName("", "BPCGHDIEEMJ")->GetStaticField(0x39DC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BPCGHDIEEMJ")->GetStaticField(0x39DC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BPCGHDIEEMJ")->GetStaticField(0x39DD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BPCGHDIEEMJ")->GetStaticField(0xC550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BPCGHDIEEMJ")->GetStaticField(0xC551);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TeamBuildConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>(*)())((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TeamBuildConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TeamBuildConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BPCGHDIEEMJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
