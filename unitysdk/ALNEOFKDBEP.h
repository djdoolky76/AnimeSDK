#pragma once
#include "unitysdk/unitysdk.h"
class CBEDDLHCKLD;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define ALNEOFKDBEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15570B10)
#define ALNEOFKDBEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15571230)
#define ALNEOFKDBEP_EEBGFNCIAHB_OFFSET UNITYSDK_OFFSET(0x15570ED0)
#define ALNEOFKDBEP_GOKOJHODEAK_OFFSET UNITYSDK_OFFSET(0x15571020)
#define ALNEOFKDBEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15570B90)

	class ALNEOFKDBEP
	{
	public:
		::NGFHCJIAOLH* ELJIPLEAKAP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CBEDDLHCKLD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CBEDDLHCKLD*))((::PBYTE)hIl2Cpp + ALNEOFKDBEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNEOFKDBEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALNEOFKDBEP_DISPOSE_OFFSET))(this);
		}

		::System::Void EEBGFNCIAHB(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + ALNEOFKDBEP_EEBGFNCIAHB_OFFSET))(this, a1, a2);
		}

		::System::Void GOKOJHODEAK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + ALNEOFKDBEP_GOKOJHODEAK_OFFSET))(this, a1, a2);
		}

	};
