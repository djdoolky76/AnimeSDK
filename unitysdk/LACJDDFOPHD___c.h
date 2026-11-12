#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LACJDDFOPHD;
namespace System { class Object; }

#define LACJDDFOPHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC05870)
#define LACJDDFOPHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC058B0)
#define LACJDDFOPHD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FC058C0)

inline static constexpr unsigned int LACJDDFOPHD___c_TypeDefinitionIndex = 27935;

	class LACJDDFOPHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LACJDDFOPHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD___C_CTOR_OFFSET))(this);
		}

		::LACJDDFOPHD* __cctor_b__18_0()
		{
			return ((::LACJDDFOPHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACJDDFOPHD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
