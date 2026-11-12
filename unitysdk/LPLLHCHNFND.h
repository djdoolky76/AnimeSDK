#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPLLHCHNFND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E32ADE0)
#define LPLLHCHNFND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32B360)
#define LPLLHCHNFND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E32AF50)
#define LPLLHCHNFND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E32A890)
#define LPLLHCHNFND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E32AB20)
#define LPLLHCHNFND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E32AFF0)
#define LPLLHCHNFND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E32B040)
#define LPLLHCHNFND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E32AE20)
#define LPLLHCHNFND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E32AAC0)
#define LPLLHCHNFND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E32AC90)
#define LPLLHCHNFND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E32AEB0)
#define LPLLHCHNFND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E32A810)

inline static constexpr unsigned int LPLLHCHNFND_TypeDefinitionIndex = 11961;

	class LPLLHCHNFND : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>**)UnitySDK::FromName("", "LPLLHCHNFND")->GetStaticField(0x37370);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LPLLHCHNFND")->GetStaticField(0x37378);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPLLHCHNFND")->GetStaticField(0x37380);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPLLHCHNFND")->GetStaticField(0xBE40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPLLHCHNFND")->GetStaticField(0xBE41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>*(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeBirdRow*>(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeBirdRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeBirdRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LPLLHCHNFND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLLHCHNFND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPLLHCHNFND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPLLHCHNFND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPLLHCHNFND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeBirdRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeBirdRow*))((::PBYTE)hIl2Cpp + LPLLHCHNFND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
