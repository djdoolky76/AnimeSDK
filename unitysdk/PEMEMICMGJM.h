#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JGELGFLEHJF.h"
class BBJOIFLIONN;

#define PEMEMICMGJM_CTOR_OFFSET UNITYSDK_OFFSET(0xCAD3FE0)
#define PEMEMICMGJM_DFACNDFPDHK_OFFSET UNITYSDK_OFFSET(0xCAD4010)

inline static constexpr unsigned int PEMEMICMGJM_TypeDefinitionIndex = 76966;

	class PEMEMICMGJM : public ::System::Object
	{
	public:
		::BBJOIFLIONN* HCBGDLHMMHN; // 0x10
		::BBJOIFLIONN* HFBKCFMJHOB; // 0x18
		::System::UInt32 PBMLLIPBPLP; // 0x20
		::System::Void _ctor(::BBJOIFLIONN* a1, ::BBJOIFLIONN* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BBJOIFLIONN*, ::BBJOIFLIONN*, ::System::UInt32))((::PBYTE)hIl2Cpp + PEMEMICMGJM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::JGELGFLEHJF DFACNDFPDHK(::System::UInt32 a1)
		{
			return ((::JGELGFLEHJF(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEMEMICMGJM_DFACNDFPDHK_OFFSET))(this, a1);
		}

	};
