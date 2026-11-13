#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BKECEMDNPJH;
namespace RPG::GameCore { class TaskContext; }

#define ONKNIIKJCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x17D80460)
#define ONKNIIKJCAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D80470)
#define ONKNIIKJCAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D804B0)
#define ONKNIIKJCAH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D80500)
#define ONKNIIKJCAH_TICK_OFFSET UNITYSDK_OFFSET(0x17D80540)

inline static constexpr unsigned int ONKNIIKJCAH_TypeDefinitionIndex = 60175;

	class ONKNIIKJCAH : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BKECEMDNPJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BKECEMDNPJH*))((::PBYTE)hIl2Cpp + ONKNIIKJCAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNIIKJCAH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNIIKJCAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKNIIKJCAH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONKNIIKJCAH_TICK_OFFSET))(this, a1);
		}

	};
