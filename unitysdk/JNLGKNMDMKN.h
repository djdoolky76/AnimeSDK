#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIIBMCPDOEG;
class CMDIMAOAEIB;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JNLGKNMDMKN_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xBAB61F0)
#define JNLGKNMDMKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB61E0)

inline static constexpr unsigned int JNLGKNMDMKN_TypeDefinitionIndex = 77081;

	class JNLGKNMDMKN : public ::System::Object
	{
	public:
		::CMDIMAOAEIB* MNJAIGHOJID; // 0x10
		::System::Void _ctor(::CMDIMAOAEIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMDIMAOAEIB*))((::PBYTE)hIl2Cpp + JNLGKNMDMKN_CTOR_OFFSET))(this, a1);
		}

		::CIIBMCPDOEG* AKJABINEGDJ(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::CIIBMCPDOEG*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + JNLGKNMDMKN_AKJABINEGDJ_OFFSET))(this, a1, a2);
		}

	};
