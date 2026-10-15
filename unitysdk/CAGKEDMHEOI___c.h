#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
namespace System { class Object; }

#define CAGKEDMHEOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02D1A0)
#define CAGKEDMHEOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02D1D0)
#define CAGKEDMHEOI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E02D1E0)

inline static constexpr unsigned int CAGKEDMHEOI___c_TypeDefinitionIndex = 27792;

	class CAGKEDMHEOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGKEDMHEOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI___C_CTOR_OFFSET))(this);
		}

		::CAGKEDMHEOI* __cctor_b__23_0()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGKEDMHEOI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
