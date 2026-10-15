#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingDeckRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFGDHKHBLKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD78250)
#define EFGDHKHBLKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD787D0)
#define EFGDHKHBLKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD783C0)
#define EFGDHKHBLKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD77D40)
#define EFGDHKHBLKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD77FD0)
#define EFGDHKHBLKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD78460)
#define EFGDHKHBLKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD784B0)
#define EFGDHKHBLKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD78290)
#define EFGDHKHBLKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD77F70)
#define EFGDHKHBLKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD78100)
#define EFGDHKHBLKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD78320)
#define EFGDHKHBLKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD77CC0)

inline static constexpr unsigned int EFGDHKHBLKC_TypeDefinitionIndex = 11050;

	class EFGDHKHBLKC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EFGDHKHBLKC")->GetStaticField(0x53B90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*>**)UnitySDK::FromName("", "EFGDHKHBLKC")->GetStaticField(0x53B98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EFGDHKHBLKC")->GetStaticField(0x53BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EFGDHKHBLKC")->GetStaticField(0x12950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EFGDHKHBLKC")->GetStaticField(0x12951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*>*(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingDeckRow*>(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingDeckRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingDeckRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EFGDHKHBLKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGDHKHBLKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EFGDHKHBLKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFGDHKHBLKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EFGDHKHBLKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingDeckRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingDeckRow*))((::PBYTE)hIl2Cpp + EFGDHKHBLKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
