#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainExteriorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCCDIJBEJDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2033B0)
#define JCCDIJBEJDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2038E0)
#define JCCDIJBEJDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E203490)
#define JCCDIJBEJDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E138FF0)
#define JCCDIJBEJDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2030B0)
#define JCCDIJBEJDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E203530)
#define JCCDIJBEJDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E203580)
#define JCCDIJBEJDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E1C24F0)
#define JCCDIJBEJDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E203050)
#define JCCDIJBEJDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2031E0)
#define JCCDIJBEJDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2033F0)
#define JCCDIJBEJDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E202FD0)

inline static constexpr unsigned int JCCDIJBEJDB_TypeDefinitionIndex = 14180;

	class JCCDIJBEJDB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JCCDIJBEJDB")->GetStaticField(0x29ED0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JCCDIJBEJDB")->GetStaticField(0x29ED8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*>**)UnitySDK::FromName("", "JCCDIJBEJDB")->GetStaticField(0x29EE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JCCDIJBEJDB")->GetStaticField(0x86B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JCCDIJBEJDB")->GetStaticField(0x86B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainExteriorConfigRow*>(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainExteriorConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::TrainExteriorConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JCCDIJBEJDB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCCDIJBEJDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JCCDIJBEJDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCCDIJBEJDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JCCDIJBEJDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainExteriorConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + JCCDIJBEJDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
