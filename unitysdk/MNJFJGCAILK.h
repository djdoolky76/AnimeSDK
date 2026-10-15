#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSelectEnhanceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNJFJGCAILK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1A9E90)
#define MNJFJGCAILK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AA460)
#define MNJFJGCAILK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1AA000)
#define MNJFJGCAILK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1A9900)
#define MNJFJGCAILK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1A9B90)
#define MNJFJGCAILK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1AA0A0)
#define MNJFJGCAILK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1AA0F0)
#define MNJFJGCAILK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1A9ED0)
#define MNJFJGCAILK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1A9B30)
#define MNJFJGCAILK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1A9D00)
#define MNJFJGCAILK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1A9F60)
#define MNJFJGCAILK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1A9880)

inline static constexpr unsigned int MNJFJGCAILK_TypeDefinitionIndex = 13696;

	class MNJFJGCAILK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNJFJGCAILK")->GetStaticField(0x3C740);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>**)UnitySDK::FromName("", "MNJFJGCAILK")->GetStaticField(0x3C748);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MNJFJGCAILK")->GetStaticField(0x3C750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNJFJGCAILK")->GetStaticField(0xC100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNJFJGCAILK")->GetStaticField(0xC101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>*(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSelectEnhanceRow*>(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSelectEnhanceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSelectEnhanceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNJFJGCAILK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNJFJGCAILK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNJFJGCAILK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNJFJGCAILK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNJFJGCAILK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSelectEnhanceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSelectEnhanceRow*))((::PBYTE)hIl2Cpp + MNJFJGCAILK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
