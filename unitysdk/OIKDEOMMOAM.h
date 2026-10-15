#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HJIOMFDJLLA.h"
class KCFOCCAGGAN;
class MOMODPMFIKE;
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OIKDEOMMOAM_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0xBEA0020)
#define OIKDEOMMOAM_CLEAR_OFFSET UNITYSDK_OFFSET(0xBEA00E0)
#define OIKDEOMMOAM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA0140)
#define OIKDEOMMOAM_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xBE9FBD0)
#define OIKDEOMMOAM_JIENMEIDDFC_OFFSET UNITYSDK_OFFSET(0xBE9FF10)
#define OIKDEOMMOAM_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0xBE9FBF0)
#define OIKDEOMMOAM_MOPKGMOPEIC_OFFSET UNITYSDK_OFFSET(0xBE9FE00)
#define OIKDEOMMOAM_NKBHOJIFPCC_OFFSET UNITYSDK_OFFSET(0xBE9FDB0)
#define OIKDEOMMOAM_OFJNKCJKOLJ_OFFSET UNITYSDK_OFFSET(0xBE9FD60)
#define OIKDEOMMOAM_SET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0xBE9FBE0)

inline static constexpr unsigned int OIKDEOMMOAM_TypeDefinitionIndex = 54001;

	class OIKDEOMMOAM : public ::System::Object
	{
	public:
		::MOMODPMFIKE* FODBMMCKAEN; // 0x10
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x18
		::System::String* KDHPKOFLNFM; // 0x20
		::KCFOCCAGGAN* _ParamList_k__BackingField; // 0x28
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x30
		::RPG::GameCore::FixPoint PJGLBPCJFEK; // 0x38
		::RPG::GameCore::FixPoint DHPDILNLIPC; // 0x40
		::RPG::GameCore::FixPoint GGOJHJDPDFL; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_CTOR_OFFSET))(this);
		}

		::KCFOCCAGGAN* get_ParamList()
		{
			return ((::KCFOCCAGGAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_GET_PARAMLIST_OFFSET))(this);
		}

		::System::Void set_ParamList(::KCFOCCAGGAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCFOCCAGGAN*))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_SET_PARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_LHMKCOHPLMN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint OFJNKCJKOLJ()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_OFJNKCJKOLJ_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint NKBHOJIFPCC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_NKBHOJIFPCC_OFFSET))(this);
		}

		::System::Boolean MOPKGMOPEIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_MOPKGMOPEIC_OFFSET))(this);
		}

		::System::Boolean JIENMEIDDFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_JIENMEIDDFC_OFFSET))(this);
		}

		static ::OIKDEOMMOAM* BGOMKDMBLKK(::HJIOMFDJLLA a1)
		{
			return ((::OIKDEOMMOAM*(*)(::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_BGOMKDMBLKK_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIKDEOMMOAM_CLEAR_OFFSET))(this);
		}

	};
