#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHLNMCEJIDN;
namespace System { class Object; }

#define HHLNMCEJIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20514980)
#define HHLNMCEJIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205149C0)
#define HHLNMCEJIDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205149D0)

inline static constexpr unsigned int HHLNMCEJIDN___c_TypeDefinitionIndex = 32338;

	class HHLNMCEJIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C_CTOR_OFFSET))(this);
		}

		::HHLNMCEJIDN* __cctor_b__33_0()
		{
			return ((::HHLNMCEJIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLNMCEJIDN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
