#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class CMEMKKGBLFM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }

#define BDCMLCMGPML_CTOR_OFFSET UNITYSDK_OFFSET(0x162E08C0)
#define BDCMLCMGPML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162E08D0)
#define BDCMLCMGPML_EJCFFHBPHKF_OFFSET UNITYSDK_OFFSET(0x162E0AD0)
#define BDCMLCMGPML_GMCIOCENFKM_OFFSET UNITYSDK_OFFSET(0x162E0EA0)
#define BDCMLCMGPML_GPHKDFOLOEB_OFFSET UNITYSDK_OFFSET(0x162E0950)
#define BDCMLCMGPML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162E0A70)
#define BDCMLCMGPML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x162E0A20)
#define BDCMLCMGPML_TICK_OFFSET UNITYSDK_OFFSET(0x162E0E40)

inline static constexpr unsigned int BDCMLCMGPML_TypeDefinitionIndex = 52616;

	class BDCMLCMGPML : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OALILMALLAI; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::CMEMKKGBLFM* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x30
		// static const ::System::String* MPGEHLEADII; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMEMKKGBLFM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMEMKKGBLFM*))((::PBYTE)hIl2Cpp + BDCMLCMGPML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BDCMLCMGPML_TICK_OFFSET))(this, a1);
		}

		::System::Void EJCFFHBPHKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_EJCFFHBPHKF_OFFSET))(this);
		}

		::System::Void GMCIOCENFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_GMCIOCENFKM_OFFSET))(this);
		}

		::System::Void GPHKDFOLOEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCMLCMGPML_GPHKDFOLOEB_OFFSET))(this);
		}

	};
