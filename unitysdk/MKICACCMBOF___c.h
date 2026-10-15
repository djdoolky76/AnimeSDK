#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKICACCMBOF;
namespace System { class Object; }

#define MKICACCMBOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA5A850)
#define MKICACCMBOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5A880)
#define MKICACCMBOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA5A890)

inline static constexpr unsigned int MKICACCMBOF___c_TypeDefinitionIndex = 25656;

	class MKICACCMBOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKICACCMBOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF___C_CTOR_OFFSET))(this);
		}

		::MKICACCMBOF* __cctor_b__28_0()
		{
			return ((::MKICACCMBOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKICACCMBOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
