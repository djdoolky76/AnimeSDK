#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOOKOJCOAA;
namespace System { template <typename T> class Action_1; }

#define HFGEKEIELBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6CA50)
#define HFGEKEIELBI_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0x15C6CC50)
#define HFGEKEIELBI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15C6CAA0)

inline static constexpr unsigned int HFGEKEIELBI_TypeDefinitionIndex = 81910;

	class HFGEKEIELBI : public ::System::Object
	{
	public:
		::CIOOKOJCOAA* IJLEOHJJHCM; // 0x10
		::System::Action_1<::System::Boolean>* EPHKMPOGBBL; // 0x18
		::System::Boolean NFOCONIIKIF; // 0x20
		::System::Void _ctor(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + HFGEKEIELBI_CTOR_OFFSET))(this, a1);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGEKEIELBI_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGEKEIELBI_NECEALBHFAB_OFFSET))(this);
		}

	};
