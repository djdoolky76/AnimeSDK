#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageMonsterInvasionParamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFNOGACIKNN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2DEFB0)
#define PFNOGACIKNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2DFB90)
#define PFNOGACIKNN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2DF350)
#define PFNOGACIKNN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2DEFF0)
#define PFNOGACIKNN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2DF880)
#define PFNOGACIKNN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2DF3F0)
#define PFNOGACIKNN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2DF440)
#define PFNOGACIKNN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2DF220)
#define PFNOGACIKNN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2DF820)
#define PFNOGACIKNN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2DF9F0)
#define PFNOGACIKNN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2DF2B0)
#define PFNOGACIKNN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2DF7A0)

inline static constexpr unsigned int PFNOGACIKNN_TypeDefinitionIndex = 15168;

	class PFNOGACIKNN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFNOGACIKNN")->GetStaticField(0x3F6B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*>**)UnitySDK::FromName("", "PFNOGACIKNN")->GetStaticField(0x3F6B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFNOGACIKNN")->GetStaticField(0x3F6C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFNOGACIKNN")->GetStaticField(0xD860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFNOGACIKNN")->GetStaticField(0xD861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFNOGACIKNN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFNOGACIKNN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFNOGACIKNN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StageMonsterInvasionParamRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageMonsterInvasionParamRow*))((::PBYTE)hIl2Cpp + PFNOGACIKNN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*>*(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageMonsterInvasionParamRow*>(*)())((::PBYTE)hIl2Cpp + PFNOGACIKNN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StageMonsterInvasionParamRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::StageMonsterInvasionParamRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PFNOGACIKNN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
