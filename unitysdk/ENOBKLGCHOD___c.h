#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENOBKLGCHOD;
namespace System { class Object; }

#define ENOBKLGCHOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD7B5A0)
#define ENOBKLGCHOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7B5E0)
#define ENOBKLGCHOD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD7B5F0)

inline static constexpr unsigned int ENOBKLGCHOD___c_TypeDefinitionIndex = 33590;

	class ENOBKLGCHOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOBKLGCHOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOBKLGCHOD___C_CTOR_OFFSET))(this);
		}

		::ENOBKLGCHOD* __cctor_b__33_0()
		{
			return ((::ENOBKLGCHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOBKLGCHOD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
