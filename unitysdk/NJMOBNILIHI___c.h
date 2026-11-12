#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJMOBNILIHI;
namespace System { class Object; }

#define NJMOBNILIHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F041D60)
#define NJMOBNILIHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F041DA0)
#define NJMOBNILIHI___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1F041DB0)

inline static constexpr unsigned int NJMOBNILIHI___c_TypeDefinitionIndex = 29532;

	class NJMOBNILIHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMOBNILIHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMOBNILIHI___C_CTOR_OFFSET))(this);
		}

		::NJMOBNILIHI* __cctor_b__74_0()
		{
			return ((::NJMOBNILIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMOBNILIHI___C___CCTOR_B__74_0_OFFSET))(this);
		}

	};
