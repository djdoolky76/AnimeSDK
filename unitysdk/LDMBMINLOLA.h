#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class LJFHKAJPFNE;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDMBMINLOLA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB63D370)
#define LDMBMINLOLA_CLFJFNPEDFJ_OFFSET UNITYSDK_OFFSET(0xB63D300)
#define LDMBMINLOLA_COLLECT_OFFSET UNITYSDK_OFFSET(0xB63CFA0)
#define LDMBMINLOLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB63CCC0)
#define LDMBMINLOLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB63CF50)
#define LDMBMINLOLA_FLUSH_OFFSET UNITYSDK_OFFSET(0xB63D0E0)
#define LDMBMINLOLA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB63D350)
#define LDMBMINLOLA_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0xB63CDA0)
#define LDMBMINLOLA_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB63CD40)
#define LDMBMINLOLA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB63D2C0)
#define LDMBMINLOLA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB63D280)
#define LDMBMINLOLA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB63D360)

inline static constexpr unsigned int LDMBMINLOLA_TypeDefinitionIndex = 71086;

	class LDMBMINLOLA
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x40
		::LJFHKAJPFNE* IMNPNIIDKMF; // 0x48
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x50
		static ::System::Int32* StaticGet_PGNBGHPNMCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x13500);
		}

		static ::System::Int32* StaticGet_OLHNNOKCIHL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x13504);
		}

		static ::System::Int32* StaticGet_EINLFAADDPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x13508);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMBMINLOLA_CCTOR_OFFSET))();
		}

		::System::Void HPDIGBHFMPG(::System::Collections::Generic::Dictionary_2<::System::Int32, ::LJFHKAJPFNE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::LJFHKAJPFNE*>*))((::PBYTE)hIl2Cpp + LDMBMINLOLA_HPDIGBHFMPG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_DISPOSE_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_ONDISABLE_OFFSET))(this);
		}

		::System::Single CLFJFNPEDFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_CLFJFNPEDFJ_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBMINLOLA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + LDMBMINLOLA_SET_CONFIG_OFFSET))(this, a1);
		}

	};
