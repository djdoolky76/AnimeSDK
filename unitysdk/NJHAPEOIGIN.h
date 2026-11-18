#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALGKMLLALFG;
class IGKIILKHLDB;
namespace System { class String; }

#define NJHAPEOIGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A54F0)

inline static constexpr unsigned int NJHAPEOIGIN_TypeDefinitionIndex = 84062;

class NJHAPEOIGIN : public ::System::Object
{
public:
	::ALGKMLLALFG* MHPNGBGGMMN; // 0x10
	::IGKIILKHLDB* GNFGBALGMOH; // 0x18
	::System::String* FBMNGFKILDG; // 0x20
	::System::Boolean MGHNLMOIGJB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHAPEOIGIN__CTOR_OFFSET))(this);
	}
};
