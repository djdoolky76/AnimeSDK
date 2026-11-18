#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define AOKFPNKJOON_BIIINGKDJKA_BHNAILNGACH_OFFSET UNITYSDK_OFFSET(0x142349C0)
#define AOKFPNKJOON_BIIINGKDJKA_DHPCAJCGMLN_OFFSET UNITYSDK_OFFSET(0x14234B70)
#define AOKFPNKJOON_BIIINGKDJKA_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x14234A10)
#define AOKFPNKJOON_BIIINGKDJKA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x14234BD0)
#define AOKFPNKJOON_BIIINGKDJKA_ILFJKNPBHIJ_OFFSET UNITYSDK_OFFSET(0x14234AD0)
#define AOKFPNKJOON_BIIINGKDJKA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x142348F0)
#define AOKFPNKJOON_BIIINGKDJKA__CTOR_OFFSET UNITYSDK_OFFSET(0x14234870)

inline static constexpr unsigned int AOKFPNKJOON_BIIINGKDJKA_TypeDefinitionIndex = 51453;

class AOKFPNKJOON_BIIINGKDJKA : public ::System::Object
{
public:
	::System::Collections::Generic::Queue_1<::System::Object*>* AOPOBMDDBNM; // 0x10
	::System::Action* EBOODLDOOLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BHNAILNGACH(::System::Action* NPFIONPDFED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_BHNAILNGACH_OFFSET))(this, NPFIONPDFED);
	}

	::System::Void DKCCELBNBLM(::AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG* FKLOOAEOIDF)
	{
		return ((::System::Void(*)(::PVOID, ::AOKFPNKJOON_BIIINGKDJKA_JNNFOPGBDOG*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_DKCCELBNBLM_OFFSET))(this, FKLOOAEOIDF);
	}

	::System::Void ILFJKNPBHIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_ILFJKNPBHIJ_OFFSET))(this);
	}

	::System::Boolean DHPCAJCGMLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_DHPCAJCGMLN_OFFSET))(this);
	}

	::System::Boolean EDEFLFIKNFK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_BIIINGKDJKA_EDEFLFIKNFK_OFFSET))(this);
	}
};
