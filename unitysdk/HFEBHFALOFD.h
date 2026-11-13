#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HFEBHFALOFD;

#define HFEBHFALOFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80ECE0)
#define HFEBHFALOFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E80EC50)

inline static constexpr unsigned int HFEBHFALOFD_TypeDefinitionIndex = 15557;

	class HFEBHFALOFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEBHFALOFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HFEBHFALOFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HFEBHFALOFD*))((::PBYTE)hIl2Cpp + HFEBHFALOFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
