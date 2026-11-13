#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MALPBIJPHIE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1BB7AEA0)
#define MALPBIJPHIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB7B4A0)
#define MALPBIJPHIE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1BB7B010)
#define MALPBIJPHIE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1BB7A8D0)
#define MALPBIJPHIE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1BB7AB60)
#define MALPBIJPHIE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1BB7B0B0)
#define MALPBIJPHIE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1BB7B100)
#define MALPBIJPHIE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1BB7AEE0)
#define MALPBIJPHIE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1BB7AB00)
#define MALPBIJPHIE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1BB7ACD0)
#define MALPBIJPHIE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1BB7AF70)
#define MALPBIJPHIE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1BB7A850)

inline static constexpr unsigned int MALPBIJPHIE_TypeDefinitionIndex = 13957;

	class MALPBIJPHIE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x3FC30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x3FC38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0x3FC40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0xCCC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MALPBIJPHIE")->GetStaticField(0xCCC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILHardLevelGroupConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::ILHardLevelGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MALPBIJPHIE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MALPBIJPHIE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MALPBIJPHIE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILHardLevelGroupConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILHardLevelGroupConfigRow*))((::PBYTE)hIl2Cpp + MALPBIJPHIE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
