#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightTrailblazeEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define ENPGLECKFKE_CTOR_OFFSET UNITYSDK_OFFSET(0x188169E0)
#define ENPGLECKFKE_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x18816A30)
#define ENPGLECKFKE_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x18816F00)
#define ENPGLECKFKE_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x18816E90)

inline static constexpr unsigned int ENPGLECKFKE_TypeDefinitionIndex = 67272;

	class ENPGLECKFKE : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightTrailblazeEffect* LBNBPMIFDHI; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTrailblazeEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrailblazeEffect*))((::PBYTE)hIl2Cpp + ENPGLECKFKE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ENPGLECKFKE_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPGLECKFKE_UPDATESTART_OFFSET))(this);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPGLECKFKE_PREUPDATEDONE_OFFSET))(this);
		}

	};
