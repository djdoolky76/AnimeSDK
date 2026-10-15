#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLADIJBBLPN;
namespace System { class Object; }

#define MLADIJBBLPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EB30)
#define MLADIJBBLPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EB70)
#define MLADIJBBLPN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA5EB80)

inline static constexpr unsigned int MLADIJBBLPN___c_TypeDefinitionIndex = 34963;

	class MLADIJBBLPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLADIJBBLPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN___C_CTOR_OFFSET))(this);
		}

		::MLADIJBBLPN* __cctor_b__23_0()
		{
			return ((::MLADIJBBLPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLADIJBBLPN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
