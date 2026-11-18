#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class Action; }
namespace System { class String; }

#define IONMPBFCNPB_OFBLAAPPBPI_OFFSET UNITYSDK_OFFSET(0x197E66B0)

inline static constexpr unsigned int IONMPBFCNPB_TypeDefinitionIndex = 89672;

class IONMPBFCNPB : public ::System::Object
{
public:
	static ::System::Void OFBLAAPPBPI(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Boolean DOFCLPCLHOJ, ::System::String* CCFKGBIKEEJ, ::System::Action* DDCPDLKCBFN)
	{
		return ((::System::Void(*)(::LGCNEDCMPKM&, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + IONMPBFCNPB_OFBLAAPPBPI_OFFSET))(BKBGPKNGNMF, DOFCLPCLHOJ, CCFKGBIKEEJ, DDCPDLKCBFN);
	}
};
