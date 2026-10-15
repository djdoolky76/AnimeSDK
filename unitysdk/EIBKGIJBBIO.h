#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideMaxSpiritLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIBKGIJBBIO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD58470)
#define EIBKGIJBBIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD58A40)
#define EIBKGIJBBIO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD585E0)
#define EIBKGIJBBIO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD57EE0)
#define EIBKGIJBBIO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD58170)
#define EIBKGIJBBIO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD58680)
#define EIBKGIJBBIO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD586D0)
#define EIBKGIJBBIO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD584B0)
#define EIBKGIJBBIO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD58110)
#define EIBKGIJBBIO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD582E0)
#define EIBKGIJBBIO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD58540)
#define EIBKGIJBBIO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD57E60)

inline static constexpr unsigned int EIBKGIJBBIO_TypeDefinitionIndex = 10939;

	class EIBKGIJBBIO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EIBKGIJBBIO")->GetStaticField(0x4DA40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EIBKGIJBBIO")->GetStaticField(0x4DA48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*>**)UnitySDK::FromName("", "EIBKGIJBBIO")->GetStaticField(0x4DA50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EIBKGIJBBIO")->GetStaticField(0x11C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EIBKGIJBBIO")->GetStaticField(0x11C31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*>*(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideMaxSpiritLevelRow*>(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideMaxSpiritLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideMaxSpiritLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EIBKGIJBBIO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIBKGIJBBIO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EIBKGIJBBIO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIBKGIJBBIO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EIBKGIJBBIO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideMaxSpiritLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideMaxSpiritLevelRow*))((::PBYTE)hIl2Cpp + EIBKGIJBBIO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
