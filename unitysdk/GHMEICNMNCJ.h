#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BPHGNMNLLHF;
class JNPEPJILBIJ;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHMEICNMNCJ_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x15B1D210)
#define GHMEICNMNCJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15B1D0B0)
#define GHMEICNMNCJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15B1D190)
#define GHMEICNMNCJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15B1D340)
#define GHMEICNMNCJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15B1D050)
#define GHMEICNMNCJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B1D100)
#define GHMEICNMNCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1D180)

inline static constexpr unsigned int GHMEICNMNCJ_TypeDefinitionIndex = 64602;

class GHMEICNMNCJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xDA; // 0x0
	::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* FHBAHEJNAJN; // 0x48
	::MoleMole::Config::ConfigTrainingRoom* BJBIHEPHMOI; // 0x50
	::JNPEPJILBIJ* EGGOCICCFJC; // 0x58
	::MoleMole::Battle::Entity* BAFLCMENJLN; // 0x60
	::System::Int32 MAOCFFFKJCF; // 0x68
	::System::Boolean PJGOJCOFHFE; // 0x6C
	::System::Byte _padding0[0x3];
	::System::Double IJFHMAFFDFO; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHMEICNMNCJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMEICNMNCJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMEICNMNCJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMEICNMNCJ_GETCLASSID_OFFSET))(this);
	}

	static ::GHMEICNMNCJ* JFDOOELFAOA()
	{
		return ((::GHMEICNMNCJ*(*)())((::PBYTE)hIl2Cpp + GHMEICNMNCJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMEICNMNCJ_GALGFCPKMGC_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHMEICNMNCJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
