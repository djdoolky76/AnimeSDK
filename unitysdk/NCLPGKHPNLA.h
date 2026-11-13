#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPetPalEffHandbookConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCLPGKHPNLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E89AED0)
#define NCLPGKHPNLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89B4D0)
#define NCLPGKHPNLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E89B040)
#define NCLPGKHPNLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E89A900)
#define NCLPGKHPNLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E89AB90)
#define NCLPGKHPNLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E89B0E0)
#define NCLPGKHPNLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E89B130)
#define NCLPGKHPNLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E89AF10)
#define NCLPGKHPNLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E89AB30)
#define NCLPGKHPNLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E89AD00)
#define NCLPGKHPNLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E89AFA0)
#define NCLPGKHPNLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E89A880)

inline static constexpr unsigned int NCLPGKHPNLA_TypeDefinitionIndex = 13579;

	class NCLPGKHPNLA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*>**)UnitySDK::FromName("", "NCLPGKHPNLA")->GetStaticField(0x4E2D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NCLPGKHPNLA")->GetStaticField(0x4E2D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCLPGKHPNLA")->GetStaticField(0x4E2E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCLPGKHPNLA")->GetStaticField(0x11220);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCLPGKHPNLA")->GetStaticField(0x11221);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*>(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPetPalEffHandbookConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NCLPGKHPNLA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCLPGKHPNLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NCLPGKHPNLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCLPGKHPNLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NCLPGKHPNLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPetPalEffHandbookConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPetPalEffHandbookConfigRow*))((::PBYTE)hIl2Cpp + NCLPGKHPNLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
