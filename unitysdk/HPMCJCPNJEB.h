#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HPMCJCPNJEB;

#define HPMCJCPNJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED7730)
#define HPMCJCPNJEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CED7600)

inline static constexpr unsigned int HPMCJCPNJEB_TypeDefinitionIndex = 11262;

	class HPMCJCPNJEB : public ::System::Object
	{
	public:
		::System::Single JOACOBOICAF; // 0x10
		::System::Single JLLFPNIFOMB; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMCJCPNJEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HPMCJCPNJEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HPMCJCPNJEB*))((::PBYTE)hIl2Cpp + HPMCJCPNJEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
