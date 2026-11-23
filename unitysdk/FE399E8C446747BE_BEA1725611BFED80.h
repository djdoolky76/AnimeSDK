#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEF0661810FEEC74.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FE399E8C446747BE_BEA1725611BFED80_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define FE399E8C446747BE_BEA1725611BFED80__CTOR_OFFSET UNITYSDK_OFFSET(0x2910A00)

inline static constexpr unsigned int FE399E8C446747BE_BEA1725611BFED80_TypeDefinitionIndex = 19706;

class FE399E8C446747BE_BEA1725611BFED80 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BEA1725611BFED80__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::FEF0661810FEEC74 Invoke(::System::Boolean EF85D3BF894B44EF, ::System::Object* AE17F8A19FAF8CBD)
	{
		return ((::FEF0661810FEEC74(*)(::PVOID, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BEA1725611BFED80_INVOKE_OFFSET))(this, EF85D3BF894B44EF, AE17F8A19FAF8CBD);
	}
};
