#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DINBKLGGOCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD28FA0)
#define DINBKLGGOCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD29850)
#define DINBKLGGOCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD29110)
#define DINBKLGGOCJ_ENCPFJNBFCF_OFFSET UNITYSDK_OFFSET(0x1CD28A40)
#define DINBKLGGOCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD284B0)
#define DINBKLGGOCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD28740)
#define DINBKLGGOCJ_GGLBNODPAPA_OFFSET UNITYSDK_OFFSET(0x1CD29570)
#define DINBKLGGOCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD291B0)
#define DINBKLGGOCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD29200)
#define DINBKLGGOCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD28FE0)
#define DINBKLGGOCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD286E0)
#define DINBKLGGOCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD288B0)
#define DINBKLGGOCJ_NPJGDNPHGED_OFFSET UNITYSDK_OFFSET(0x1CD28CE0)
#define DINBKLGGOCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD29070)
#define DINBKLGGOCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD28430)

inline static constexpr unsigned int DINBKLGGOCJ_TypeDefinitionIndex = 13501;

	class DINBKLGGOCJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet_KCBABMNNGHD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x4D730);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x4D738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*>**)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x4D740);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x4D748);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x11CC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DINBKLGGOCJ")->GetStaticField(0x11CC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightRoleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightRoleConfigRow*>* ENCPFJNBFCF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightRoleConfigRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_ENCPFJNBFCF_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightRoleConfigRow*>* NPJGDNPHGED(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightRoleConfigRow*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_NPJGDNPHGED_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DINBKLGGOCJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::UInt32 GGLBNODPAPA(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + DINBKLGGOCJ_GGLBNODPAPA_OFFSET))(a1, a2);
		}

	};
