#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEJCMECDDN;
namespace System { class Object; }

#define MJEJCMECDDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD99A90)
#define MJEJCMECDDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD99AC0)
#define MJEJCMECDDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD99AD0)

inline static constexpr unsigned int MJEJCMECDDN___c_TypeDefinitionIndex = 31065;

	class MJEJCMECDDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEJCMECDDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN___C_CTOR_OFFSET))(this);
		}

		::MJEJCMECDDN* __cctor_b__23_0()
		{
			return ((::MJEJCMECDDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEJCMECDDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
