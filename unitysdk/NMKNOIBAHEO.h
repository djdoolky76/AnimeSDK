#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetTextJoinValue; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define NMKNOIBAHEO_CTOR_OFFSET UNITYSDK_OFFSET(0xC5726E0)
#define NMKNOIBAHEO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC572BA0)
#define NMKNOIBAHEO_DOIKODCHNEF_OFFSET UNITYSDK_OFFSET(0xC572C40)
#define NMKNOIBAHEO_KCNMKNCPFJI_OFFSET UNITYSDK_OFFSET(0xC572990)
#define NMKNOIBAHEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC5727D0)
#define NMKNOIBAHEO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC572710)
#define NMKNOIBAHEO_TICK_OFFSET UNITYSDK_OFFSET(0xC572770)

inline static constexpr unsigned int NMKNOIBAHEO_TypeDefinitionIndex = 54417;

	class NMKNOIBAHEO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetTextJoinValue* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::String* MAPPBDEIBIB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTextJoinValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTextJoinValue*))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_DISPOSE_OFFSET))(this);
		}

		::System::Void DOIKODCHNEF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_DOIKODCHNEF_OFFSET))(this, a1);
		}

		::System::Void KCNMKNCPFJI(::RPG::GameCore::TextJoinConfigRow* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*, ::System::String*))((::PBYTE)hIl2Cpp + NMKNOIBAHEO_KCNMKNCPFJI_OFFSET))(this, a1, a2);
		}

	};
