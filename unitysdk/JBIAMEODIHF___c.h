#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAMGFEKEBH;
namespace System { class Object; }

#define JBIAMEODIHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2F50)
#define JBIAMEODIHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F2F90)
#define JBIAMEODIHF___C___CCTOR_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C6F2FA0)

inline static constexpr unsigned int JBIAMEODIHF___c_TypeDefinitionIndex = 36898;

	class JBIAMEODIHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBIAMEODIHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBIAMEODIHF___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__8_0(::DCAMGFEKEBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCAMGFEKEBH*))((::PBYTE)hIl2Cpp + JBIAMEODIHF___C___CCTOR_B__8_0_OFFSET))(this, a1);
		}

	};
