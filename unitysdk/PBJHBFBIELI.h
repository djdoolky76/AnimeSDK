#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCNPEEBMGLH.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBJHBFBIELI_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7A0090)
#define PBJHBFBIELI_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7A0080)
#define PBJHBFBIELI_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x7A00A0)
#define PBJHBFBIELI_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x79FFE0)

inline static constexpr unsigned int PBJHBFBIELI_TypeDefinitionIndex = 60376;

struct alignas(8) PBJHBFBIELI
{
	::System::Int32 KEDBFHFLBHI; // 0x10
	::System::Int32 GMKDELAFJEP; // 0x14
	::System::Int32 LLDMEMMJPDP; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::JCNPEEBMGLH>* LJHPPIKKHGJ; // 0x20

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PBJHBFBIELI_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJHBFBIELI_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PBJHBFBIELI_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJHBFBIELI_OAJEIDFGCII_OFFSET))(this);
	}
};
