#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHOOCKLJEDE;
namespace System { class Object; }

#define KHOOCKLJEDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E821FE0)
#define KHOOCKLJEDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E822020)
#define KHOOCKLJEDE___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E822030)

inline static constexpr unsigned int KHOOCKLJEDE___c_TypeDefinitionIndex = 26339;

	class KHOOCKLJEDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOOCKLJEDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE___C_CTOR_OFFSET))(this);
		}

		::KHOOCKLJEDE* __cctor_b__43_0()
		{
			return ((::KHOOCKLJEDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
