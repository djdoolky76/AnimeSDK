#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKEGMEPLDI;
namespace System { class Object; }

#define FJKEGMEPLDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206AB7B0)
#define FJKEGMEPLDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206AB7F0)
#define FJKEGMEPLDI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206AB800)

inline static constexpr unsigned int FJKEGMEPLDI___c_TypeDefinitionIndex = 28828;

	class FJKEGMEPLDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKEGMEPLDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI___C_CTOR_OFFSET))(this);
		}

		::FJKEGMEPLDI* __cctor_b__23_0()
		{
			return ((::FJKEGMEPLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
