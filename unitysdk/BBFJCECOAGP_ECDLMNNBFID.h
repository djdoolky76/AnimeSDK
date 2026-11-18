#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FGNEAMDEOLM;

#define BBFJCECOAGP_ECDLMNNBFID_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x18223090)
#define BBFJCECOAGP_ECDLMNNBFID__CTOR_OFFSET UNITYSDK_OFFSET(0x18223080)

inline static constexpr unsigned int BBFJCECOAGP_ECDLMNNBFID_TypeDefinitionIndex = 66800;

class BBFJCECOAGP_ECDLMNNBFID : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFJCECOAGP_ECDLMNNBFID__CTOR_OFFSET))(this);
	}

	::FGNEAMDEOLM* BHEKKKNPHAM()
	{
		return ((::FGNEAMDEOLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBFJCECOAGP_ECDLMNNBFID_BHEKKKNPHAM_OFFSET))(this);
	}
};
