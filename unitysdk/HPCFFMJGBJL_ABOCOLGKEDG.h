#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FGNEAMDEOLM;

#define HPCFFMJGBJL_ABOCOLGKEDG_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15BE5670)
#define HPCFFMJGBJL_ABOCOLGKEDG__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE5660)

inline static constexpr unsigned int HPCFFMJGBJL_ABOCOLGKEDG_TypeDefinitionIndex = 43208;

class HPCFFMJGBJL_ABOCOLGKEDG : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFFMJGBJL_ABOCOLGKEDG__CTOR_OFFSET))(this);
	}

	::FGNEAMDEOLM* BHEKKKNPHAM()
	{
		return ((::FGNEAMDEOLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFFMJGBJL_ABOCOLGKEDG_BHEKKKNPHAM_OFFSET))(this);
	}
};
