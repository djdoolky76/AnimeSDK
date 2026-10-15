#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEDICCGGDGI;
namespace System { class Object; }

#define GEDICCGGDGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E426EF0)
#define GEDICCGGDGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E426F30)
#define GEDICCGGDGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E426F40)

inline static constexpr unsigned int GEDICCGGDGI___c_TypeDefinitionIndex = 27762;

	class GEDICCGGDGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEDICCGGDGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI___C_CTOR_OFFSET))(this);
		}

		::GEDICCGGDGI* __cctor_b__28_0()
		{
			return ((::GEDICCGGDGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDICCGGDGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
