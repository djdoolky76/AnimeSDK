#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSeriesSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ACBGKEGBCBL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE49610)
#define ACBGKEGBCBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE49BD0)
#define ACBGKEGBCBL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE49780)
#define ACBGKEGBCBL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE490B0)
#define ACBGKEGBCBL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE49340)
#define ACBGKEGBCBL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE49820)
#define ACBGKEGBCBL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE49870)
#define ACBGKEGBCBL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE49650)
#define ACBGKEGBCBL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE492E0)
#define ACBGKEGBCBL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE49470)
#define ACBGKEGBCBL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE496E0)
#define ACBGKEGBCBL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE49030)

inline static constexpr unsigned int ACBGKEGBCBL_TypeDefinitionIndex = 12844;

	class ACBGKEGBCBL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ACBGKEGBCBL")->GetStaticField(0x2B5C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ACBGKEGBCBL")->GetStaticField(0x2B5C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*>**)UnitySDK::FromName("", "ACBGKEGBCBL")->GetStaticField(0x2B5D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ACBGKEGBCBL")->GetStaticField(0x8EF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ACBGKEGBCBL")->GetStaticField(0x8EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*>*(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSeriesSkillRow*>(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSeriesSkillRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AvatarSeriesSkillRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ACBGKEGBCBL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACBGKEGBCBL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ACBGKEGBCBL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACBGKEGBCBL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ACBGKEGBCBL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarSeriesSkillRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSeriesSkillRow*))((::PBYTE)hIl2Cpp + ACBGKEGBCBL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
