#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightVariablePropertyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HACHDGBHOGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0588E0)
#define HACHDGBHOGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E058EB0)
#define HACHDGBHOGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E058A50)
#define HACHDGBHOGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E058330)
#define HACHDGBHOGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0585C0)
#define HACHDGBHOGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E058AF0)
#define HACHDGBHOGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E058B40)
#define HACHDGBHOGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E058920)
#define HACHDGBHOGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E058560)
#define HACHDGBHOGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E058730)
#define HACHDGBHOGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0589B0)
#define HACHDGBHOGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0582B0)

inline static constexpr unsigned int HACHDGBHOGB_TypeDefinitionIndex = 13667;

	class HACHDGBHOGB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HACHDGBHOGB")->GetStaticField(0x12C10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*>**)UnitySDK::FromName("", "HACHDGBHOGB")->GetStaticField(0x12C18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HACHDGBHOGB")->GetStaticField(0x12C20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HACHDGBHOGB")->GetStaticField(0x3CB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HACHDGBHOGB")->GetStaticField(0x3CB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightVariablePropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightVariablePropertyConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::GridFightVariablePropertyConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + HACHDGBHOGB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACHDGBHOGB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HACHDGBHOGB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HACHDGBHOGB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HACHDGBHOGB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightVariablePropertyConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightVariablePropertyConfigRow*))((::PBYTE)hIl2Cpp + HACHDGBHOGB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
