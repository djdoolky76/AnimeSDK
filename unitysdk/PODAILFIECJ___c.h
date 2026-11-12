#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PODAILFIECJ;
namespace System { class Object; }

#define PODAILFIECJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F279D00)
#define PODAILFIECJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F279D40)
#define PODAILFIECJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F279D50)

inline static constexpr unsigned int PODAILFIECJ___c_TypeDefinitionIndex = 31467;

	class PODAILFIECJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x460F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PODAILFIECJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ___C_CTOR_OFFSET))(this);
		}

		::PODAILFIECJ* __cctor_b__23_0()
		{
			return ((::PODAILFIECJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PODAILFIECJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
