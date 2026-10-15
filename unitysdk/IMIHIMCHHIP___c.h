#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMIHIMCHHIP;
namespace System { class Object; }

#define IMIHIMCHHIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7DD0)
#define IMIHIMCHHIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B7E10)
#define IMIHIMCHHIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6B7E20)

inline static constexpr unsigned int IMIHIMCHHIP___c_TypeDefinitionIndex = 28284;

	class IMIHIMCHHIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMIHIMCHHIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP___C_CTOR_OFFSET))(this);
		}

		::IMIHIMCHHIP* __cctor_b__28_0()
		{
			return ((::IMIHIMCHHIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIHIMCHHIP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
