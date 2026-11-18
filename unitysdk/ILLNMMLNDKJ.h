#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class AFEPCMPMDDL;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILLNMMLNDKJ_COFHOCIEHPD_OFFSET UNITYSDK_OFFSET(0x13C9B3C0)

inline static constexpr unsigned int ILLNMMLNDKJ_TypeDefinitionIndex = 42463;

class ILLNMMLNDKJ : public ::System::Object
{
public:
	static ::System::Void COFHOCIEHPD(::AFEPCMPMDDL* BGJOPBCCMOC, ::PAMPOBIPLCE KAMJLKGLFDB, ::System::Func_2<::System::EventArgs*, ::System::Boolean>* PJKPIMMNFAJ)
	{
		return ((::System::Void(*)(::AFEPCMPMDDL*, ::PAMPOBIPLCE, ::System::Func_2<::System::EventArgs*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ILLNMMLNDKJ_COFHOCIEHPD_OFFSET))(BGJOPBCCMOC, KAMJLKGLFDB, PJKPIMMNFAJ);
	}
};
