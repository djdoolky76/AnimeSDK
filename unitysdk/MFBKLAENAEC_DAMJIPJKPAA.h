#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/MECPGCBLFAE_JKIOJGIINAO.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MFBKLAENAEC_DAMJIPJKPAA_ALACJAMEHKM_OFFSET UNITYSDK_OFFSET(0x13D22470)
#define MFBKLAENAEC_DAMJIPJKPAA_HHMGIDIMEHN_OFFSET UNITYSDK_OFFSET(0x13D22990)
#define MFBKLAENAEC_DAMJIPJKPAA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D22460)

inline static constexpr unsigned int MFBKLAENAEC_DAMJIPJKPAA_TypeDefinitionIndex = 70834;

class MFBKLAENAEC_DAMJIPJKPAA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* AAPLGHCHAJN; // 0x10
	::Foundation::Variable_1<::System::UInt32> ANFDLCGBFCP; // 0x18
	::System::Byte _padding0[0x10];
	::System::UInt64 LBCNACHKPGB; // 0x30
	::MECPGCBLFAE_JKIOJGIINAO PHHDHIBOCKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKLAENAEC_DAMJIPJKPAA__CTOR_OFFSET))(this);
	}

	::System::Boolean ALACJAMEHKM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MFBKLAENAEC_DAMJIPJKPAA_ALACJAMEHKM_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void HHMGIDIMEHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFBKLAENAEC_DAMJIPJKPAA_HHMGIDIMEHN_OFFSET))(this);
	}
};
