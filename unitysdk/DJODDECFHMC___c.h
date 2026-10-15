#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJODDECFHMC;
namespace System { class Object; }

#define DJODDECFHMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3190)
#define DJODDECFHMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D31C0)
#define DJODDECFHMC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1D31D0)

inline static constexpr unsigned int DJODDECFHMC___c_TypeDefinitionIndex = 33029;

	class DJODDECFHMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A280);
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
