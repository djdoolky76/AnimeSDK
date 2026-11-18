#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FDJHAKJKKJE_BMEAEGOHDNK_OMELBKOLAMM_OFFSET UNITYSDK_OFFSET(0x169C9E50)
#define FDJHAKJKKJE_BMEAEGOHDNK__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9E40)

inline static constexpr unsigned int FDJHAKJKKJE_BMEAEGOHDNK_TypeDefinitionIndex = 44657;

class FDJHAKJKKJE_BMEAEGOHDNK : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::Action_1<::System::String*>* NPFIONPDFED; // 0x18
	::System::Action_1<::System::Single>* HAAJELGELCC; // 0x20
	::System::Single OGKEBCPEPED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_BMEAEGOHDNK__CTOR_OFFSET))(this);
	}

	::System::Void OMELBKOLAMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJHAKJKKJE_BMEAEGOHDNK_OMELBKOLAMM_OFFSET))(this);
	}
};
