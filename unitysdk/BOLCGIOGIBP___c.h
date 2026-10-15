#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOLCGIOGIBP;
namespace System { class Object; }

#define BOLCGIOGIBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00FB80)
#define BOLCGIOGIBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E00FBB0)
#define BOLCGIOGIBP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E00FBC0)

inline static constexpr unsigned int BOLCGIOGIBP___c_TypeDefinitionIndex = 26237;

	class BOLCGIOGIBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOLCGIOGIBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP___C_CTOR_OFFSET))(this);
		}

		::BOLCGIOGIBP* __cctor_b__53_0()
		{
			return ((::BOLCGIOGIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLCGIOGIBP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
