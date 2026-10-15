#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPFFLNPMCEG;
namespace System { class Object; }

#define IPFFLNPMCEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1090)
#define IPFFLNPMCEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B10D0)
#define IPFFLNPMCEG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6B10E0)

inline static constexpr unsigned int IPFFLNPMCEG___c_TypeDefinitionIndex = 29471;

	class IPFFLNPMCEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFFLNPMCEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG___C_CTOR_OFFSET))(this);
		}

		::IPFFLNPMCEG* __cctor_b__23_0()
		{
			return ((::IPFFLNPMCEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFFLNPMCEG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
