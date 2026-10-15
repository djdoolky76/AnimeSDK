#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RndGroupType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RndOptionGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DKKNPJMJGOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD38C60)
#define DKKNPJMJGOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD39230)
#define DKKNPJMJGOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD38DD0)
#define DKKNPJMJGOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD386D0)
#define DKKNPJMJGOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD38960)
#define DKKNPJMJGOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD38E70)
#define DKKNPJMJGOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD38EC0)
#define DKKNPJMJGOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD38CA0)
#define DKKNPJMJGOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD38900)
#define DKKNPJMJGOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD38AD0)
#define DKKNPJMJGOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD38D30)
#define DKKNPJMJGOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD38650)

inline static constexpr unsigned int DKKNPJMJGOO_TypeDefinitionIndex = 14663;

	class DKKNPJMJGOO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DKKNPJMJGOO")->GetStaticField(0x4FC60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>**)UnitySDK::FromName("", "DKKNPJMJGOO")->GetStaticField(0x4FC68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DKKNPJMJGOO")->GetStaticField(0x4FC70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DKKNPJMJGOO")->GetStaticField(0x12020);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DKKNPJMJGOO")->GetStaticField(0x12021);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>*(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionGroupRow*>(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RndOptionGroupRow* LMBKNCAIDLC(::RPG::GameCore::RndGroupType a1)
		{
			return ((::RPG::GameCore::RndOptionGroupRow*(*)(::RPG::GameCore::RndGroupType))((::PBYTE)hIl2Cpp + DKKNPJMJGOO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKNPJMJGOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DKKNPJMJGOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DKKNPJMJGOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DKKNPJMJGOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RndOptionGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RndOptionGroupRow*))((::PBYTE)hIl2Cpp + DKKNPJMJGOO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
