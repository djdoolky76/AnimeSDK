#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightPhanionUniqueTraitEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DMFNKKOOBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x18695140)
#define DMFNKKOOBLF_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0x186955C0)
#define DMFNKKOOBLF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x18695190)
#define DMFNKKOOBLF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x18695650)
#define DMFNKKOOBLF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x186953F0)

inline static constexpr unsigned int DMFNKKOOBLF_TypeDefinitionIndex = 67221;

	class DMFNKKOOBLF : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightPhanionUniqueTraitEffect* LBNBPMIFDHI; // 0x18
		::System::UInt32 PGGCJPJPKLD; // 0x20
		::System::UInt32 PEFGNHCHOAB; // 0x24
		::System::Void _ctor(::RPG::Client::GridFightPhanionUniqueTraitEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPhanionUniqueTraitEffect*))((::PBYTE)hIl2Cpp + DMFNKKOOBLF_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMFNKKOOBLF_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMFNKKOOBLF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DMFNKKOOBLF_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFNKKOOBLF_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
