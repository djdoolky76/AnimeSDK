#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHGBFMIPFN;
namespace System { class Object; }

#define BJHGBFMIPFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD12C0)
#define BJHGBFMIPFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD1300)
#define BJHGBFMIPFN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAD1310)

inline static constexpr unsigned int BJHGBFMIPFN___c_TypeDefinitionIndex = 32504;

	class BJHGBFMIPFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJHGBFMIPFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN___C_CTOR_OFFSET))(this);
		}

		::BJHGBFMIPFN* __cctor_b__23_0()
		{
			return ((::BJHGBFMIPFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHGBFMIPFN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
