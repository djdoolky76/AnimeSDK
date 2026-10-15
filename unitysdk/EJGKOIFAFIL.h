#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJGKOIFAFIL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD60D10)
#define EJGKOIFAFIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD61860)
#define EJGKOIFAFIL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD610B0)
#define EJGKOIFAFIL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD60D50)
#define EJGKOIFAFIL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD615A0)
#define EJGKOIFAFIL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD61150)
#define EJGKOIFAFIL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD611A0)
#define EJGKOIFAFIL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD60F80)
#define EJGKOIFAFIL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD61540)
#define EJGKOIFAFIL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD616D0)
#define EJGKOIFAFIL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD61010)
#define EJGKOIFAFIL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD614C0)

inline static constexpr unsigned int EJGKOIFAFIL_TypeDefinitionIndex = 15301;

	class EJGKOIFAFIL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*>**)UnitySDK::FromName("", "EJGKOIFAFIL")->GetStaticField(0x1260);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJGKOIFAFIL")->GetStaticField(0x1268);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJGKOIFAFIL")->GetStaticField(0x1270);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJGKOIFAFIL")->GetStaticField(0x720);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJGKOIFAFIL")->GetStaticField(0x721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJGKOIFAFIL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJGKOIFAFIL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJGKOIFAFIL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TitanAtlasGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TitanAtlasGroupRow*))((::PBYTE)hIl2Cpp + EJGKOIFAFIL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*>*(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasGroupRow*>(*)())((::PBYTE)hIl2Cpp + EJGKOIFAFIL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TitanAtlasGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TitanAtlasGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJGKOIFAFIL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
