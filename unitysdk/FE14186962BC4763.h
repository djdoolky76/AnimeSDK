#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB893667BB6F371B.h"
#include "unitysdk/System/Object.h"

class E2974D7451932257;
class EBF66B352459CA3D;
namespace System { class String; }

#define FE14186962BC4763__CTOR_OFFSET UNITYSDK_OFFSET(0x18347D0)

inline static constexpr unsigned int FE14186962BC4763_TypeDefinitionIndex = 1178;

class FE14186962BC4763 : public ::System::Object
{
public:
	::E2974D7451932257* EA8C2FD788715BB5; // 0x10
	::EBF66B352459CA3D* A7A84FFB4E4AB7C3; // 0x18
	::System::String* B2A204654E0BBFC6; // 0x20
	::AB893667BB6F371B F34D5A636FAD1DD0; // 0x28
	::System::Int64 BED8A3251E180B80; // 0x48
	::System::Boolean FAC55700A212D77E; // 0x50
	::System::Boolean B0C8C064F4796F06; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE14186962BC4763__CTOR_OFFSET))(this);
	}
};
