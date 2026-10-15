#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IILCDMAHMDN;
namespace System { class Object; }

#define IILCDMAHMDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68B230)
#define IILCDMAHMDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E68B270)
#define IILCDMAHMDN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E68B280)

inline static constexpr unsigned int IILCDMAHMDN___c_TypeDefinitionIndex = 29040;

	class IILCDMAHMDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IILCDMAHMDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN___C_CTOR_OFFSET))(this);
		}

		::IILCDMAHMDN* __cctor_b__43_0()
		{
			return ((::IILCDMAHMDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IILCDMAHMDN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
