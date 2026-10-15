#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNPCCOLHBIK_BNGPIFIDCPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x158DA6D0)
#define FNPCCOLHBIK_BNGPIFIDCPJ_HIOINDFNOJJ_OFFSET UNITYSDK_OFFSET(0x158DA6F0)
#define FNPCCOLHBIK_BNGPIFIDCPJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x158DAFC0)

inline static constexpr unsigned int FNPCCOLHBIK_BNGPIFIDCPJ_TypeDefinitionIndex = 60265;

	class FNPCCOLHBIK_BNGPIFIDCPJ : public ::System::Object
	{
	public:
		::System::UInt32 PIAOPODLCKO; // 0x10
		::System::UInt32 CCOKJJFCOFM; // 0x14
		::System::UInt32 LNNNLHCAJGG; // 0x18
		::System::UInt32 INAKMLFKHAM; // 0x1C
		::System::UInt32 IFDLFIBAFKE; // 0x20
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_BNGPIFIDCPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HIOINDFNOJJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_BNGPIFIDCPJ_HIOINDFNOJJ_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LMBKNCAIDLC()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_BNGPIFIDCPJ_LMBKNCAIDLC_OFFSET))(this);
		}

	};
