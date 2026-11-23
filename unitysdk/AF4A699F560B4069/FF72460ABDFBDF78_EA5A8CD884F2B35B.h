#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AF4A699F560B4069/B20B15BE933DAEA0.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class Object; }
namespace System { class String; }

#define AF4A699F560B4069_FF72460ABDFBDF78_EA5A8CD884F2B35B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define AF4A699F560B4069_FF72460ABDFBDF78_EA5A8CD884F2B35B__CTOR_OFFSET UNITYSDK_OFFSET(0x3A1A3F0)

namespace AF4A699F560B4069
{
	inline static constexpr unsigned int FF72460ABDFBDF78_EA5A8CD884F2B35B_TypeDefinitionIndex = 17257;

	class FF72460ABDFBDF78_EA5A8CD884F2B35B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_EA5A8CD884F2B35B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::String* E97E8D008427A296, ::AF4A699F560B4069::B20B15BE933DAEA0 AF2BE19075E3FCDE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::AF4A699F560B4069::B20B15BE933DAEA0))((::PBYTE)hIl2Cpp + AF4A699F560B4069_FF72460ABDFBDF78_EA5A8CD884F2B35B_INVOKE_OFFSET))(this, E97E8D008427A296, AF2BE19075E3FCDE);
		}
	};
}
