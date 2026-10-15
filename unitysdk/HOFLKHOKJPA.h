#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
class NCENMPKDKFK;
namespace RPG::GameCore { class TaskContext; }

#define HOFLKHOKJPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB34F0)
#define HOFLKHOKJPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DB3600)
#define HOFLKHOKJPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB3760)

inline static constexpr unsigned int HOFLKHOKJPA_TypeDefinitionIndex = 55046;

	class HOFLKHOKJPA
	{
	public:
		::KFELGAIGHAP* LNMOCNDILJN; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NCENMPKDKFK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NCENMPKDKFK*))((::PBYTE)hIl2Cpp + HOFLKHOKJPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFLKHOKJPA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFLKHOKJPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
