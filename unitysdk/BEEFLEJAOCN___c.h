#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEFLEJAOCN;
namespace System { class Object; }

#define BEEFLEJAOCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA610D0)
#define BEEFLEJAOCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA61110)
#define BEEFLEJAOCN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1EA61120)

inline static constexpr unsigned int BEEFLEJAOCN___c_TypeDefinitionIndex = 29238;

	class BEEFLEJAOCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEEFLEJAOCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEFLEJAOCN___C_CTOR_OFFSET))(this);
		}

		::BEEFLEJAOCN* __cctor_b__68_0()
		{
			return ((::BEEFLEJAOCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEEFLEJAOCN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
