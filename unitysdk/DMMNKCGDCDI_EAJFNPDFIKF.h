#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightPrayQuest; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DMMNKCGDCDI_EAJFNPDFIKF_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC65A0)
#define DMMNKCGDCDI_EAJFNPDFIKF_FDAFLPCLCEJ_OFFSET UNITYSDK_OFFSET(0xFEC6400)
#define DMMNKCGDCDI_EAJFNPDFIKF_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xFEC5E80)
#define DMMNKCGDCDI_EAJFNPDFIKF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xFEC6490)
#define DMMNKCGDCDI_EAJFNPDFIKF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xFEC5ED0)

	class DMMNKCGDCDI_EAJFNPDFIKF : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightPrayQuest* FIBOEKFNHNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_EAJFNPDFIKF_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_EAJFNPDFIKF_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_EAJFNPDFIKF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_EAJFNPDFIKF_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void FDAFLPCLCEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMMNKCGDCDI_EAJFNPDFIKF_FDAFLPCLCEJ_OFFSET))(this);
		}

	};
