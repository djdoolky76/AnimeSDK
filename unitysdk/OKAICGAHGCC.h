#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraWorkDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKAICGAHGCC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D28C300)
#define OKAICGAHGCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D28C880)
#define OKAICGAHGCC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D28C470)
#define OKAICGAHGCC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D28BDB0)
#define OKAICGAHGCC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D28C040)
#define OKAICGAHGCC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D28C510)
#define OKAICGAHGCC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D28C560)
#define OKAICGAHGCC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D28C340)
#define OKAICGAHGCC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D28BFE0)
#define OKAICGAHGCC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D28C170)
#define OKAICGAHGCC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D28C3D0)
#define OKAICGAHGCC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D28BD30)

	class OKAICGAHGCC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x38100);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDataRow*>**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x38108);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0x38110);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0xBF30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKAICGAHGCC")->GetStaticField(0xBF31);
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
