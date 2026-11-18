#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCBFNKIPOPJ;
namespace System { template <typename T> class Action_1; }

#define HCBFNKIPOPJ_BPPMAKHCACL_MOIMPOKELLC_OFFSET UNITYSDK_OFFSET(0x19DF0D60)
#define HCBFNKIPOPJ_BPPMAKHCACL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF0D50)

inline static constexpr unsigned int HCBFNKIPOPJ_BPPMAKHCACL_TypeDefinitionIndex = 60439;

class HCBFNKIPOPJ_BPPMAKHCACL : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* HMKFOAOLFIC; // 0x10
	::HCBFNKIPOPJ* KLHPEBKNIFB; // 0x18
	::System::Single PKBLONAIJHN; // 0x20
	::System::UInt32 IHEAAOINMFF; // 0x24
	::System::Int32 CEBMFCOCHJF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_BPPMAKHCACL__CTOR_OFFSET))(this);
	}

	::System::Void MOIMPOKELLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBFNKIPOPJ_BPPMAKHCACL_MOIMPOKELLC_OFFSET))(this);
	}
};
