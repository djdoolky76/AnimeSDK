#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class World3DMapEntranceConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBOOPHCPKFF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE03F0)
#define IBOOPHCPKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE09B0)
#define IBOOPHCPKFF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE0560)
#define IBOOPHCPKFF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEDFE60)
#define IBOOPHCPKFF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE00F0)
#define IBOOPHCPKFF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE0600)
#define IBOOPHCPKFF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE0650)
#define IBOOPHCPKFF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE0430)
#define IBOOPHCPKFF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE0090)
#define IBOOPHCPKFF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE0220)
#define IBOOPHCPKFF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE04C0)
#define IBOOPHCPKFF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEDFDE0)

inline static constexpr unsigned int IBOOPHCPKFF_TypeDefinitionIndex = 14025;

	class IBOOPHCPKFF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x20AB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x20AB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x20AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x76C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBOOPHCPKFF")->GetStaticField(0x76C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::World3DMapEntranceConfigRow*>(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::World3DMapEntranceConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::World3DMapEntranceConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBOOPHCPKFF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::World3DMapEntranceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::World3DMapEntranceConfigRow*))((::PBYTE)hIl2Cpp + IBOOPHCPKFF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
