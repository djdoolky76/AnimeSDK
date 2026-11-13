#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGJJHHFJBDJ;
namespace System { class Object; }

#define IGJJHHFJBDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E3160)
#define IGJJHHFJBDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E31A0)
#define IGJJHHFJBDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7E31B0)

inline static constexpr unsigned int IGJJHHFJBDJ___c_TypeDefinitionIndex = 34425;

	class IGJJHHFJBDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGJJHHFJBDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ___C_CTOR_OFFSET))(this);
		}

		::IGJJHHFJBDJ* __cctor_b__28_0()
		{
			return ((::IGJJHHFJBDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
