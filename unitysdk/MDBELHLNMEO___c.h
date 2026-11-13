#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDBELHLNMEO;
namespace System { class Object; }

#define MDBELHLNMEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD47040)
#define MDBELHLNMEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD47080)
#define MDBELHLNMEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD47090)

inline static constexpr unsigned int MDBELHLNMEO___c_TypeDefinitionIndex = 29988;

	class MDBELHLNMEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBELHLNMEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO___C_CTOR_OFFSET))(this);
		}

		::MDBELHLNMEO* __cctor_b__23_0()
		{
			return ((::MDBELHLNMEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBELHLNMEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
