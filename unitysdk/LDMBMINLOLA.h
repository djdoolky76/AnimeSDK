#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class LJFHKAJPFNE;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LDMBMINLOLA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB636840)
#define LDMBMINLOLA_CLFJFNPEDFJ_OFFSET UNITYSDK_OFFSET(0xB6367D0)
#define LDMBMINLOLA_COLLECT_OFFSET UNITYSDK_OFFSET(0xB636470)
#define LDMBMINLOLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB636190)
#define LDMBMINLOLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB636420)
#define LDMBMINLOLA_FLUSH_OFFSET UNITYSDK_OFFSET(0xB6365B0)
#define LDMBMINLOLA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB636820)
#define LDMBMINLOLA_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0xB636270)
#define LDMBMINLOLA_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB636210)
#define LDMBMINLOLA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB636790)
#define LDMBMINLOLA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB636750)
#define LDMBMINLOLA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB636830)

inline static constexpr unsigned int LDMBMINLOLA_TypeDefinitionIndex = 71086;

	class LDMBMINLOLA
	{
	public:
		::LJFHKAJPFNE* IMNPNIIDKMF; // 0x40
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x48
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x50
		static ::System::Int32* StaticGet_PGNBGHPNMCM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x12150);
		}

		static ::System::Int32* StaticGet_OLHNNOKCIHL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x12154);
		}

		static ::System::Int32* StaticGet_EINLFAADDPC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LDMBMINLOLA")->GetStaticField(0x12158);
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
