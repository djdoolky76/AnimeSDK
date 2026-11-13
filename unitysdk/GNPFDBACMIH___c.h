#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNPFDBACMIH;
namespace System { class Object; }

#define GNPFDBACMIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE09840)
#define GNPFDBACMIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE09870)
#define GNPFDBACMIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE09880)

inline static constexpr unsigned int GNPFDBACMIH___c_TypeDefinitionIndex = 34465;

	class GNPFDBACMIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNPFDBACMIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH___C_CTOR_OFFSET))(this);
		}

		::GNPFDBACMIH* __cctor_b__23_0()
		{
			return ((::GNPFDBACMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
