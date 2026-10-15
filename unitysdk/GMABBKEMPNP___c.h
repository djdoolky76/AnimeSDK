#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMABBKEMPNP;
namespace System { class Object; }

#define GMABBKEMPNP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49B630)
#define GMABBKEMPNP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49B670)
#define GMABBKEMPNP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E49B680)

inline static constexpr unsigned int GMABBKEMPNP___c_TypeDefinitionIndex = 34097;

	class GMABBKEMPNP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMABBKEMPNP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP___C_CTOR_OFFSET))(this);
		}

		::GMABBKEMPNP* __cctor_b__23_0()
		{
			return ((::GMABBKEMPNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMABBKEMPNP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
