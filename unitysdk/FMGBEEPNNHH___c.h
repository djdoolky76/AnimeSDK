#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMGBEEPNNHH;
namespace System { class Object; }

#define FMGBEEPNNHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202CBA80)
#define FMGBEEPNNHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202CBAC0)
#define FMGBEEPNNHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202CBAD0)

inline static constexpr unsigned int FMGBEEPNNHH___c_TypeDefinitionIndex = 28762;

	class FMGBEEPNNHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C_CTOR_OFFSET))(this);
		}

		::FMGBEEPNNHH* __cctor_b__28_0()
		{
			return ((::FMGBEEPNNHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGBEEPNNHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
