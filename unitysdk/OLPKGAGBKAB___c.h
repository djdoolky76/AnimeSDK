#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLPKGAGBKAB;
namespace System { class Object; }

#define OLPKGAGBKAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD800)
#define OLPKGAGBKAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD840)
#define OLPKGAGBKAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEAD850)

inline static constexpr unsigned int OLPKGAGBKAB___c_TypeDefinitionIndex = 31056;

	class OLPKGAGBKAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPKGAGBKAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB___C_CTOR_OFFSET))(this);
		}

		::OLPKGAGBKAB* __cctor_b__23_0()
		{
			return ((::OLPKGAGBKAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPKGAGBKAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
