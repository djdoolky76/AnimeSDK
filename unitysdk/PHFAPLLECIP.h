#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class AGCPAMNLCGN;
class PHFAPLLECIP;

#define PHFAPLLECIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC243C30)
#define PHFAPLLECIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC243E50)
#define PHFAPLLECIP_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC243DD0)
#define PHFAPLLECIP_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC243CE0)

inline static constexpr unsigned int PHFAPLLECIP_TypeDefinitionIndex = 78163;

	class PHFAPLLECIP : public ::AJHHFMBOCEN
	{
	public:
		::AGCPAMNLCGN* JMMECHDFLKH; // 0x20
		::System::UInt64 EMCIENJKEJM; // 0x28
		::System::UInt64 ACHFMBOHKHL; // 0x30
		::System::Single IPEKKDJPLGO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFAPLLECIP_CTOR_OFFSET))(this);
		}

		static ::PHFAPLLECIP* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::PHFAPLLECIP*(*)(::AGCPAMNLCGN*, ::System::UInt64, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + PHFAPLLECIP_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFAPLLECIP_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFAPLLECIP_ONCLEAR_OFFSET))(this);
		}

	};
