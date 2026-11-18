#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NLAGIAKDMKD_PKKHBNGNECF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFD06F00)
#define NLAGIAKDMKD_PKKHBNGNECF__CTOR_OFFSET UNITYSDK_OFFSET(0xFD06EF0)

inline static constexpr unsigned int NLAGIAKDMKD_PKKHBNGNECF_TypeDefinitionIndex = 78360;

class NLAGIAKDMKD_PKKHBNGNECF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_PKKHBNGNECF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGIAKDMKD_PKKHBNGNECF_PNGOHNLELDJ_OFFSET))(this);
	}
};
