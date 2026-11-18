#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJOOGIENMPA.h"
#include "unitysdk/KMHNILEOAPL.h"
#include "unitysdk/LICBJOLGMLE.h"
#include "unitysdk/LPHONAKNIJI.h"
#include "unitysdk/PBJHBFBIELI.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCKAJOBLNCA_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x151BFF50)
#define MCKAJOBLNCA_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x151C0550)
#define MCKAJOBLNCA_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x151BFEB0)
#define MCKAJOBLNCA__CTOR_OFFSET UNITYSDK_OFFSET(0x151C0A60)

inline static constexpr unsigned int MCKAJOBLNCA_TypeDefinitionIndex = 56471;

class MCKAJOBLNCA : public ::System::Object
{
public:
	::LPHONAKNIJI FNNJHONKKJK; // 0x10
	::PBJHBFBIELI DEHBDJAOOKL; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* JAJAPHBOGEE; // 0x40
	::System::Collections::Generic::List_1<::LICBJOLGMLE>* JLNCOICNMMA; // 0x48
	::System::String* BIMPNEDLAED; // 0x50
	::System::Collections::Generic::List_1<::EJOOGIENMPA>* NLHHNCBHNDO; // 0x58
	::KMHNILEOAPL PFIMLFPCINP; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKAJOBLNCA__CTOR_OFFSET))(this);
	}

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MCKAJOBLNCA_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKAJOBLNCA_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MCKAJOBLNCA_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
