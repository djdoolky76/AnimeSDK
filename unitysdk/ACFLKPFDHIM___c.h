#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACFLKPFDHIM;
namespace System { class Object; }

#define ACFLKPFDHIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDAD270)
#define ACFLKPFDHIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAD2B0)
#define ACFLKPFDHIM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DDAD2C0)

inline static constexpr unsigned int ACFLKPFDHIM___c_TypeDefinitionIndex = 25536;

	class ACFLKPFDHIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACFLKPFDHIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM___C_CTOR_OFFSET))(this);
		}

		::ACFLKPFDHIM* __cctor_b__43_0()
		{
			return ((::ACFLKPFDHIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLKPFDHIM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
