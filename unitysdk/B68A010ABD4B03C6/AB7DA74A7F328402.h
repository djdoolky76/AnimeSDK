#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define B68A010ABD4B03C6_AB7DA74A7F328402_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define B68A010ABD4B03C6_AB7DA74A7F328402__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BB30)

namespace B68A010ABD4B03C6
{
	inline static constexpr unsigned int AB7DA74A7F328402_TypeDefinitionIndex = 9459;

	class AB7DA74A7F328402 : public ::System::MulticastDelegate
	{
	public:
		::E12F55A5FCCCF1EC Invoke(::System::Collections::Generic::IList_1<::E12F55A5FCCCF1EC>* BC5568F3D79C87F2)
		{
			return ((::E12F55A5FCCCF1EC(*)(::PVOID, ::System::Collections::Generic::IList_1<::E12F55A5FCCCF1EC>*))((::PBYTE)hIl2Cpp + B68A010ABD4B03C6_AB7DA74A7F328402_INVOKE_OFFSET))(this, BC5568F3D79C87F2);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + B68A010ABD4B03C6_AB7DA74A7F328402__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
