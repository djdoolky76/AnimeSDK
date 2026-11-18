#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECBKDFKJJGJ;
namespace System { class Action; }

#define PFKCACMHPCP_BFHIILLPKNI_DJKIKHPDFEH_OFFSET UNITYSDK_OFFSET(0x178C4B80)
#define PFKCACMHPCP_BFHIILLPKNI__CTOR_OFFSET UNITYSDK_OFFSET(0x178C4B70)

inline static constexpr unsigned int PFKCACMHPCP_BFHIILLPKNI_TypeDefinitionIndex = 50324;

class PFKCACMHPCP_BFHIILLPKNI : public ::System::Object
{
public:
	::System::Action* MGAKJHJAGJI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCACMHPCP_BFHIILLPKNI__CTOR_OFFSET))(this);
	}

	::System::Void DJKIKHPDFEH(::ECBKDFKJJGJ* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::ECBKDFKJJGJ*))((::PBYTE)hIl2Cpp + PFKCACMHPCP_BFHIILLPKNI_DJKIKHPDFEH_OFFSET))(this, DJCNCELJPOM);
	}
};
