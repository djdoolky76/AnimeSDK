#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FunctionHudConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJLKBHIKEGB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA03290)
#define OJLKBHIKEGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA03810)
#define OJLKBHIKEGB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA03400)
#define OJLKBHIKEGB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA02D40)
#define OJLKBHIKEGB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA02FD0)
#define OJLKBHIKEGB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA034A0)
#define OJLKBHIKEGB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA034F0)
#define OJLKBHIKEGB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA032D0)
#define OJLKBHIKEGB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA02F70)
#define OJLKBHIKEGB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA03100)
#define OJLKBHIKEGB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA03360)
#define OJLKBHIKEGB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA02CC0)

inline static constexpr unsigned int OJLKBHIKEGB_TypeDefinitionIndex = 13379;

	class OJLKBHIKEGB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OJLKBHIKEGB")->GetStaticField(0x58220);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>**)UnitySDK::FromName("", "OJLKBHIKEGB")->GetStaticField(0x58228);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OJLKBHIKEGB")->GetStaticField(0x58230);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJLKBHIKEGB")->GetStaticField(0x12BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OJLKBHIKEGB")->GetStaticField(0x12BA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionHudConfigRow*>(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FunctionHudConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FunctionHudConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJLKBHIKEGB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLKBHIKEGB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OJLKBHIKEGB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJLKBHIKEGB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OJLKBHIKEGB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FunctionHudConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FunctionHudConfigRow*))((::PBYTE)hIl2Cpp + OJLKBHIKEGB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
