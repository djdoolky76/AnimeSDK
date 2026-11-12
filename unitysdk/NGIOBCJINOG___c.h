#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIOBCJINOG;
namespace System { class Object; }

#define NGIOBCJINOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE54F10)
#define NGIOBCJINOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE54F40)
#define NGIOBCJINOG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FE54F50)

inline static constexpr unsigned int NGIOBCJINOG___c_TypeDefinitionIndex = 35863;

	class NGIOBCJINOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIOBCJINOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG___C_CTOR_OFFSET))(this);
		}

		::NGIOBCJINOG* __cctor_b__48_0()
		{
			return ((::NGIOBCJINOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIOBCJINOG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
