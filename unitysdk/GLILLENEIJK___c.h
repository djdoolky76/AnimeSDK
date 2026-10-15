#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLILLENEIJK;
namespace System { class Object; }

#define GLILLENEIJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E494580)
#define GLILLENEIJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4945C0)
#define GLILLENEIJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4945D0)

inline static constexpr unsigned int GLILLENEIJK___c_TypeDefinitionIndex = 28909;

	class GLILLENEIJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLILLENEIJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK___C_CTOR_OFFSET))(this);
		}

		::GLILLENEIJK* __cctor_b__28_0()
		{
			return ((::GLILLENEIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
