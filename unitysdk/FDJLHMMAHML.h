#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableBillboard; }
namespace RPG::GameCore { class TaskContext; }

#define FDJLHMMAHML_CTOR_OFFSET UNITYSDK_OFFSET(0x156DDB60)
#define FDJLHMMAHML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156DDB90)

inline static constexpr unsigned int FDJLHMMAHML_TypeDefinitionIndex = 58103;

	class FDJLHMMAHML
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableBillboard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableBillboard*))((::PBYTE)hIl2Cpp + FDJLHMMAHML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJLHMMAHML_ONTASKBEGIN_OFFSET))(this);
		}

	};
