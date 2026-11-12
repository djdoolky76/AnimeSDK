#pragma once
#include "unitysdk/unitysdk.h"
class HENDHKHIIHD;
namespace RPG::GameCore { class TaskContext; }

#define OFOJNCCHOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC706F10)
#define OFOJNCCHOOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC706F40)

inline static constexpr unsigned int OFOJNCCHOOL_TypeDefinitionIndex = 59763;

	class OFOJNCCHOOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HENDHKHIIHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HENDHKHIIHD*))((::PBYTE)hIl2Cpp + OFOJNCCHOOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFOJNCCHOOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
