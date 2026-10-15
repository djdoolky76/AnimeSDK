#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightNodeTemplateConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJJIBBDELBH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D217780)
#define NJJIBBDELBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D217D50)
#define NJJIBBDELBH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2178F0)
#define NJJIBBDELBH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2171F0)
#define NJJIBBDELBH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D217480)
#define NJJIBBDELBH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D217990)
#define NJJIBBDELBH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2179E0)
#define NJJIBBDELBH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2177C0)
#define NJJIBBDELBH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D217420)
#define NJJIBBDELBH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2175F0)
#define NJJIBBDELBH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D217850)
#define NJJIBBDELBH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D217170)

	class NJJIBBDELBH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NJJIBBDELBH")->GetStaticField(0x2EF50);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*>**)UnitySDK::FromName("", "NJJIBBDELBH")->GetStaticField(0x2EF58);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NJJIBBDELBH")->GetStaticField(0x2EF60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NJJIBBDELBH")->GetStaticField(0x9C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NJJIBBDELBH")->GetStaticField(0x9C31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightNodeTemplateConfigRow*>(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightNodeTemplateConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightNodeTemplateConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NJJIBBDELBH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJJIBBDELBH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NJJIBBDELBH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJJIBBDELBH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJJIBBDELBH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightNodeTemplateConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightNodeTemplateConfigRow*))((::PBYTE)hIl2Cpp + NJJIBBDELBH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
