#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightNodePlugInType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNodePlugInShowConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNCAFDDAIBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EED3A30)
#define CNCAFDDAIBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EED4000)
#define CNCAFDDAIBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EED3BA0)
#define CNCAFDDAIBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EED34A0)
#define CNCAFDDAIBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EED3730)
#define CNCAFDDAIBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EED3C40)
#define CNCAFDDAIBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EED3C90)
#define CNCAFDDAIBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EED3A70)
#define CNCAFDDAIBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EED36D0)
#define CNCAFDDAIBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EED38A0)
#define CNCAFDDAIBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EED3B00)
#define CNCAFDDAIBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EED3420)

inline static constexpr unsigned int CNCAFDDAIBP_TypeDefinitionIndex = 13763;

	class CNCAFDDAIBP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNCAFDDAIBP")->GetStaticField(0x36310);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*>**)UnitySDK::FromName("", "CNCAFDDAIBP")->GetStaticField(0x36318);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNCAFDDAIBP")->GetStaticField(0x36320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNCAFDDAIBP")->GetStaticField(0xB920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNCAFDDAIBP")->GetStaticField(0xB921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodePlugInShowConfigRow*>(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightNodePlugInShowConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightNodePlugInType a1)
		{
			return ((::RPG::GameCore::GridFightNodePlugInShowConfigRow*(*)(::RPG::GameCore::GridFightNodePlugInType))((::PBYTE)hIl2Cpp + CNCAFDDAIBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNCAFDDAIBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNCAFDDAIBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNCAFDDAIBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNCAFDDAIBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightNodePlugInShowConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightNodePlugInShowConfigRow*))((::PBYTE)hIl2Cpp + CNCAFDDAIBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
