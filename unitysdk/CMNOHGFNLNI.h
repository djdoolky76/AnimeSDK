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

#define CMNOHGFNLNI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC83BF0)
#define CMNOHGFNLNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC84170)
#define CMNOHGFNLNI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC83D60)
#define CMNOHGFNLNI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC836E0)
#define CMNOHGFNLNI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC83970)
#define CMNOHGFNLNI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC83E00)
#define CMNOHGFNLNI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC83E50)
#define CMNOHGFNLNI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC83C30)
#define CMNOHGFNLNI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC83910)
#define CMNOHGFNLNI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC83AA0)
#define CMNOHGFNLNI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC83CC0)
#define CMNOHGFNLNI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC83660)

inline static constexpr unsigned int CMNOHGFNLNI_TypeDefinitionIndex = 14226;

	class CMNOHGFNLNI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x3F250);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumStuffRow*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x3F258);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0x3F260);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0xEDF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CMNOHGFNLNI")->GetStaticField(0xEDF1);
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
