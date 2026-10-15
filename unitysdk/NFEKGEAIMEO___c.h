#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFEKGEAIMEO;
namespace System { class Object; }

#define NFEKGEAIMEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD3F20)
#define NFEKGEAIMEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD3F60)
#define NFEKGEAIMEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAD3F70)

inline static constexpr unsigned int NFEKGEAIMEO___c_TypeDefinitionIndex = 30656;

	class NFEKGEAIMEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFEKGEAIMEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO___C_CTOR_OFFSET))(this);
		}

		::NFEKGEAIMEO* __cctor_b__23_0()
		{
			return ((::NFEKGEAIMEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
