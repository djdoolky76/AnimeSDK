#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKAICGAHGCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA05040)
#define OKAICGAHGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA055C0)
#define OKAICGAHGCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA051B0)
#define OKAICGAHGCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA04AF0)
#define OKAICGAHGCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA04D80)
#define OKAICGAHGCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA05250)
#define OKAICGAHGCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA052A0)
#define OKAICGAHGCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA05080)
#define OKAICGAHGCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA04D20)
#define OKAICGAHGCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA04EB0)
#define OKAICGAHGCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA05110)
#define OKAICGAHGCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA04A70)

inline static constexpr unsigned int OKAICGAHGCC_TypeDefinitionIndex = 13109;

	class OKAICGAHGCC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x583A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x583A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x583B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x12BF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x12BF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>*(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraWorkDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraWorkDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKAICGAHGCC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKAICGAHGCC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OKAICGAHGCC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKAICGAHGCC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OKAICGAHGCC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraWorkDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraWorkDataRow*))((::PBYTE)hIl2Cpp + OKAICGAHGCC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
