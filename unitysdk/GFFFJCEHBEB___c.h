#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFFFJCEHBEB;
namespace System { class Object; }

#define GFFFJCEHBEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E468990)
#define GFFFJCEHBEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4689C0)
#define GFFFJCEHBEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4689D0)

inline static constexpr unsigned int GFFFJCEHBEB___c_TypeDefinitionIndex = 34235;

	class GFFFJCEHBEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFFJCEHBEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB___C_CTOR_OFFSET))(this);
		}

		::GFFFJCEHBEB* __cctor_b__28_0()
		{
			return ((::GFFFJCEHBEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFFJCEHBEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
