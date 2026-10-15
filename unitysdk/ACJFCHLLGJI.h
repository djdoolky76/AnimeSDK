#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenFarmElement; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ACJFCHLLGJI_CTOR_OFFSET UNITYSDK_OFFSET(0xB121C50)
#define ACJFCHLLGJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB121CA0)
#define ACJFCHLLGJI__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xB122050)

inline static constexpr unsigned int ACJFCHLLGJI_TypeDefinitionIndex = 58240;

	class ACJFCHLLGJI
	{
	public:
		::System::UInt32 BLKIFKGEBGE; // 0x40
		::System::UInt32 GJABCILEAPJ; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFarmElement* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + ACJFCHLLGJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJFCHLLGJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnPageConfirmClose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACJFCHLLGJI__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
		}

	};
