#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AF4A699F560B4069_FF72460ABDFBDF78_AE6C3F807DABC493_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define AF4A699F560B4069_FF72460ABDFBDF78_AE6C3F807DABC493__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A3F0)

namespace AF4A699F560B4069
{
	inline static constexpr unsigned int FF72460ABDFBDF78_AE6C3F807DABC493_TypeDefinitionIndex = 17259;

	class FF72460ABDFBDF78_AE6C3F807DABC493 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_AE6C3F807DABC493__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* E22BCD4736CD9DF9, ::System::Int32 B01B10C5ED32B8BD)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_AE6C3F807DABC493_INVOKE_OFFSET))(this, E22BCD4736CD9DF9, B01B10C5ED32B8BD);
		}
	};
}
