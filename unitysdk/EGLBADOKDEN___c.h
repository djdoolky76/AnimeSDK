#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGLBADOKDEN;
namespace System { class Object; }

#define EGLBADOKDEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26C070)
#define EGLBADOKDEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26C0B0)
#define EGLBADOKDEN___C___CCTOR_B__128_0_OFFSET UNITYSDK_OFFSET(0x1E26C0C0)

inline static constexpr unsigned int EGLBADOKDEN___c_TypeDefinitionIndex = 28894;

	class EGLBADOKDEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLBADOKDEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBADOKDEN___C_CTOR_OFFSET))(this);
		}

		::EGLBADOKDEN* __cctor_b__128_0()
		{
			return ((::EGLBADOKDEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLBADOKDEN___C___CCTOR_B__128_0_OFFSET))(this);
		}

	};
