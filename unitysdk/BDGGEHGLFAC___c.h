#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDGGEHGLFAC;
namespace System { class Object; }

#define BDGGEHGLFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E916460)
#define BDGGEHGLFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9164A0)
#define BDGGEHGLFAC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9164B0)

inline static constexpr unsigned int BDGGEHGLFAC___c_TypeDefinitionIndex = 34811;

	class BDGGEHGLFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDGGEHGLFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEHGLFAC___C_CTOR_OFFSET))(this);
		}

		::BDGGEHGLFAC* __cctor_b__33_0()
		{
			return ((::BDGGEHGLFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGGEHGLFAC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
