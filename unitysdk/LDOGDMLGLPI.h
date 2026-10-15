#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class DMGLFMNEJGL;
class EFIDOJDHNGJ;
namespace System { class String; }

#define LDOGDMLGLPI_CTOR_OFFSET UNITYSDK_OFFSET(0xB643100)
#define LDOGDMLGLPI_DODBOKHHICP_OFFSET UNITYSDK_OFFSET(0xB641CD0)

inline static constexpr unsigned int LDOGDMLGLPI_TypeDefinitionIndex = 73423;

	class LDOGDMLGLPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOGDMLGLPI_CTOR_OFFSET))(this);
		}

		::System::String* DODBOKHHICP(::EFIDOJDHNGJ* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3)
		{
			return ((::System::String*(*)(::PVOID, ::EFIDOJDHNGJ*, ::IELMGLNMLFN, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + LDOGDMLGLPI_DODBOKHHICP_OFFSET))(this, a1, a2, a3);
		}

	};
