#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHKFLJDIPDE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E284D70)
#define KHKFLJDIPDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2852F0)
#define KHKFLJDIPDE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E284EE0)
#define KHKFLJDIPDE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E284820)
#define KHKFLJDIPDE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E284AB0)
#define KHKFLJDIPDE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E284F80)
#define KHKFLJDIPDE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E284FD0)
#define KHKFLJDIPDE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E284DB0)
#define KHKFLJDIPDE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E284A50)
#define KHKFLJDIPDE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E284BE0)
#define KHKFLJDIPDE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E284E40)
#define KHKFLJDIPDE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2847A0)

inline static constexpr unsigned int KHKFLJDIPDE_TypeDefinitionIndex = 11859;

	class KHKFLJDIPDE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KHKFLJDIPDE")->GetStaticField(0x2D820);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHKFLJDIPDE")->GetStaticField(0x2D828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*>**)UnitySDK::FromName("", "KHKFLJDIPDE")->GetStaticField(0x2D830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHKFLJDIPDE")->GetStaticField(0x97F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHKFLJDIPDE")->GetStaticField(0x97F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*>*(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftRow*>(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGiftRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGiftRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KHKFLJDIPDE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKFLJDIPDE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHKFLJDIPDE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHKFLJDIPDE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHKFLJDIPDE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGiftRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + KHKFLJDIPDE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
