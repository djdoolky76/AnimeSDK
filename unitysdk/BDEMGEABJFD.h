#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

namespace System { class String; }

#define BDEMGEABJFD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x169E5A40)
#define BDEMGEABJFD_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x169E5A00)
#define BDEMGEABJFD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x169E5970)
#define BDEMGEABJFD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x169E58E0)
#define BDEMGEABJFD_IBDMIGBCFOF_OFFSET UNITYSDK_OFFSET(0x169E57A0)
#define BDEMGEABJFD_JJBKOIBPLIK_OFFSET UNITYSDK_OFFSET(0x169E5760)
#define BDEMGEABJFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x169E57E0)
#define BDEMGEABJFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x169E5860)
#define BDEMGEABJFD__CTOR_OFFSET UNITYSDK_OFFSET(0x169E58D0)

inline static constexpr unsigned int BDEMGEABJFD_TypeDefinitionIndex = 86121;

class BDEMGEABJFD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x39; // 0x0
	::System::Int32 DGIAGIMPCEA; // 0x20
	::System::UInt32 AGOPADLDEHJ; // 0x24
	::System::UInt32 PFLFNCBLLGD; // 0x28
	::System::Boolean OONICMDCGKI; // 0x2C
	::System::Byte _padding0[0x3];
	::MoleMole::Config::BuffGroupName IJDLBAIFLFA; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDEMGEABJFD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD__CTOR_OFFSET))(this);
	}

	::System::Int32 JJBKOIBPLIK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_JJBKOIBPLIK_OFFSET))(this);
	}

	::MoleMole::Config::BuffGroupName IBDMIGBCFOF()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_IBDMIGBCFOF_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEMGEABJFD_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PPNALIJJAJL, ::System::UInt32 NMOGICJLOIA, ::MoleMole::Config::BuffGroupName IJDLBAIFLFA, ::System::Int32 BOBBHFPEPHC, ::System::Boolean MBPDODIJHPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::Config::BuffGroupName, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDEMGEABJFD_CNHBDOMKKDE_OFFSET))(this, PPNALIJJAJL, NMOGICJLOIA, IJDLBAIFLFA, BOBBHFPEPHC, MBPDODIJHPJ);
	}
};
