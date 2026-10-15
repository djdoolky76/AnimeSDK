#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCHLAKNODJ;
namespace System { class Object; }

#define LDCHLAKNODJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7440)
#define LDCHLAKNODJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C7480)
#define LDCHLAKNODJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8C7490)

inline static constexpr unsigned int LDCHLAKNODJ___c_TypeDefinitionIndex = 30050;

	class LDCHLAKNODJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D4A0);
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
