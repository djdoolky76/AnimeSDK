#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHPCBMLOBON;
namespace System { class Action; }

#define EHPCBMLOBON_DNLLFBBJCJK_LIBHFHMMMBB_OFFSET UNITYSDK_OFFSET(0x171111A0)
#define EHPCBMLOBON_DNLLFBBJCJK_LLLBNCNEABA_OFFSET UNITYSDK_OFFSET(0x17111260)
#define EHPCBMLOBON_DNLLFBBJCJK_NPKGPJKHOAM_OFFSET UNITYSDK_OFFSET(0x17111200)
#define EHPCBMLOBON_DNLLFBBJCJK__CTOR_OFFSET UNITYSDK_OFFSET(0x17111190)

inline static constexpr unsigned int EHPCBMLOBON_DNLLFBBJCJK_TypeDefinitionIndex = 67072;

class EHPCBMLOBON_DNLLFBBJCJK : public ::System::Object
{
public:
	::EHPCBMLOBON* KLHPEBKNIFB; // 0x10
	::System::Action* GJBHEJGENMI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPCBMLOBON_DNLLFBBJCJK__CTOR_OFFSET))(this);
	}

	::System::Void LIBHFHMMMBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPCBMLOBON_DNLLFBBJCJK_LIBHFHMMMBB_OFFSET))(this);
	}

	::System::Void NPKGPJKHOAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPCBMLOBON_DNLLFBBJCJK_NPKGPJKHOAM_OFFSET))(this);
	}

	::System::Void LLLBNCNEABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHPCBMLOBON_DNLLFBBJCJK_LLLBNCNEABA_OFFSET))(this);
	}
};
