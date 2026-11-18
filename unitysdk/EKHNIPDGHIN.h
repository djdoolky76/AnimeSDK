#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/KAAFCLHNIBE.h"
#include "unitysdk/Share/ESwitchType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EKHNIPDGHIN_FHDBCJHDFBI_OFFSET UNITYSDK_OFFSET(0x16158E50)
#define EKHNIPDGHIN_JANNLAFAJDE_OFFSET UNITYSDK_OFFSET(0x16158F30)
#define EKHNIPDGHIN_KECEBPJAKFA_OFFSET UNITYSDK_OFFSET(0x16159060)
#define EKHNIPDGHIN__CTOR_OFFSET UNITYSDK_OFFSET(0x16158D80)

inline static constexpr unsigned int EKHNIPDGHIN_TypeDefinitionIndex = 44689;

class EKHNIPDGHIN : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::HashSet_1<::Share::ESwitchType>* CDJECGCOHAC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHNIPDGHIN__CTOR_OFFSET))(this);
	}

	static ::System::String* FHDBCJHDFBI()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EKHNIPDGHIN_FHDBCJHDFBI_OFFSET))();
	}

	::System::Boolean JANNLAFAJDE(::KAAFCLHNIBE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KAAFCLHNIBE))((::PBYTE)hIl2Cpp + EKHNIPDGHIN_JANNLAFAJDE_OFFSET))(this, OBNIAHNMHPF);
	}

	static ::System::Void KECEBPJAKFA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKHNIPDGHIN_KECEBPJAKFA_OFFSET))();
	}
};
