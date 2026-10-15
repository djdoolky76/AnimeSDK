#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class String; }

#define JOJHAPEHLHP_CEGLKMHPHHK_OFFSET UNITYSDK_OFFSET(0xB2A14C0)
#define JOJHAPEHLHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A16B0)
#define JOJHAPEHLHP_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xB2A1160)
#define JOJHAPEHLHP_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB2A1110)

	class JOJHAPEHLHP : public ::System::Object
	{
	public:
		// static const ::System::String* HFAMELOEAAO; // 0x0
		// static const ::System::String* BKBKIGOFBDD; // 0x0
		// static const ::System::String* CEIFHGGLLJJ; // 0x0
		// static const ::System::String* MLPBCFOGNOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJHAPEHLHP_CTOR_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJHAPEHLHP_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + JOJHAPEHLHP_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ControlType CEGLKMHPHHK()
		{
			return ((::RPG::Client::ControlType(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJHAPEHLHP_CEGLKMHPHHK_OFFSET))(this);
		}

	};
