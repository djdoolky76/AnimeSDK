#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class CIBOPFGCOMI;
class DMGLFMNEJGL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKBDMGOMCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15A836B0)
#define GKBDMGOMCFE_IFJAPGJBNBC_OFFSET UNITYSDK_OFFSET(0x15A831E0)
#define GKBDMGOMCFE_KGFGIDEBENC_OFFSET UNITYSDK_OFFSET(0x15A833C0)
#define GKBDMGOMCFE_NGBPJFKDPKK_OFFSET UNITYSDK_OFFSET(0x15A83320)
#define GKBDMGOMCFE_OKLNIJGAKAF_OFFSET UNITYSDK_OFFSET(0x15A83290)

inline static constexpr unsigned int GKBDMGOMCFE_TypeDefinitionIndex = 73368;

	class GKBDMGOMCFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CIBOPFGCOMI*>* BHNIHOCEACC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBDMGOMCFE_CTOR_OFFSET))(this);
		}

		::System::Void IFJAPGJBNBC(::CIBOPFGCOMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIBOPFGCOMI*))((::PBYTE)hIl2Cpp + GKBDMGOMCFE_IFJAPGJBNBC_OFFSET))(this, a1);
		}

		::System::Void OKLNIJGAKAF(::CIBOPFGCOMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIBOPFGCOMI*))((::PBYTE)hIl2Cpp + GKBDMGOMCFE_OKLNIJGAKAF_OFFSET))(this, a1);
		}

		::System::Void NGBPJFKDPKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBDMGOMCFE_NGBPJFKDPKK_OFFSET))(this);
		}

		::System::String* KGFGIDEBENC(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + GKBDMGOMCFE_KGFGIDEBENC_OFFSET))(this, a1, a2, a3, a4);
		}

	};
