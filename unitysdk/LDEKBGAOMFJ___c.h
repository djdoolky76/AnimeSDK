#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDEKBGAOMFJ;
namespace System { class Object; }

#define LDEKBGAOMFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F913650)
#define LDEKBGAOMFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F913690)
#define LDEKBGAOMFJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F9136A0)

inline static constexpr unsigned int LDEKBGAOMFJ___c_TypeDefinitionIndex = 25539;

	class LDEKBGAOMFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDEKBGAOMFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ___C_CTOR_OFFSET))(this);
		}

		::LDEKBGAOMFJ* __cctor_b__38_0()
		{
			return ((::LDEKBGAOMFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDEKBGAOMFJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
