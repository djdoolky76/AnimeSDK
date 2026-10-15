#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDAEJKNMBNK;
namespace System { class Object; }

#define PDAEJKNMBNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF7D0)
#define PDAEJKNMBNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF810)
#define PDAEJKNMBNK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEDF820)

inline static constexpr unsigned int PDAEJKNMBNK___c_TypeDefinitionIndex = 31078;

	class PDAEJKNMBNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDAEJKNMBNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK___C_CTOR_OFFSET))(this);
		}

		::PDAEJKNMBNK* __cctor_b__23_0()
		{
			return ((::PDAEJKNMBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDAEJKNMBNK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
