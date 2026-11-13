#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMPCNECEBG;
namespace System { class Object; }

#define BHMPCNECEBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2011E080)
#define BHMPCNECEBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2011E0C0)
#define BHMPCNECEBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2011E0D0)

inline static constexpr unsigned int BHMPCNECEBG___c_TypeDefinitionIndex = 29206;

	class BHMPCNECEBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMPCNECEBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG___C_CTOR_OFFSET))(this);
		}

		::BHMPCNECEBG* __cctor_b__23_0()
		{
			return ((::BHMPCNECEBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMPCNECEBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
