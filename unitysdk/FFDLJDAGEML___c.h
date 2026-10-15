#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFDLJDAGEML;
namespace System { class Object; }

#define FFDLJDAGEML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33E7F0)
#define FFDLJDAGEML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33E830)
#define FFDLJDAGEML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E33E840)

inline static constexpr unsigned int FFDLJDAGEML___c_TypeDefinitionIndex = 27726;

	class FFDLJDAGEML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDLJDAGEML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML___C_CTOR_OFFSET))(this);
		}

		::FFDLJDAGEML* __cctor_b__23_0()
		{
			return ((::FFDLJDAGEML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDLJDAGEML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
