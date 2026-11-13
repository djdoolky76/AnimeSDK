#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KGOPFEPDNAN;

#define KGOPFEPDNAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F41CFF0)
#define KGOPFEPDNAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F41D000)
#define KGOPFEPDNAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F41CFA0)

inline static constexpr unsigned int KGOPFEPDNAN_TypeDefinitionIndex = 23040;

	class KGOPFEPDNAN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ACADELCDGOB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOPFEPDNAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KGOPFEPDNAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGOPFEPDNAN*))((::PBYTE)hIl2Cpp + KGOPFEPDNAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KGOPFEPDNAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KGOPFEPDNAN*))((::PBYTE)hIl2Cpp + KGOPFEPDNAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
