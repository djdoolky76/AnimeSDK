#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGGGHFDBCFN;
namespace System { class Object; }

#define LGGGHFDBCFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9529B0)
#define LGGGHFDBCFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9529E0)
#define LGGGHFDBCFN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9529F0)

inline static constexpr unsigned int LGGGHFDBCFN___c_TypeDefinitionIndex = 30276;

	class LGGGHFDBCFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3ED80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGGGHFDBCFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN___C_CTOR_OFFSET))(this);
		}

		::LGGGHFDBCFN* __cctor_b__38_0()
		{
			return ((::LGGGHFDBCFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGGGHFDBCFN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
