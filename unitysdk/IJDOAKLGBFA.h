#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFIILHCFHPC;
class NAGJNOOBLKB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJDOAKLGBFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1645B160)
#define IJDOAKLGBFA_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1645AD60)
#define IJDOAKLGBFA_FBIELOIIFFG_OFFSET UNITYSDK_OFFSET(0x1645A7E0)
#define IJDOAKLGBFA_FPINCKKBNIF_OFFSET UNITYSDK_OFFSET(0x1645ACE0)
#define IJDOAKLGBFA_GHBONMLGHFG_OFFSET UNITYSDK_OFFSET(0x1645A860)
#define IJDOAKLGBFA_LAIGPDBDNCL_OFFSET UNITYSDK_OFFSET(0x1645A6B0)
#define IJDOAKLGBFA_LFJFFINOLHG_OFFSET UNITYSDK_OFFSET(0x1645ABA0)
#define IJDOAKLGBFA_LICHDOMHPBE_OFFSET UNITYSDK_OFFSET(0x1645AA00)
#define IJDOAKLGBFA_NOKCDLMPKBF_OFFSET UNITYSDK_OFFSET(0x1645AC80)
#define IJDOAKLGBFA_PBLOPPKGIKE_OFFSET UNITYSDK_OFFSET(0x1645A990)
#define IJDOAKLGBFA_PMCFDGMFLGF_OFFSET UNITYSDK_OFFSET(0x1645AB10)

inline static constexpr unsigned int IJDOAKLGBFA_TypeDefinitionIndex = 66733;

	class IJDOAKLGBFA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* KCMDOAHPLFA; // 0x10
		::System::Collections::Generic::List_1<::NAGJNOOBLKB*>* DFNAFGGOINE; // 0x18
		::System::Boolean LINNHMPNCJG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_CTOR_OFFSET))(this);
		}

		::NAGJNOOBLKB* LAIGPDBDNCL(::System::UInt32 a1)
		{
			return ((::NAGJNOOBLKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_LAIGPDBDNCL_OFFSET))(this, a1);
		}

		::NAGJNOOBLKB* GHBONMLGHFG(::System::UInt32 a1)
		{
			return ((::NAGJNOOBLKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_GHBONMLGHFG_OFFSET))(this, a1);
		}

		::System::Boolean PBLOPPKGIKE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_PBLOPPKGIKE_OFFSET))(this, a1);
		}

		::NAGJNOOBLKB* PMCFDGMFLGF(::System::UInt32 a1)
		{
			return ((::NAGJNOOBLKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_PMCFDGMFLGF_OFFSET))(this, a1);
		}

		::System::Int32 LICHDOMHPBE(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_LICHDOMHPBE_OFFSET))(this, a1);
		}

		::IFIILHCFHPC* LFJFFINOLHG(::System::UInt32 a1)
		{
			return ((::IFIILHCFHPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_LFJFFINOLHG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::NAGJNOOBLKB*>* FBIELOIIFFG()
		{
			return ((::System::Collections::Generic::List_1<::NAGJNOOBLKB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_FBIELOIIFFG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FPINCKKBNIF()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_FPINCKKBNIF_OFFSET))(this);
		}

		::System::Void NOKCDLMPKBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_NOKCDLMPKBF_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDOAKLGBFA_DIOEAJEHHND_OFFSET))(this);
		}

	};
