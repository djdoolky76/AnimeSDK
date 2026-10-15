#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAANKGHDHCB;
namespace System { class String; }

#define KAANKGHDHCB_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D08D0)
#define KAANKGHDHCB_JIJEOJIJEBA_OFFSET UNITYSDK_OFFSET(0xB2D0950)
#define KAANKGHDHCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB2D08E0)

inline static constexpr unsigned int KAANKGHDHCB_TypeDefinitionIndex = 82296;

	class KAANKGHDHCB : public ::System::Object
	{
	public:
		::System::String* BOOJMDODFBI; // 0x10
		::System::Int32 HDCADKFBLPF; // 0x18
		::System::Int32 CJCCLNEDGKB; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + KAANKGHDHCB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAANKGHDHCB_TOSTRING_OFFSET))(this);
		}

		::System::Void JIJEOJIJEBA(::KAANKGHDHCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAANKGHDHCB*))((::PBYTE)hIl2Cpp + KAANKGHDHCB_JIJEOJIJEBA_OFFSET))(this, a1);
		}

	};
