#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJEDKALMMNP;
namespace System { class Object; }

#define EJEDKALMMNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2867B0)
#define EJEDKALMMNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2867F0)
#define EJEDKALMMNP___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1E286800)

inline static constexpr unsigned int EJEDKALMMNP___c_TypeDefinitionIndex = 32489;

	class EJEDKALMMNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEDKALMMNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP___C_CTOR_OFFSET))(this);
		}

		::EJEDKALMMNP* __cctor_b__46_0()
		{
			return ((::EJEDKALMMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
