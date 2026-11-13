#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertDishSetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDDAAAKHGCM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E70A930)
#define PDDAAAKHGCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70AF00)
#define PDDAAAKHGCM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E70AAA0)
#define PDDAAAKHGCM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E70A3A0)
#define PDDAAAKHGCM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E70A630)
#define PDDAAAKHGCM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E70AB40)
#define PDDAAAKHGCM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E70AB90)
#define PDDAAAKHGCM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E70A970)
#define PDDAAAKHGCM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E70A5D0)
#define PDDAAAKHGCM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E70A7A0)
#define PDDAAAKHGCM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E70AA00)
#define PDDAAAKHGCM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E70A320)

inline static constexpr unsigned int PDDAAAKHGCM_TypeDefinitionIndex = 11228;

	class PDDAAAKHGCM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*>**)UnitySDK::FromName("", "PDDAAAKHGCM")->GetStaticField(0x3DEA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PDDAAAKHGCM")->GetStaticField(0x3DEA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PDDAAAKHGCM")->GetStaticField(0x3DEB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PDDAAAKHGCM")->GetStaticField(0xC570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PDDAAAKHGCM")->GetStaticField(0xC571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*>*(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDishSetRow*>(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertDishSetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertDishSetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PDDAAAKHGCM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDDAAAKHGCM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDDAAAKHGCM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PDDAAAKHGCM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PDDAAAKHGCM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertDishSetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertDishSetRow*))((::PBYTE)hIl2Cpp + PDDAAAKHGCM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
