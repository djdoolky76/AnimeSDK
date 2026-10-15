#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define EGDNALHEHJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50320)

inline static constexpr unsigned int EGDNALHEHJD_TypeDefinitionIndex = 42882;

	class EGDNALHEHJD : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::System::Boolean MEBCGCKPOBH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDNALHEHJD_CTOR_OFFSET))(this);
		}

	};
