#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleBuffHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BOOHPJDPLHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9C8B00)
#define BOOHPJDPLHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9C90D0)
#define BOOHPJDPLHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9C8C70)
#define BOOHPJDPLHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9C8570)
#define BOOHPJDPLHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9C8800)
#define BOOHPJDPLHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9C8D10)
#define BOOHPJDPLHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9C8D60)
#define BOOHPJDPLHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9C8B40)
#define BOOHPJDPLHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9C87A0)
#define BOOHPJDPLHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9C8970)
#define BOOHPJDPLHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9C8BD0)
#define BOOHPJDPLHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9C84F0)

inline static constexpr unsigned int BOOHPJDPLHJ_TypeDefinitionIndex = 11889;

	class BOOHPJDPLHJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BOOHPJDPLHJ")->GetStaticField(0x38C70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BOOHPJDPLHJ")->GetStaticField(0x38C78);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*>**)UnitySDK::FromName("", "BOOHPJDPLHJ")->GetStaticField(0x38C80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BOOHPJDPLHJ")->GetStaticField(0xB700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BOOHPJDPLHJ")->GetStaticField(0xB701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*>*(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffHintRow*>(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleBuffHintRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleBuffHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleBuffHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleBuffHintRow*))((::PBYTE)hIl2Cpp + BOOHPJDPLHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
