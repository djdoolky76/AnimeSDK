#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class OMINPDAIBLP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHHINNEPJIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16C1B1C0)
#define HHHINNEPJIJ_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16C1B000)
#define HHHINNEPJIJ_UPDATEAUGMENTADD_OFFSET UNITYSDK_OFFSET(0x16C1B0B0)
#define HHHINNEPJIJ_UPDATEDONE_OFFSET UNITYSDK_OFFSET(0x16C1B150)
#define HHHINNEPJIJ_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x16C1B050)

inline static constexpr unsigned int HHHINNEPJIJ_TypeDefinitionIndex = 65824;

	class HHHINNEPJIJ : public ::RPG::Client::GridFightUpdateSummarizer
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

		::System::Void UpdateAugmentAdd(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_UPDATEAUGMENTADD_OFFSET))(this, a1);
		}

		::System::Void UpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHINNEPJIJ_UPDATEDONE_OFFSET))(this);
		}

	};
