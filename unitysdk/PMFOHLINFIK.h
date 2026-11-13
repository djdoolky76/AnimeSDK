#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeFloorUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMFOHLINFIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7A7A70)
#define PMFOHLINFIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A8040)
#define PMFOHLINFIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7A7BE0)
#define PMFOHLINFIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7A74E0)
#define PMFOHLINFIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7A7770)
#define PMFOHLINFIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7A7C80)
#define PMFOHLINFIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7A7CD0)
#define PMFOHLINFIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7A7AB0)
#define PMFOHLINFIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7A7710)
#define PMFOHLINFIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7A78E0)
#define PMFOHLINFIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7A7B40)
#define PMFOHLINFIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7A7460)

inline static constexpr unsigned int PMFOHLINFIK_TypeDefinitionIndex = 14222;

	class PMFOHLINFIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>**)UnitySDK::FromName("", "PMFOHLINFIK")->GetStaticField(0x42140);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMFOHLINFIK")->GetStaticField(0x42148);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMFOHLINFIK")->GetStaticField(0x42150);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMFOHLINFIK")->GetStaticField(0xD430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMFOHLINFIK")->GetStaticField(0xD431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazeFloorUnlockRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazeFloorUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMFOHLINFIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMFOHLINFIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMFOHLINFIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMFOHLINFIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMFOHLINFIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazeFloorUnlockRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazeFloorUnlockRow*))((::PBYTE)hIl2Cpp + PMFOHLINFIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
