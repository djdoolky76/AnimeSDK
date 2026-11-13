#pragma once
#include "unitysdk/unitysdk.h"
class DMPJOLKCMJA;
namespace RPG::GameCore { class TaskContext; }

#define LJABLNAHJPI_CTOR_OFFSET UNITYSDK_OFFSET(0x172F5460)
#define LJABLNAHJPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172F55C0)
#define LJABLNAHJPI_FAFDKNILDMG_OFFSET UNITYSDK_OFFSET(0x172F5540)
#define LJABLNAHJPI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172F5490)

inline static constexpr unsigned int LJABLNAHJPI_TypeDefinitionIndex = 53925;

	class LJABLNAHJPI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DMPJOLKCMJA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DMPJOLKCMJA*))((::PBYTE)hIl2Cpp + LJABLNAHJPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABLNAHJPI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABLNAHJPI_DISPOSE_OFFSET))(this);
		}

		::System::Void FAFDKNILDMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJABLNAHJPI_FAFDKNILDMG_OFFSET))(this);
		}

	};
