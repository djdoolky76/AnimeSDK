#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IENCCMEAIAJ;
namespace System { class Object; }

#define IENCCMEAIAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6128E0)
#define IENCCMEAIAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E612920)
#define IENCCMEAIAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E612930)

inline static constexpr unsigned int IENCCMEAIAJ___c_TypeDefinitionIndex = 28935;

	class IENCCMEAIAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IENCCMEAIAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ___C_CTOR_OFFSET))(this);
		}

		::IENCCMEAIAJ* __cctor_b__23_0()
		{
			return ((::IENCCMEAIAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IENCCMEAIAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
