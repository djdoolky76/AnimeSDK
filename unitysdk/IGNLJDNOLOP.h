#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENPMFBBEPN;
class FCOEMCEDLNL;
class IGNLJDNOLOP;

#define IGNLJDNOLOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF0E7F0)
#define IGNLJDNOLOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF0E6D0)

inline static constexpr unsigned int IGNLJDNOLOP_TypeDefinitionIndex = 14394;

	class IGNLJDNOLOP : public ::System::Object
	{
	public:
		::Il2CppArray<::CENPMFBBEPN*>* MGNHKOHFLPO; // 0x10
		::System::UInt32 HHDHIDNHCBI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNLJDNOLOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IGNLJDNOLOP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IGNLJDNOLOP*))((::PBYTE)hIl2Cpp + IGNLJDNOLOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
