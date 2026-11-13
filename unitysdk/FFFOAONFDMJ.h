#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"
class HLFMLCCHMCA;

#define FFFOAONFDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x2096A590)
#define FFFOAONFDMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2096A6F0)
#define FFFOAONFDMJ_FDAHMCGCHOF_OFFSET UNITYSDK_OFFSET(0x2096A860)
#define FFFOAONFDMJ_KAMKOOCGNLK_OFFSET UNITYSDK_OFFSET(0x2096A890)
#define FFFOAONFDMJ_NJEFKNKHDML_OFFSET UNITYSDK_OFFSET(0x2096A960)

inline static constexpr unsigned int FFFOAONFDMJ_TypeDefinitionIndex = 44905;

	class FFFOAONFDMJ : public ::System::Object
	{
	public:
		::Il2CppArray<::HLFMLCCHMCA*>* KGENILBEMJG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFOAONFDMJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFOAONFDMJ_DISPOSE_OFFSET))(this);
		}

		::HLFMLCCHMCA* FDAHMCGCHOF(::RPG::Client::Multithread::SchedulerType a1)
		{
			return ((::HLFMLCCHMCA*(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + FFFOAONFDMJ_FDAHMCGCHOF_OFFSET))(this, a1);
		}

		::System::Void KAMKOOCGNLK(::RPG::Client::Multithread::SchedulerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + FFFOAONFDMJ_KAMKOOCGNLK_OFFSET))(this, a1);
		}

		::System::Void NJEFKNKHDML(::RPG::Client::Multithread::SchedulerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType))((::PBYTE)hIl2Cpp + FFFOAONFDMJ_NJEFKNKHDML_OFFSET))(this, a1);
		}

	};
