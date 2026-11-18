#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LMEDFOINBOG;
namespace FlatBuffers { class ByteBuffer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CFCKIPEGOKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD87C0)

inline static constexpr unsigned int CFCKIPEGOKN_TypeDefinitionIndex = 29043;

class CFCKIPEGOKN : public ::System::Object
{
public:
	::System::Action_1<::LMEDFOINBOG*>* EOMCCGCJMII; // 0x10
	::System::Action* NPOLNFDBOOD; // 0x18
	::System::String* MGEDBKBHJPM; // 0x20
	::System::Action_1<::FlatBuffers::ByteBuffer*>* LNFENFDLMIG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCKIPEGOKN__CTOR_OFFSET))(this);
	}
};
