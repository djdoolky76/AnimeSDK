#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKPLOGICFO;
namespace RPG::Client { class GridFightDivisionListViewExtra; }

#define FMIFLKGJJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15850350)
#define FMIFLKGJJBI_ENTER_OFFSET UNITYSDK_OFFSET(0x1584FD90)
#define FMIFLKGJJBI_EXIT_OFFSET UNITYSDK_OFFSET(0x15850310)
#define FMIFLKGJJBI_TICK_OFFSET UNITYSDK_OFFSET(0x158500A0)

inline static constexpr unsigned int FMIFLKGJJBI_TypeDefinitionIndex = 64455;

	class FMIFLKGJJBI : public ::System::Object
	{
	public:
		::KNKPLOGICFO* PGMIOKKLHIE; // 0x10
		::System::Int32 JCEMFJNEOND; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIFLKGJJBI_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + FMIFLKGJJBI_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::GridFightDivisionListViewExtra* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightDivisionListViewExtra*))((::PBYTE)hIl2Cpp + FMIFLKGJJBI_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIFLKGJJBI_EXIT_OFFSET))(this);
		}

	};
