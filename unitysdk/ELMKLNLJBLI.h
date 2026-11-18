#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMPNFDAIJNB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DCGECPJFPMH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELMKLNLJBLI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E876B50)
#define ELMKLNLJBLI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E877060)
#define ELMKLNLJBLI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E876C20)
#define ELMKLNLJBLI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E877230)
#define ELMKLNLJBLI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E876FB0)
#define ELMKLNLJBLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E876B90)

inline static constexpr unsigned int ELMKLNLJBLI_TypeDefinitionIndex = 94636;

class ELMKLNLJBLI : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DCGECPJFPMH*>* JMINOGAOFIL; // 0x18
	::GMPNFDAIJNB DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKLNLJBLI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKLNLJBLI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELMKLNLJBLI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKLNLJBLI_PHOADBJGFBE_OFFSET))(this);
	}

	::DCGECPJFPMH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DCGECPJFPMH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELMKLNLJBLI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELMKLNLJBLI_MDGCOKBMLFG_OFFSET))(this);
	}
};
