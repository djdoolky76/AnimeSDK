#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMHNILEOAPL.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }

#define MNCENPBGGGH_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x151EC310)
#define MNCENPBGGGH_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x151EC460)
#define MNCENPBGGGH_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x151EC270)
#define MNCENPBGGGH__CTOR_OFFSET UNITYSDK_OFFSET(0x151EC510)

inline static constexpr unsigned int MNCENPBGGGH_TypeDefinitionIndex = 78556;

class MNCENPBGGGH : public ::System::Object
{
public:
	::KMHNILEOAPL PFIMLFPCINP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCENPBGGGH__CTOR_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MNCENPBGGGH_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCENPBGGGH_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MNCENPBGGGH_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
