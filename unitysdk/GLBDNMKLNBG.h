#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEnemyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLBDNMKLNBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E03BE30)
#define GLBDNMKLNBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03C400)
#define GLBDNMKLNBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E03BFA0)
#define GLBDNMKLNBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E03B8A0)
#define GLBDNMKLNBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E03BB30)
#define GLBDNMKLNBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E03C040)
#define GLBDNMKLNBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E03C090)
#define GLBDNMKLNBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E03BE70)
#define GLBDNMKLNBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E03BAD0)
#define GLBDNMKLNBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E03BCA0)
#define GLBDNMKLNBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E03BF00)
#define GLBDNMKLNBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E03B820)

inline static constexpr unsigned int GLBDNMKLNBG_TypeDefinitionIndex = 12203;

	class GLBDNMKLNBG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*>**)UnitySDK::FromName("", "GLBDNMKLNBG")->GetStaticField(0x10E90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLBDNMKLNBG")->GetStaticField(0x10E98);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLBDNMKLNBG")->GetStaticField(0x10EA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLBDNMKLNBG")->GetStaticField(0x37B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLBDNMKLNBG")->GetStaticField(0x37B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*>*(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyRow*>(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEnemyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirEnemyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLBDNMKLNBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLBDNMKLNBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLBDNMKLNBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLBDNMKLNBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLBDNMKLNBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEnemyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEnemyRow*))((::PBYTE)hIl2Cpp + GLBDNMKLNBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
