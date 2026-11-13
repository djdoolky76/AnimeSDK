#pragma once
#include "unitysdk/unitysdk.h"
class CPCJHAMKGKC;
class EDOAKFMPPAP;
namespace RPG::GameCore { class TaskContext; }

#define OEILDFLHDCK_CTOR_OFFSET UNITYSDK_OFFSET(0x17654AB0)
#define OEILDFLHDCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17654AE0)
#define OEILDFLHDCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17654B20)

inline static constexpr unsigned int OEILDFLHDCK_TypeDefinitionIndex = 54985;

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
