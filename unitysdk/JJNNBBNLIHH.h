#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJNNBBNLIHH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5B7D20)
#define JJNNBBNLIHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B82A0)
#define JJNNBBNLIHH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5B7E90)
#define JJNNBBNLIHH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5B77D0)
#define JJNNBBNLIHH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5B7A60)
#define JJNNBBNLIHH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5B7F30)
#define JJNNBBNLIHH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5B7F80)
#define JJNNBBNLIHH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5B7D60)
#define JJNNBBNLIHH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5B7A00)
#define JJNNBBNLIHH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5B7BD0)
#define JJNNBBNLIHH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5B7DF0)
#define JJNNBBNLIHH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5B7750)

inline static constexpr unsigned int JJNNBBNLIHH_TypeDefinitionIndex = 14674;

	class JJNNBBNLIHH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>**)UnitySDK::FromName("", "JJNNBBNLIHH")->GetStaticField(0x37140);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJNNBBNLIHH")->GetStaticField(0x37148);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJNNBBNLIHH")->GetStaticField(0x37150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJNNBBNLIHH")->GetStaticField(0xACC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJNNBBNLIHH")->GetStaticField(0xACC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnConfigRow*>(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJNNBBNLIHH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNNBBNLIHH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJNNBBNLIHH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJNNBBNLIHH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJNNBBNLIHH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnConfigRow*))((::PBYTE)hIl2Cpp + JJNNBBNLIHH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
