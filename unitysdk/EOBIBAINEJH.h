#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityWorldUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOBIBAINEJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD831B0)
#define EOBIBAINEJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD83730)
#define EOBIBAINEJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD83320)
#define EOBIBAINEJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD82C60)
#define EOBIBAINEJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD82EF0)
#define EOBIBAINEJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD833C0)
#define EOBIBAINEJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD83410)
#define EOBIBAINEJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD831F0)
#define EOBIBAINEJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD82E90)
#define EOBIBAINEJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD83060)
#define EOBIBAINEJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD83280)
#define EOBIBAINEJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD82BE0)

inline static constexpr unsigned int EOBIBAINEJH_TypeDefinitionIndex = 11232;

	class EOBIBAINEJH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EOBIBAINEJH")->GetStaticField(0xC1F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>**)UnitySDK::FromName("", "EOBIBAINEJH")->GetStaticField(0xC1F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EOBIBAINEJH")->GetStaticField(0xC200);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EOBIBAINEJH")->GetStaticField(0x28A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EOBIBAINEJH")->GetStaticField(0x28A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityWorldUnlockRow*>(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityWorldUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityWorldUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EOBIBAINEJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOBIBAINEJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EOBIBAINEJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EOBIBAINEJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EOBIBAINEJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityWorldUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityWorldUnlockRow*))((::PBYTE)hIl2Cpp + EOBIBAINEJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
