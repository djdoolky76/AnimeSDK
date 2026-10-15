#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBKJGBMMKFI;
namespace System { class Object; }

#define JBKJGBMMKFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CC440)
#define JBKJGBMMKFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CC480)
#define JBKJGBMMKFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6CC490)

inline static constexpr unsigned int JBKJGBMMKFI___c_TypeDefinitionIndex = 28933;

	class JBKJGBMMKFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBKJGBMMKFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKJGBMMKFI___C_CTOR_OFFSET))(this);
		}

		::JBKJGBMMKFI* __cctor_b__23_0()
		{
			return ((::JBKJGBMMKFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKJGBMMKFI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
