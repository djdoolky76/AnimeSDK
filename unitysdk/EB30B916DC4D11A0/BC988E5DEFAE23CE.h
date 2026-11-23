#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class AF06FC2960666343;
namespace System { class Object; }

#define EB30B916DC4D11A0_BC988E5DEFAE23CE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define EB30B916DC4D11A0_BC988E5DEFAE23CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7D60)

namespace EB30B916DC4D11A0
{
	inline static constexpr unsigned int BC988E5DEFAE23CE_TypeDefinitionIndex = 15321;

	class BC988E5DEFAE23CE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + EB30B916DC4D11A0_BC988E5DEFAE23CE__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::AF06FC2960666343* AD0CAFBAFB8B01EA)
		{
			return ((::System::Void(*)(::PVOID, ::AF06FC2960666343*))((::PBYTE)hIl2Cpp + EB30B916DC4D11A0_BC988E5DEFAE23CE_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA);
		}
	};
}
