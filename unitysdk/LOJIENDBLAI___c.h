#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIENDBLAI;
namespace System { class Object; }

#define LOJIENDBLAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C1FC0)
#define LOJIENDBLAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2000)
#define LOJIENDBLAI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9C2010)

inline static constexpr unsigned int LOJIENDBLAI___c_TypeDefinitionIndex = 30607;

	class LOJIENDBLAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x523C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOJIENDBLAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIENDBLAI___C_CTOR_OFFSET))(this);
		}

		::LOJIENDBLAI* __cctor_b__33_0()
		{
			return ((::LOJIENDBLAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJIENDBLAI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
