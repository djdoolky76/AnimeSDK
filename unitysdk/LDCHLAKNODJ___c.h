#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCHLAKNODJ;
namespace System { class Object; }

#define LDCHLAKNODJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC330B0)
#define LDCHLAKNODJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC330F0)
#define LDCHLAKNODJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC33100)

inline static constexpr unsigned int LDCHLAKNODJ___c_TypeDefinitionIndex = 30948;

	class LDCHLAKNODJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCHLAKNODJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ___C_CTOR_OFFSET))(this);
		}

		::LDCHLAKNODJ* __cctor_b__38_0()
		{
			return ((::LDCHLAKNODJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCHLAKNODJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
