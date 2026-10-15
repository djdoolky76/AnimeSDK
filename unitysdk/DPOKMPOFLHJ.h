#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamAnchorRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPOKMPOFLHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5A930)
#define DPOKMPOFLHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5AF00)
#define DPOKMPOFLHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5AAA0)
#define DPOKMPOFLHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5A3A0)
#define DPOKMPOFLHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5A630)
#define DPOKMPOFLHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5AB40)
#define DPOKMPOFLHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5AB90)
#define DPOKMPOFLHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5A970)
#define DPOKMPOFLHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5A5D0)
#define DPOKMPOFLHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5A7A0)
#define DPOKMPOFLHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5AA00)
#define DPOKMPOFLHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5A320)

inline static constexpr unsigned int DPOKMPOFLHJ_TypeDefinitionIndex = 14307;

	class DPOKMPOFLHJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>**)UnitySDK::FromName("", "DPOKMPOFLHJ")->GetStaticField(0x52C00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPOKMPOFLHJ")->GetStaticField(0x52C08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPOKMPOFLHJ")->GetStaticField(0x52C10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPOKMPOFLHJ")->GetStaticField(0x125A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPOKMPOFLHJ")->GetStaticField(0x125A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>*(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*>(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamAnchorRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PamAnchorRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamAnchorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamAnchorRow*))((::PBYTE)hIl2Cpp + DPOKMPOFLHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
