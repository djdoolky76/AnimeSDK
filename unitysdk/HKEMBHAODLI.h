#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKEMBHAODLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E82C6F0)
#define HKEMBHAODLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82CCC0)
#define HKEMBHAODLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E82C860)
#define HKEMBHAODLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E82C160)
#define HKEMBHAODLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E82C3F0)
#define HKEMBHAODLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E82C900)
#define HKEMBHAODLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E82C950)
#define HKEMBHAODLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E82C730)
#define HKEMBHAODLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E82C390)
#define HKEMBHAODLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E82C560)
#define HKEMBHAODLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E82C7C0)
#define HKEMBHAODLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E82C0E0)

inline static constexpr unsigned int HKEMBHAODLI_TypeDefinitionIndex = 13570;

	class HKEMBHAODLI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKEMBHAODLI")->GetStaticField(0x182D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HKEMBHAODLI")->GetStaticField(0x182D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*>**)UnitySDK::FromName("", "HKEMBHAODLI")->GetStaticField(0x182E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKEMBHAODLI")->GetStaticField(0x5720);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKEMBHAODLI")->GetStaticField(0x5721);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*>*(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventRow*>(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBonfireEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBonfireEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKEMBHAODLI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKEMBHAODLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKEMBHAODLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKEMBHAODLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKEMBHAODLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBonfireEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBonfireEventRow*))((::PBYTE)hIl2Cpp + HKEMBHAODLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
