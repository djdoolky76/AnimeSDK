#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightUnlockConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCLKJCBFIBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9446C0)
#define LCLKJCBFIBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E944C90)
#define LCLKJCBFIBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E944830)
#define LCLKJCBFIBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E944130)
#define LCLKJCBFIBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9443C0)
#define LCLKJCBFIBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9448D0)
#define LCLKJCBFIBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E944920)
#define LCLKJCBFIBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E944700)
#define LCLKJCBFIBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E944360)
#define LCLKJCBFIBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E944530)
#define LCLKJCBFIBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E944790)
#define LCLKJCBFIBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9440B0)

inline static constexpr unsigned int LCLKJCBFIBN_TypeDefinitionIndex = 13700;

	class LCLKJCBFIBN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LCLKJCBFIBN")->GetStaticField(0x37F70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*>**)UnitySDK::FromName("", "LCLKJCBFIBN")->GetStaticField(0x37F78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LCLKJCBFIBN")->GetStaticField(0x37F80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LCLKJCBFIBN")->GetStaticField(0xB070);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LCLKJCBFIBN")->GetStaticField(0xB071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightUnlockConfigRow*>(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightUnlockConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightUnlockConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LCLKJCBFIBN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCLKJCBFIBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LCLKJCBFIBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCLKJCBFIBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LCLKJCBFIBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightUnlockConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightUnlockConfigRow*))((::PBYTE)hIl2Cpp + LCLKJCBFIBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
