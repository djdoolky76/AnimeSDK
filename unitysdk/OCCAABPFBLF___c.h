#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCCAABPFBLF;
namespace System { class Object; }

#define OCCAABPFBLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D320)
#define OCCAABPFBLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0D350)
#define OCCAABPFBLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE0D360)

inline static constexpr unsigned int OCCAABPFBLF___c_TypeDefinitionIndex = 26096;

	class OCCAABPFBLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCCAABPFBLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF___C_CTOR_OFFSET))(this);
		}

		::OCCAABPFBLF* __cctor_b__28_0()
		{
			return ((::OCCAABPFBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCCAABPFBLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
