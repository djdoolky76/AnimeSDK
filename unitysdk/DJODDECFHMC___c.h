#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJODDECFHMC;
namespace System { class Object; }

#define DJODDECFHMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB397F0)
#define DJODDECFHMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB39820)
#define DJODDECFHMC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB39830)

inline static constexpr unsigned int DJODDECFHMC___c_TypeDefinitionIndex = 33944;

	class DJODDECFHMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJODDECFHMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC___C_CTOR_OFFSET))(this);
		}

		::DJODDECFHMC* __cctor_b__33_0()
		{
			return ((::DJODDECFHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJODDECFHMC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
