#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define ABC_MISCS_MONOPACKAGEINFO_FFD5791D31AD0425_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define ABC_MISCS_MONOPACKAGEINFO_FFD5791D31AD0425__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF4420)

namespace ABC::Miscs
{
	inline static constexpr unsigned int MonoPackageInfo_FFD5791D31AD0425_TypeDefinitionIndex = 8136;

	class MonoPackageInfo_FFD5791D31AD0425 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ABC_MISCS_MONOPACKAGEINFO_FFD5791D31AD0425__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Boolean Invoke(::System::IntPtr FD5BC9275738BC03, ::System::UInt32 F62C50790101B70F)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + ABC_MISCS_MONOPACKAGEINFO_FFD5791D31AD0425_INVOKE_OFFSET))(this, FD5BC9275738BC03, F62C50790101B70F);
		}
	};
}
