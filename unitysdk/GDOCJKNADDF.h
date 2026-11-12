#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightMazeBuffEnhanceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDOCJKNADDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E00BC60)
#define GDOCJKNADDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00C230)
#define GDOCJKNADDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E00BDD0)
#define GDOCJKNADDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E00B6D0)
#define GDOCJKNADDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E00B960)
#define GDOCJKNADDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E00BE70)
#define GDOCJKNADDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E00BEC0)
#define GDOCJKNADDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E00BCA0)
#define GDOCJKNADDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E00B900)
#define GDOCJKNADDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E00BAD0)
#define GDOCJKNADDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E00BD30)
#define GDOCJKNADDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E00B650)

inline static constexpr unsigned int GDOCJKNADDF_TypeDefinitionIndex = 13790;

	class GDOCJKNADDF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GDOCJKNADDF")->GetStaticField(0xDE30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDOCJKNADDF")->GetStaticField(0xDE38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*>**)UnitySDK::FromName("", "GDOCJKNADDF")->GetStaticField(0xDE40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDOCJKNADDF")->GetStaticField(0x1CC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDOCJKNADDF")->GetStaticField(0x1CC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*>(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDOCJKNADDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDOCJKNADDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDOCJKNADDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDOCJKNADDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDOCJKNADDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightMazeBuffEnhanceConfigRow*))((::PBYTE)hIl2Cpp + GDOCJKNADDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
