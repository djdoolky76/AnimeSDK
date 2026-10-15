#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKDEEOGENM;
namespace System { class Object; }

#define KIKDEEOGENM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E831B80)
#define KIKDEEOGENM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E831BB0)
#define KIKDEEOGENM___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E831BC0)

inline static constexpr unsigned int KIKDEEOGENM___c_TypeDefinitionIndex = 30357;

	class KIKDEEOGENM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKDEEOGENM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDEEOGENM___C_CTOR_OFFSET))(this);
		}

		::KIKDEEOGENM* __cctor_b__48_0()
		{
			return ((::KIKDEEOGENM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKDEEOGENM___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
