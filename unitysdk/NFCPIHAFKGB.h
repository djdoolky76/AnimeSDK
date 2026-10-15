#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NFCPIHAFKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C956510)

inline static constexpr unsigned int NFCPIHAFKGB_TypeDefinitionIndex = 42112;

	class NFCPIHAFKGB : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCPIHAFKGB_CTOR_OFFSET))(this);
		}

	};
