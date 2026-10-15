#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicWorkbenchFuncRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DELBICCOMGM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD13190)
#define DELBICCOMGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD13760)
#define DELBICCOMGM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD13300)
#define DELBICCOMGM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD12C00)
#define DELBICCOMGM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD12E90)
#define DELBICCOMGM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD133A0)
#define DELBICCOMGM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD133F0)
#define DELBICCOMGM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD131D0)
#define DELBICCOMGM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD12E30)
#define DELBICCOMGM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD13000)
#define DELBICCOMGM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD13260)
#define DELBICCOMGM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD12B80)

inline static constexpr unsigned int DELBICCOMGM_TypeDefinitionIndex = 14873;

	class DELBICCOMGM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*>**)UnitySDK::FromName("", "DELBICCOMGM")->GetStaticField(0x4B9E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DELBICCOMGM")->GetStaticField(0x4B9E8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DELBICCOMGM")->GetStaticField(0x4B9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DELBICCOMGM")->GetStaticField(0x11830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DELBICCOMGM")->GetStaticField(0x11831);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*>*(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchFuncRow*>(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicWorkbenchFuncRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicWorkbenchFuncRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DELBICCOMGM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DELBICCOMGM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DELBICCOMGM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DELBICCOMGM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DELBICCOMGM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicWorkbenchFuncRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicWorkbenchFuncRow*))((::PBYTE)hIl2Cpp + DELBICCOMGM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
