#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEF0661810FEEC74.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define FE399E8C446747BE_BA359093BD202C6D_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define FE399E8C446747BE_BA359093BD202C6D__CTOR_OFFSET UNITYSDK_OFFSET(0x2910B90)

inline static constexpr unsigned int FE399E8C446747BE_BA359093BD202C6D_TypeDefinitionIndex = 19703;

class FE399E8C446747BE_BA359093BD202C6D : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BA359093BD202C6D__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::System::UInt32 B8C2BE746C5C8B42, ::System::IntPtr EEBF0BEAE56EB16D, ::FEF0661810FEEC74 FD3C7501B6320E56, ::System::Object* AE17F8A19FAF8CBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::FEF0661810FEEC74, ::System::Object*))((::PBYTE)hIl2Cpp + FE399E8C446747BE_BA359093BD202C6D_INVOKE_OFFSET))(this, B8C2BE746C5C8B42, EEBF0BEAE56EB16D, FD3C7501B6320E56, AE17F8A19FAF8CBD);
	}
};
