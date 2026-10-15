#pragma once
#include "unitysdk/unitysdk.h"
class CPCJHAMKGKC;
class EDOAKFMPPAP;
namespace RPG::GameCore { class TaskContext; }

#define OEILDFLHDCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE27320)
#define OEILDFLHDCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE27350)
#define OEILDFLHDCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE27390)

inline static constexpr unsigned int OEILDFLHDCK_TypeDefinitionIndex = 53821;

	class OEILDFLHDCK
	{
	public:
		::CPCJHAMKGKC* HOMJBACGGJB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EDOAKFMPPAP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EDOAKFMPPAP*))((::PBYTE)hIl2Cpp + OEILDFLHDCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEILDFLHDCK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEILDFLHDCK_ONTASKBEGIN_OFFSET))(this);
		}

	};
