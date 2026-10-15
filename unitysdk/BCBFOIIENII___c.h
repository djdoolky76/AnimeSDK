#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBFOIIENII;
namespace System { class Object; }

#define BCBFOIIENII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E905420)
#define BCBFOIIENII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E905460)
#define BCBFOIIENII___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E905470)

inline static constexpr unsigned int BCBFOIIENII___c_TypeDefinitionIndex = 31220;

	class BCBFOIIENII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBFOIIENII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII___C_CTOR_OFFSET))(this);
		}

		::BCBFOIIENII* __cctor_b__38_0()
		{
			return ((::BCBFOIIENII*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
