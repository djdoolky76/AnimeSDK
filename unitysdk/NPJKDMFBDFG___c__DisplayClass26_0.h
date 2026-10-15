#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace System { class String; }

#define NPJKDMFBDFG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFD220)
#define NPJKDMFBDFG___C__DISPLAYCLASS26_0__LOADPROFILE_B__0_OFFSET UNITYSDK_OFFSET(0xBD04B00)

inline static constexpr unsigned int NPJKDMFBDFG___c__DisplayClass26_0_TypeDefinitionIndex = 49430;

	class NPJKDMFBDFG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::EnviromentSystemV2Space::EnvProfileV2* ret; // 0x10
		::System::String* path; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _LoadProfile_b__0(::EnviromentSystemV2Space::EnvProfileV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvProfileV2*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__DISPLAYCLASS26_0__LOADPROFILE_B__0_OFFSET))(this, a1);
		}

	};
