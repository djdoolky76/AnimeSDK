#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKNEMMHHBJK;
namespace System { class Object; }

#define PKNEMMHHBJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF66F00)
#define PKNEMMHHBJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF66F40)
#define PKNEMMHHBJK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF66F50)

inline static constexpr unsigned int PKNEMMHHBJK___c_TypeDefinitionIndex = 31128;

	class PKNEMMHHBJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKNEMMHHBJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK___C_CTOR_OFFSET))(this);
		}

		::PKNEMMHHBJK* __cctor_b__18_0()
		{
			return ((::PKNEMMHHBJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNEMMHHBJK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
