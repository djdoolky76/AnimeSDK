#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAEFDELFKJK;
namespace System { class Object; }

#define PAEFDELFKJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEC640)
#define PAEFDELFKJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEC680)
#define PAEFDELFKJK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEEC690)

inline static constexpr unsigned int PAEFDELFKJK___c_TypeDefinitionIndex = 28880;

	class PAEFDELFKJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAEFDELFKJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEFDELFKJK___C_CTOR_OFFSET))(this);
		}

		::PAEFDELFKJK* __cctor_b__38_0()
		{
			return ((::PAEFDELFKJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEFDELFKJK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
