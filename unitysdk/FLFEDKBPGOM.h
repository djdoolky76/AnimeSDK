#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FLFEDKBPGOM;
namespace System { class Action; }

#define FLFEDKBPGOM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15824210)
#define FLFEDKBPGOM_CTOR_OFFSET UNITYSDK_OFFSET(0x15824340)
#define FLFEDKBPGOM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x158242F0)
#define FLFEDKBPGOM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15824290)

inline static constexpr unsigned int FLFEDKBPGOM_TypeDefinitionIndex = 80837;

	class FLFEDKBPGOM : public ::MLKDDLHNNHH
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFEDKBPGOM_CTOR_OFFSET))(this);
		}

		static ::FLFEDKBPGOM* BPLPBPMEODA(::System::Action* a1)
		{
			return ((::FLFEDKBPGOM*(*)(::System::Action*))((::PBYTE)hIl2Cpp + FLFEDKBPGOM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFEDKBPGOM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFEDKBPGOM_ONCLEAR_OFFSET))(this);
		}

	};
