#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightClaraEnhanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCFHDHALCOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E942910)
#define LCFHDHALCOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E942EE0)
#define LCFHDHALCOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E942A80)
#define LCFHDHALCOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E942380)
#define LCFHDHALCOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E942610)
#define LCFHDHALCOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E942B20)
#define LCFHDHALCOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E942B70)
#define LCFHDHALCOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E942950)
#define LCFHDHALCOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9425B0)
#define LCFHDHALCOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E942780)
#define LCFHDHALCOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9429E0)
#define LCFHDHALCOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E942300)

inline static constexpr unsigned int LCFHDHALCOD_TypeDefinitionIndex = 13865;

	class LCFHDHALCOD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*>**)UnitySDK::FromName("", "LCFHDHALCOD")->GetStaticField(0x37E40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LCFHDHALCOD")->GetStaticField(0x37E48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LCFHDHALCOD")->GetStaticField(0x37E50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LCFHDHALCOD")->GetStaticField(0xB010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LCFHDHALCOD")->GetStaticField(0xB011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightClaraEnhanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightClaraEnhanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightClaraEnhanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LCFHDHALCOD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFHDHALCOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LCFHDHALCOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCFHDHALCOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LCFHDHALCOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightClaraEnhanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightClaraEnhanceConfigRow*))((::PBYTE)hIl2Cpp + LCFHDHALCOD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
