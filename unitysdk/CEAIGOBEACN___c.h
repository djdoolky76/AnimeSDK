#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAIGOBEACN;
namespace System { class Object; }

#define CEAIGOBEACN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3538D0)
#define CEAIGOBEACN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F353900)
#define CEAIGOBEACN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F353910)

inline static constexpr unsigned int CEAIGOBEACN___c_TypeDefinitionIndex = 26912;

	class CEAIGOBEACN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAIGOBEACN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN___C_CTOR_OFFSET))(this);
		}

		::CEAIGOBEACN* __cctor_b__28_0()
		{
			return ((::CEAIGOBEACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAIGOBEACN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
