#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
class OMINPDAIBLP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHHINNEPJIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC0D80)
#define HHHINNEPJIJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x15CC0BC0)
#define HHHINNEPJIJ_NEGKBDJPIJK_OFFSET UNITYSDK_OFFSET(0x15CC0C70)
#define HHHINNEPJIJ_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x15CC0D10)
#define HHHINNEPJIJ_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x15CC0C10)

inline static constexpr unsigned int HHHINNEPJIJ_TypeDefinitionIndex = 64377;

	class HHHINNEPJIJ : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MLHLKONMMFO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_UPDATESTART_OFFSET))(this);
		}

		::System::Void NEGKBDJPIJK(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_NEGKBDJPIJK_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_UPDATEDONE_OFFSET))(this);
		}

	};
