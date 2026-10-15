#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightMonsterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDGKEIGEPFJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE00FC0)
#define GDGKEIGEPFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE01590)
#define GDGKEIGEPFJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE01130)
#define GDGKEIGEPFJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE00A30)
#define GDGKEIGEPFJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE00CC0)
#define GDGKEIGEPFJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE011D0)
#define GDGKEIGEPFJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE01220)
#define GDGKEIGEPFJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE01000)
#define GDGKEIGEPFJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE00C60)
#define GDGKEIGEPFJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE00E30)
#define GDGKEIGEPFJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE01090)
#define GDGKEIGEPFJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE009B0)

inline static constexpr unsigned int GDGKEIGEPFJ_TypeDefinitionIndex = 13630;

	class GDGKEIGEPFJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GDGKEIGEPFJ")->GetStaticField(0x14B30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDGKEIGEPFJ")->GetStaticField(0x14B38);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*>**)UnitySDK::FromName("", "GDGKEIGEPFJ")->GetStaticField(0x14B40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDGKEIGEPFJ")->GetStaticField(0x4660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDGKEIGEPFJ")->GetStaticField(0x4661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightMonsterConfigRow*>(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightMonsterConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightMonsterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightMonsterConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightMonsterConfigRow*))((::PBYTE)hIl2Cpp + GDGKEIGEPFJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
