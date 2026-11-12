#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA8C910)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xDA8C5B0)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xDA8C690)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xDA8C600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData_EliteBonusSummarizer_TypeDefinitionIndex = 65899;

	class GridFightBonusServerData_EliteBonusSummarizer : public ::BCILMJOBEAD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA_ELITEBONUSSUMMARIZER_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
}
