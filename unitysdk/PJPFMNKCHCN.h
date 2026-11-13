#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCIECNDOAKF;
namespace RPG::GameCore { class TextJoinConfigRow; }

#define PJPFMNKCHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x147A2020)
#define PJPFMNKCHCN_KIGIDKAFKEG_OFFSET UNITYSDK_OFFSET(0x147A1F40)

inline static constexpr unsigned int PJPFMNKCHCN_TypeDefinitionIndex = 76533;

	class PJPFMNKCHCN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPFMNKCHCN_CTOR_OFFSET))(this);
		}

		static ::OCIECNDOAKF* KIGIDKAFKEG(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::OCIECNDOAKF*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + PJPFMNKCHCN_KIGIDKAFKEG_OFFSET))(a1);
		}

	};
