#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPFECFIKOM;
class JBGMFIFOMMG;
class JOOHEPGEHNK;
class MCPCIKHFBIO;

#define MCPCIKHFBIO_NFOBBCPOOIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8864A0)
#define MCPCIKHFBIO_NFOBBCPOOIL_CTOR_OFFSET UNITYSDK_OFFSET(0xB886490)

inline static constexpr unsigned int MCPCIKHFBIO_NFOBBCPOOIL_TypeDefinitionIndex = 79579;

	class MCPCIKHFBIO_NFOBBCPOOIL : public ::System::Object
	{
	public:
		::JBGMFIFOMMG* MPHBMLDHCHI; // 0x10
		::JOOHEPGEHNK* FPNMIGDJBIE; // 0x18
		::System::Void _ctor(::JOOHEPGEHNK* a1, ::JBGMFIFOMMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOOHEPGEHNK*, ::JBGMFIFOMMG*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL_CTOR_OFFSET))(this, a1, a2);
		}

		::MCPCIKHFBIO* BPLPBPMEODA(::DBPFECFIKOM* a1)
		{
			return ((::MCPCIKHFBIO*(*)(::PVOID, ::DBPFECFIKOM*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
