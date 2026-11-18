#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHMAIBOFHML;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define OCIFKICBDKO_FHEHGCBOGLP_FDOMKHIHIMF_OFFSET UNITYSDK_OFFSET(0x13A4A990)
#define OCIFKICBDKO_FHEHGCBOGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A4A980)

inline static constexpr unsigned int OCIFKICBDKO_FHEHGCBOGLP_TypeDefinitionIndex = 47830;

class OCIFKICBDKO_FHEHGCBOGLP : public ::System::Object
{
public:
	::System::Action_1<::GHMAIBOFHML*>* EJGDHCIBCJH; // 0x10
	::System::Int32 CAAMAPMNIEF; // 0x18
	::System::Int32 HAHAJFAPNHA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIFKICBDKO_FHEHGCBOGLP__CTOR_OFFSET))(this);
	}

	::System::Void FDOMKHIHIMF(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OCIFKICBDKO_FHEHGCBOGLP_FDOMKHIHIMF_OFFSET))(this, DJCNCELJPOM);
	}
};
