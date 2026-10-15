#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityModuleFightConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCBBOEDICLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF85D0)
#define BCBBOEDICLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF8B50)
#define BCBBOEDICLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF8740)
#define BCBBOEDICLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF8080)
#define BCBBOEDICLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF8310)
#define BCBBOEDICLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF87E0)
#define BCBBOEDICLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF8830)
#define BCBBOEDICLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF8610)
#define BCBBOEDICLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF82B0)
#define BCBBOEDICLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF8480)
#define BCBBOEDICLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF86A0)
#define BCBBOEDICLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF8000)

inline static constexpr unsigned int BCBBOEDICLD_TypeDefinitionIndex = 11597;

	class BCBBOEDICLD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BCBBOEDICLD")->GetStaticField(0x3DEC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*>**)UnitySDK::FromName("", "BCBBOEDICLD")->GetStaticField(0x3DEC8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BCBBOEDICLD")->GetStaticField(0x3DED0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BCBBOEDICLD")->GetStaticField(0xD400);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BCBBOEDICLD")->GetStaticField(0xD401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModuleFightConfigRow*>(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityModuleFightConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityModuleFightConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BCBBOEDICLD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBBOEDICLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BCBBOEDICLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCBBOEDICLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BCBBOEDICLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityModuleFightConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityModuleFightConfigRow*))((::PBYTE)hIl2Cpp + BCBBOEDICLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
