#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAFBJNNCHN;
namespace System { class Object; }

#define HIAFBJNNCHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E560CE0)
#define HIAFBJNNCHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E560D20)
#define HIAFBJNNCHN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E560D30)

inline static constexpr unsigned int HIAFBJNNCHN___c_TypeDefinitionIndex = 31138;

	class HIAFBJNNCHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFBJNNCHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN___C_CTOR_OFFSET))(this);
		}

		::HIAFBJNNCHN* __cctor_b__18_0()
		{
			return ((::HIAFBJNNCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
