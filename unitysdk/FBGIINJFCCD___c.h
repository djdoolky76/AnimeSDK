#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBGIINJFCCD;
namespace System { class Object; }

#define FBGIINJFCCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3088F0)
#define FBGIINJFCCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E308930)
#define FBGIINJFCCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E308940)

inline static constexpr unsigned int FBGIINJFCCD___c_TypeDefinitionIndex = 33023;

	class FBGIINJFCCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBGIINJFCCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD___C_CTOR_OFFSET))(this);
		}

		::FBGIINJFCCD* __cctor_b__23_0()
		{
			return ((::FBGIINJFCCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGIINJFCCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
