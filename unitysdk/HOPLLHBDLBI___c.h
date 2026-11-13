#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOPLLHBDLBI;
namespace System { class Object; }

#define HOPLLHBDLBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200486A0)
#define HOPLLHBDLBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200486E0)
#define HOPLLHBDLBI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x200486F0)

inline static constexpr unsigned int HOPLLHBDLBI___c_TypeDefinitionIndex = 28845;

	class HOPLLHBDLBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOPLLHBDLBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI___C_CTOR_OFFSET))(this);
		}

		::HOPLLHBDLBI* __cctor_b__38_0()
		{
			return ((::HOPLLHBDLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
