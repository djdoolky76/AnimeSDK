#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDOOMBLAOHN;
namespace System { class Object; }

#define DDOOMBLAOHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F466A50)
#define DDOOMBLAOHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F466A80)
#define DDOOMBLAOHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F466A90)

inline static constexpr unsigned int DDOOMBLAOHN___c_TypeDefinitionIndex = 33614;

	class DDOOMBLAOHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDOOMBLAOHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN___C_CTOR_OFFSET))(this);
		}

		::DDOOMBLAOHN* __cctor_b__28_0()
		{
			return ((::DDOOMBLAOHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOMBLAOHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
