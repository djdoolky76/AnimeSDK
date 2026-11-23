#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AF4A699F560B4069_FF72460ABDFBDF78_F2D93B505492F1DD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define AF4A699F560B4069_FF72460ABDFBDF78_F2D93B505492F1DD__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

namespace AF4A699F560B4069
{
	inline static constexpr unsigned int FF72460ABDFBDF78_F2D93B505492F1DD_TypeDefinitionIndex = 17256;

	class FF72460ABDFBDF78_F2D93B505492F1DD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_F2D93B505492F1DD__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_F2D93B505492F1DD_INVOKE_OFFSET))(this, E97E8D008427A296);
		}
	};
}
