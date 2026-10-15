#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACPIBIJPPH;
namespace System { class Object; }

#define BACPIBIJPPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E782910)
#define BACPIBIJPPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E782950)
#define BACPIBIJPPH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E782960)

inline static constexpr unsigned int BACPIBIJPPH___c_TypeDefinitionIndex = 26652;

	class BACPIBIJPPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACPIBIJPPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH___C_CTOR_OFFSET))(this);
		}

		::BACPIBIJPPH* __cctor_b__23_0()
		{
			return ((::BACPIBIJPPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACPIBIJPPH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
