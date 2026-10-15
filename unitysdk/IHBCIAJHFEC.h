#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class KLDJDLOEPPG;
namespace RPG::GameCore { class TaskContext; }

#define IHBCIAJHFEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A010)
#define IHBCIAJHFEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1640A0B0)
#define IHBCIAJHFEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1640A180)

inline static constexpr unsigned int IHBCIAJHFEC_TypeDefinitionIndex = 54173;

	class IHBCIAJHFEC
	{
	public:
		::KFELGAIGHAP* PDPJPAJCBML; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KLDJDLOEPPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KLDJDLOEPPG*))((::PBYTE)hIl2Cpp + IHBCIAJHFEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCIAJHFEC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBCIAJHFEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
