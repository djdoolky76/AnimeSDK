#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E865F6F8B8B44C1E.h"

namespace System { class String; }

#define E9146A5DED24C45F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9146A5DED24C45F_TypeDefinitionIndex = 7257;

class E9146A5DED24C45F : public ::E379DE61A548837D
{
public:
	::System::UInt32 B5EEBA0DF968F414; // 0x38
	::System::Byte _padding0[0x4];
	::AD61077CFCBEFAEA E51D05095F74E79C; // 0x40
	::AD61077CFCBEFAEA EFDE3C8B5ADD049A; // 0x48
	::E865F6F8B8B44C1E AF41532E7F7801AD; // 0x50
	::System::String* AA0967FA8CB1D945; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9146A5DED24C45F__CTOR_OFFSET))(this);
	}
};
