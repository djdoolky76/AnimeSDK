#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FuncUnlockHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGJOPPKGKBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BBB0C10)
#define MGJOPPKGKBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB1190)
#define MGJOPPKGKBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BBB0D80)
#define MGJOPPKGKBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BBB06C0)
#define MGJOPPKGKBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BBB0950)
#define MGJOPPKGKBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BBB0E20)
#define MGJOPPKGKBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BBB0E70)
#define MGJOPPKGKBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BBB0C50)
#define MGJOPPKGKBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BBB08F0)
#define MGJOPPKGKBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BBB0AC0)
#define MGJOPPKGKBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BBB0CE0)
#define MGJOPPKGKBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BBB0640)

inline static constexpr unsigned int MGJOPPKGKBD_TypeDefinitionIndex = 13392;

	class MGJOPPKGKBD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MGJOPPKGKBD")->GetStaticField(0x43540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>**)UnitySDK::FromName("", "MGJOPPKGKBD")->GetStaticField(0x43548);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MGJOPPKGKBD")->GetStaticField(0x43550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MGJOPPKGKBD")->GetStaticField(0xD7F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MGJOPPKGKBD")->GetStaticField(0xD7F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>*(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FuncUnlockHintRow*>(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FuncUnlockHintRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FuncUnlockHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MGJOPPKGKBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGJOPPKGKBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MGJOPPKGKBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGJOPPKGKBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MGJOPPKGKBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FuncUnlockHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FuncUnlockHintRow*))((::PBYTE)hIl2Cpp + MGJOPPKGKBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
