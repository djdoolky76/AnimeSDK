#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/Object.h"

class AFEPCMPMDDL;
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ILLNMMLNDKJ_LKPHEGFCBDO_NDFMCLMBECO_OFFSET UNITYSDK_OFFSET(0x16AA7D30)
#define ILLNMMLNDKJ_LKPHEGFCBDO_PKALKDFLDLE_OFFSET UNITYSDK_OFFSET(0x16AA7E80)
#define ILLNMMLNDKJ_LKPHEGFCBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA7D20)

inline static constexpr unsigned int ILLNMMLNDKJ_LKPHEGFCBDO_TypeDefinitionIndex = 42464;

class ILLNMMLNDKJ_LKPHEGFCBDO : public ::System::Object
{
public:
	::AFEPCMPMDDL* BGJOPBCCMOC; // 0x10
	::System::Func_2<::System::EventArgs*, ::System::Boolean>* PJKPIMMNFAJ; // 0x18
	::PAMPOBIPLCE KAMJLKGLFDB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLNMMLNDKJ_LKPHEGFCBDO__CTOR_OFFSET))(this);
	}

	::System::Void NDFMCLMBECO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLNMMLNDKJ_LKPHEGFCBDO_NDFMCLMBECO_OFFSET))(this);
	}

	::System::Void PKALKDFLDLE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + ILLNMMLNDKJ_LKPHEGFCBDO_PKALKDFLDLE_OFFSET))(this, KOIBHLHLMFC);
	}
};
