#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/F669CFE5643AA19D.h"

class F7499DF1533C7100;
namespace System { class Object; }

#define E631FC551E4747B3_BC8224108FADB24B_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F7B8B0)
#define E631FC551E4747B3_BC8224108FADB24B__CTOR_OFFSET UNITYSDK_OFFSET(0x38B6C30)

namespace E631FC551E4747B3
{
	inline static constexpr unsigned int BC8224108FADB24B_TypeDefinitionIndex = 20305;

	class BC8224108FADB24B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + E631FC551E4747B3_BC8224108FADB24B__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::F7499DF1533C7100* BAE4FF91052169A4, ::F669CFE5643AA19D& BB7BEB2027376C69, ::System::Boolean AF99588DF4766B4E)
		{
			return ((::System::Void(*)(::PVOID, ::F7499DF1533C7100*, ::F669CFE5643AA19D&, ::System::Boolean))((::PBYTE)hIl2Cpp + E631FC551E4747B3_BC8224108FADB24B_INVOKE_OFFSET))(this, BAE4FF91052169A4, BB7BEB2027376C69, AF99588DF4766B4E);
		}
	};
}
