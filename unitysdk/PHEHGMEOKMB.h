#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define PHEHGMEOKMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96EB30)
#define PHEHGMEOKMB_PKOCDCNOAKH_OFFSET UNITYSDK_OFFSET(0x1D96E870)

inline static constexpr unsigned int PHEHGMEOKMB_TypeDefinitionIndex = 37329;

	class PHEHGMEOKMB : public ::System::Object
	{
	public:
		::System::Single KGNJBGHFPNO; // 0x10
		::System::Single PEDCEFMJCIM; // 0x14
		::System::Single DJEIMGGHMGM; // 0x18
		::System::Single NGMFBFBEJMA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHGMEOKMB_CTOR_OFFSET))(this);
		}

		::System::String* PKOCDCNOAKH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEHGMEOKMB_PKOCDCNOAKH_OFFSET))(this);
		}

	};
