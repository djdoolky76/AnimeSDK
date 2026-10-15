#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEGLEIHJKFN;
namespace System { class Object; }

#define AEGLEIHJKFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF620)
#define AEGLEIHJKFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBF650)
#define AEGLEIHJKFN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDBF660)

inline static constexpr unsigned int AEGLEIHJKFN___c_TypeDefinitionIndex = 28480;

	class AEGLEIHJKFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGLEIHJKFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN___C_CTOR_OFFSET))(this);
		}

		::AEGLEIHJKFN* __cctor_b__18_0()
		{
			return ((::AEGLEIHJKFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEGLEIHJKFN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
