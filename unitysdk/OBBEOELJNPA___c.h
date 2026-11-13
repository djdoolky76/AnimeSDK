#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBBEOELJNPA;
namespace System { class Object; }

#define OBBEOELJNPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9BAA0)
#define OBBEOELJNPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9BAE0)
#define OBBEOELJNPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD9BAF0)

inline static constexpr unsigned int OBBEOELJNPA___c_TypeDefinitionIndex = 28774;

	class OBBEOELJNPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBBEOELJNPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA___C_CTOR_OFFSET))(this);
		}

		::OBBEOELJNPA* __cctor_b__28_0()
		{
			return ((::OBBEOELJNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBEOELJNPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
