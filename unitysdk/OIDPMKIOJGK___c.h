#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIDPMKIOJGK;
namespace System { class Object; }

#define OIDPMKIOJGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3DA60)
#define OIDPMKIOJGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE3DAA0)
#define OIDPMKIOJGK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE3DAB0)

inline static constexpr unsigned int OIDPMKIOJGK___c_TypeDefinitionIndex = 31086;

	class OIDPMKIOJGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIDPMKIOJGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK___C_CTOR_OFFSET))(this);
		}

		::OIDPMKIOJGK* __cctor_b__23_0()
		{
			return ((::OIDPMKIOJGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDPMKIOJGK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
