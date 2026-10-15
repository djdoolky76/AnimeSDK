#pragma once
#include "unitysdk/unitysdk.h"
class CNHIBDMIDEF;
namespace RPG::GameCore { class TaskContext; }

#define NCEBCHFGGJA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB07E30)
#define NCEBCHFGGJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB07E60)

inline static constexpr unsigned int NCEBCHFGGJA_TypeDefinitionIndex = 55344;

	class NCEBCHFGGJA
	{
	public:
		::Il2CppArray<::System::Int32>* AHFJFKHPNME; // 0x28
		::Il2CppArray<::System::Int32>* GNICJKOLLPB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CNHIBDMIDEF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CNHIBDMIDEF*))((::PBYTE)hIl2Cpp + NCEBCHFGGJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEBCHFGGJA_ONTASKBEGIN_OFFSET))(this);
		}

	};
