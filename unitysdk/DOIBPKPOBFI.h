#pragma once
#include "unitysdk/unitysdk.h"
class ONMBDCJIDBJ;
namespace RPG::GameCore { class TaskContext; }

#define DOIBPKPOBFI_CTOR_OFFSET UNITYSDK_OFFSET(0x12DE3D50)
#define DOIBPKPOBFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12DE3D80)

inline static constexpr unsigned int DOIBPKPOBFI_TypeDefinitionIndex = 59380;

	class DOIBPKPOBFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ONMBDCJIDBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ONMBDCJIDBJ*))((::PBYTE)hIl2Cpp + DOIBPKPOBFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBPKPOBFI_ONTASKBEGIN_OFFSET))(this);
		}

	};
