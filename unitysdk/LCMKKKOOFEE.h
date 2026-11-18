#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POAJNHGBLON;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCMKKKOOFEE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17682A70)
#define LCMKKKOOFEE_CNBFDMNNDHM_OFFSET UNITYSDK_OFFSET(0x17682C30)
#define LCMKKKOOFEE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17682FF0)
#define LCMKKKOOFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x17682A60)

inline static constexpr unsigned int LCMKKKOOFEE_TypeDefinitionIndex = 45287;

class LCMKKKOOFEE : public ::System::Object
{
public:
	// static const ::System::Int32 PPMANHHJLJC = 0x1E; // 0x0
	::System::Collections::Generic::List_1<::POAJNHGBLON*>* MNKKOJLHBCI; // 0x10
	::System::Single ILHLKLMPOAP; // 0x18
	::System::Int32 KEHCBAEDDDC; // 0x1C
	::System::Single KJMHIDEJICJ; // 0x20
	::System::UInt32 BLBOGPJAJGG; // 0x24
	::System::Int32 IGKPNKEAJFM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMKKKOOFEE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMKKKOOFEE_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void CNBFDMNNDHM(::MoleMole::Battle::Entity* HODAIDNDKHD, ::System::Single IAHBCPBPMKH, ::System::Int32 KPPLBKCLENO, ::System::UInt32 DEDOHCODKHN, ::System::Single MBJNMGLEJCJ, ::System::Int32 HCNDMFCEPON)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::System::Int32, ::System::UInt32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LCMKKKOOFEE_CNBFDMNNDHM_OFFSET))(this, HODAIDNDKHD, IAHBCPBPMKH, KPPLBKCLENO, DEDOHCODKHN, MBJNMGLEJCJ, HCNDMFCEPON);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCMKKKOOFEE_NPOLNFDBOOD_OFFSET))(this);
	}
};
