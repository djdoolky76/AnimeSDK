#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPFECFIKOM;
class JBGMFIFOMMG;
class JOOHEPGEHNK;
class MCPCIKHFBIO;

#define MCPCIKHFBIO_NFOBBCPOOIL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x183C31F0)
#define MCPCIKHFBIO_NFOBBCPOOIL_CTOR_OFFSET UNITYSDK_OFFSET(0x183C31E0)

inline static constexpr unsigned int MCPCIKHFBIO_NFOBBCPOOIL_TypeDefinitionIndex = 82356;

	class MCPCIKHFBIO_NFOBBCPOOIL : public ::System::Object
	{
	public:
		::JOOHEPGEHNK* FPNMIGDJBIE; // 0x10
		::JBGMFIFOMMG* MPHBMLDHCHI; // 0x18
		::System::Void _ctor(::JOOHEPGEHNK* a1, ::JBGMFIFOMMG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JOOHEPGEHNK*, ::JBGMFIFOMMG*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL_CTOR_OFFSET))(this, a1, a2);
		}

		::MCPCIKHFBIO* BPLPBPMEODA(::DBPFECFIKOM* a1)
		{
			return ((::MCPCIKHFBIO*(*)(::PVOID, ::DBPFECFIKOM*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_NFOBBCPOOIL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
