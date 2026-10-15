#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAMBNCEDDB;
namespace System { class Object; }

#define HKAMBNCEDDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5ADEF0)
#define HKAMBNCEDDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ADF30)
#define HKAMBNCEDDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5ADF40)

inline static constexpr unsigned int HKAMBNCEDDB___c_TypeDefinitionIndex = 26846;

	class HKAMBNCEDDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x445C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKAMBNCEDDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB___C_CTOR_OFFSET))(this);
		}

		::HKAMBNCEDDB* __cctor_b__23_0()
		{
			return ((::HKAMBNCEDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKAMBNCEDDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
