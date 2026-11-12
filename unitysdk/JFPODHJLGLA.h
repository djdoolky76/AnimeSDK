#pragma once
#include "unitysdk/unitysdk.h"
class EPDGBMGOPHM;
class MDBNOPEIDAH;
namespace RPG::GameCore { class TaskContext; }

#define JFPODHJLGLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A6710)
#define JFPODHJLGLA_EVALUATE_OFFSET UNITYSDK_OFFSET(0xB9A6790)

inline static constexpr unsigned int JFPODHJLGLA_TypeDefinitionIndex = 54998;

	class JFPODHJLGLA
	{
	public:
		::EPDGBMGOPHM* OHKCFMOAECF; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDBNOPEIDAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDBNOPEIDAH*))((::PBYTE)hIl2Cpp + JFPODHJLGLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPODHJLGLA_EVALUATE_OFFSET))(this);
		}

	};
