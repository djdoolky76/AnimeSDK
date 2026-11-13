#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DIMDDOGLLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9520)
#define DIMDDOGLLDA_DEBNDBPNNEC_OFFSET UNITYSDK_OFFSET(0x18EC93F0)
#define DIMDDOGLLDA_FIHHGHOOMHF_OFFSET UNITYSDK_OFFSET(0x18EC94D0)
#define DIMDDOGLLDA_KAGGMAIBEIF_OFFSET UNITYSDK_OFFSET(0x18EC9480)
#define DIMDDOGLLDA_KJABBNPOHCF_OFFSET UNITYSDK_OFFSET(0x18EC9430)

inline static constexpr unsigned int DIMDDOGLLDA_TypeDefinitionIndex = 73148;

	class DIMDDOGLLDA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDDOGLLDA_CTOR_OFFSET))(this);
		}

		::System::Void DEBNDBPNNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDDOGLLDA_DEBNDBPNNEC_OFFSET))(this);
		}

		::System::String* KJABBNPOHCF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIMDDOGLLDA_KJABBNPOHCF_OFFSET))(this);
		}

		::System::Void KAGGMAIBEIF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIMDDOGLLDA_KAGGMAIBEIF_OFFSET))(this, a1);
		}

		::System::Void FIHHGHOOMHF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DIMDDOGLLDA_FIHHGHOOMHF_OFFSET))(this, a1);
		}

	};
