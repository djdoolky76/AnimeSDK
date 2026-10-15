#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIMIFAEADO;
namespace System { class Object; }

#define IEIMIFAEADO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60DDA0)
#define IEIMIFAEADO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60DDE0)
#define IEIMIFAEADO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E60DDF0)

inline static constexpr unsigned int IEIMIFAEADO___c_TypeDefinitionIndex = 29000;

	class IEIMIFAEADO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEIMIFAEADO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO___C_CTOR_OFFSET))(this);
		}

		::IEIMIFAEADO* __cctor_b__28_0()
		{
			return ((::IEIMIFAEADO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIMIFAEADO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
