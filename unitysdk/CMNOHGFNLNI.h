#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumStuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMNOHGFNLNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB83440)
#define CMNOHGFNLNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB839C0)
#define CMNOHGFNLNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB835B0)
#define CMNOHGFNLNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB82F30)
#define CMNOHGFNLNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB831C0)
#define CMNOHGFNLNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB83650)
#define CMNOHGFNLNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB836A0)
#define CMNOHGFNLNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB83480)
#define CMNOHGFNLNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB83160)
#define CMNOHGFNLNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB832F0)
#define CMNOHGFNLNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB83510)
#define CMNOHGFNLNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB82EB0)

inline static constexpr unsigned int CMNOHGFNLNI_TypeDefinitionIndex = 14383;

	class CMNOHGFNLNI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x36110);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x36118);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x36120);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0xA8D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0xA8D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>*(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumStuffRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumStuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CMNOHGFNLNI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMNOHGFNLNI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CMNOHGFNLNI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CMNOHGFNLNI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CMNOHGFNLNI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumStuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumStuffRow*))((::PBYTE)hIl2Cpp + CMNOHGFNLNI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
