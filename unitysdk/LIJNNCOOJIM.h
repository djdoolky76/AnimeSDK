#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightPreparationEffectEvent; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIJNNCOOJIM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF6E6B0)
#define LIJNNCOOJIM_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xBF6E080)
#define LIJNNCOOJIM_IPFHHLGHJAI_OFFSET UNITYSDK_OFFSET(0xBF6E300)
#define LIJNNCOOJIM_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xBF6DBC0)
#define LIJNNCOOJIM_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0xBF6E3F0)
#define LIJNNCOOJIM_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xBF6E0E0)
#define LIJNNCOOJIM_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xBF6DCB0)
#define LIJNNCOOJIM_UPDATESTART_OFFSET UNITYSDK_OFFSET(0xBF6DC10)

inline static constexpr unsigned int LIJNNCOOJIM_TypeDefinitionIndex = 66722;

	class LIJNNCOOJIM : public ::BCILMJOBEAD
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPreparationEffectEvent*>* IOKGLAAJOFG; // 0x18
		::System::UInt32 GIIELBLKFBN; // 0x20
		::System::UInt32 NJEGPMFKHBG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_PREUPDATEDONE_OFFSET))(this);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_FDAFLPCLCEJ_OFFSET))(this);
		}

		::System::Boolean IPFHHLGHJAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM_IPFHHLGHJAI_OFFSET))(this);
		}

	};
