#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLPBPGMJMF;
class OCAIMDEIIKG;
namespace System { class Action; }

#define OCAIMDEIIKG_GPHKACJKFOF_GGNFAGBLKBO_OFFSET UNITYSDK_OFFSET(0x15F59060)
#define OCAIMDEIIKG_GPHKACJKFOF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F59050)

inline static constexpr unsigned int OCAIMDEIIKG_GPHKACJKFOF_TypeDefinitionIndex = 44908;

class OCAIMDEIIKG_GPHKACJKFOF : public ::System::Object
{
public:
	::OCAIMDEIIKG* KLHPEBKNIFB; // 0x10
	::HNLPBPGMJMF* KPNIHKEKDOC; // 0x18
	::System::Action* HKEBHFKHBCC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_GPHKACJKFOF__CTOR_OFFSET))(this);
	}

	::System::Void GGNFAGBLKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_GPHKACJKFOF_GGNFAGBLKBO_OFFSET))(this);
	}
};
