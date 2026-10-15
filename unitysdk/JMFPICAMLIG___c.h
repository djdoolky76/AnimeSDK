#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMFPICAMLIG;
namespace System { class Object; }

#define JMFPICAMLIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E75E140)
#define JMFPICAMLIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75E180)
#define JMFPICAMLIG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E75E190)

inline static constexpr unsigned int JMFPICAMLIG___c_TypeDefinitionIndex = 25743;

	class JMFPICAMLIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMFPICAMLIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG___C_CTOR_OFFSET))(this);
		}

		::JMFPICAMLIG* __cctor_b__23_0()
		{
			return ((::JMFPICAMLIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMFPICAMLIG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
