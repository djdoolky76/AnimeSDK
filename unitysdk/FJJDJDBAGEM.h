#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CEGBJHCAKDK;
class OBPDIEAHALL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJJDJDBAGEM_FDDLDHIJILJ_OFFSET UNITYSDK_OFFSET(0x11C56800)
#define FJJDJDBAGEM_HICFMBGNOEL_OFFSET UNITYSDK_OFFSET(0x11C564F0)
#define FJJDJDBAGEM_HPENIMDDIFE_OFFSET UNITYSDK_OFFSET(0x11C565E0)
#define FJJDJDBAGEM_OECGNCMJKJH_OFFSET UNITYSDK_OFFSET(0x11C566D0)
#define FJJDJDBAGEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11C56460)

inline static constexpr unsigned int FJJDJDBAGEM_TypeDefinitionIndex = 40347;

class FJJDJDBAGEM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OBPDIEAHALL*>* ECJOACFJMPB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJDJDBAGEM__CTOR_OFFSET))(this);
	}

	::System::Boolean HICFMBGNOEL(::System::UInt32 ANFFADCGGHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJJDJDBAGEM_HICFMBGNOEL_OFFSET))(this, ANFFADCGGHI);
	}

	::System::Boolean HPENIMDDIFE(::System::UInt32 ANFFADCGGHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJJDJDBAGEM_HPENIMDDIFE_OFFSET))(this, ANFFADCGGHI);
	}

	::System::Void OECGNCMJKJH(::CEGBJHCAKDK* LMEJPBLDBPA)
	{
		return ((::System::Void(*)(::PVOID, ::CEGBJHCAKDK*))((::PBYTE)hIl2Cpp + FJJDJDBAGEM_OECGNCMJKJH_OFFSET))(this, LMEJPBLDBPA);
	}

	::System::UInt32 FDDLDHIJILJ(::System::UInt32 ANFFADCGGHI)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJJDJDBAGEM_FDDLDHIJILJ_OFFSET))(this, ANFFADCGGHI);
	}
};
