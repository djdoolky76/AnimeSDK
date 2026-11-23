#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }

#define BE874EBF3A5FDC4F_AC242D32CF6E6617_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define BE874EBF3A5FDC4F_AC242D32CF6E6617__CTOR_OFFSET UNITYSDK_OFFSET(0x27E21E0)

namespace BE874EBF3A5FDC4F
{
	inline static constexpr unsigned int AC242D32CF6E6617_TypeDefinitionIndex = 11452;

	class AC242D32CF6E6617 : public ::System::MulticastDelegate
	{
	public:
		::System::Void Invoke(::System::Object* AD0CAFBAFB8B01EA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BE874EBF3A5FDC4F_AC242D32CF6E6617_INVOKE_OFFSET))(this, AD0CAFBAFB8B01EA);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BE874EBF3A5FDC4F_AC242D32CF6E6617__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
