#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OOANHJJCKJK;
class PIJOKBILCGH;
namespace MoleMole { class ConfigTempleLevelUpEvent; }

#define EHGPCEMPJEO_CMCDIALAMMD_OFFSET UNITYSDK_OFFSET(0xFE0BAB0)
#define EHGPCEMPJEO_DLJPIEFFNOG_OFFSET UNITYSDK_OFFSET(0xFE0B980)
#define EHGPCEMPJEO_GCDDLFKFFOO_OFFSET UNITYSDK_OFFSET(0xFE0BA00)
#define EHGPCEMPJEO_OJJFKBLCBCF_OFFSET UNITYSDK_OFFSET(0xFE0B9C0)
#define EHGPCEMPJEO__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0B970)

inline static constexpr unsigned int EHGPCEMPJEO_TypeDefinitionIndex = 51657;

class EHGPCEMPJEO : public ::System::Object
{
public:
	::OOANHJJCKJK* BGKFGKKPCCM; // 0x10
	::MoleMole::ConfigTempleLevelUpEvent* AHMFPFACACD; // 0x18
	::System::Boolean CGFPODIGFKG; // 0x20

	::System::Void _ctor(::OOANHJJCKJK* EGGAALCPEPL, ::MoleMole::ConfigTempleLevelUpEvent* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::OOANHJJCKJK*, ::MoleMole::ConfigTempleLevelUpEvent*))((::PBYTE)hIl2Cpp + EHGPCEMPJEO__CTOR_OFFSET))(this, EGGAALCPEPL, DFMKILICPFB);
	}

	::System::Void DLJPIEFFNOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPCEMPJEO_DLJPIEFFNOG_OFFSET))(this);
	}

	::System::Void OJJFKBLCBCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPCEMPJEO_OJJFKBLCBCF_OFFSET))(this);
	}

	::System::Void GCDDLFKFFOO(::PIJOKBILCGH* IFEGBICFIOM)
	{
		return ((::System::Void(*)(::PVOID, ::PIJOKBILCGH*))((::PBYTE)hIl2Cpp + EHGPCEMPJEO_GCDDLFKFFOO_OFFSET))(this, IFEGBICFIOM);
	}

	::System::Single CMCDIALAMMD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGPCEMPJEO_CMCDIALAMMD_OFFSET))(this);
	}
};
