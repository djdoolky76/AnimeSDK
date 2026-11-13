#pragma once
#include "unitysdk/unitysdk.h"
class PKKNEBGOION;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryCancelEnterRegion; }

#define NJMKALMANFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A79BB90)
#define NJMKALMANFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A79BBC0)
#define NJMKALMANFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A79BC50)
#define NJMKALMANFH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A79BC00)

inline static constexpr unsigned int NJMKALMANFH_TypeDefinitionIndex = 60072;

	class NJMKALMANFH
	{
	public:
		::PKKNEBGOION* AABBECIEAAP; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryCancelEnterRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryCancelEnterRegion*))((::PBYTE)hIl2Cpp + NJMKALMANFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMKALMANFH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMKALMANFH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMKALMANFH_ONTASKBEGIN_OFFSET))(this);
		}

	};
