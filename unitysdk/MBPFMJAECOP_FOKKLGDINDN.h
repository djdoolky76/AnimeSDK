#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWorldBaseController; }
namespace MoleMole::Battle { class Entity; }

#define MBPFMJAECOP_FOKKLGDINDN_JAIFNBCEAHK_OFFSET UNITYSDK_OFFSET(0x14D5EF40)
#define MBPFMJAECOP_FOKKLGDINDN__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5EF30)

inline static constexpr unsigned int MBPFMJAECOP_FOKKLGDINDN_TypeDefinitionIndex = 41417;

class MBPFMJAECOP_FOKKLGDINDN : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPFMJAECOP_FOKKLGDINDN__CTOR_OFFSET))(this);
	}

	::System::Void JAIFNBCEAHK(::System::Boolean EBFCACIEKBC, ::MoleMole::UIWorldBaseController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIWorldBaseController*))((::PBYTE)hIl2Cpp + MBPFMJAECOP_FOKKLGDINDN_JAIFNBCEAHK_OFFSET))(this, EBFCACIEKBC, NCIMBHDKIJM);
	}
};
