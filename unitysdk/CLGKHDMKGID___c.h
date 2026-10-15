#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLGKHDMKGID;
namespace System { class Object; }

#define CLGKHDMKGID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CB720)
#define CLGKHDMKGID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CB760)
#define CLGKHDMKGID___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0CB770)

inline static constexpr unsigned int CLGKHDMKGID___c_TypeDefinitionIndex = 27233;

	class CLGKHDMKGID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLGKHDMKGID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID___C_CTOR_OFFSET))(this);
		}

		::CLGKHDMKGID* __cctor_b__23_0()
		{
			return ((::CLGKHDMKGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGKHDMKGID___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
