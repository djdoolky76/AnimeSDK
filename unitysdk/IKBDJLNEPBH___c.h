#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKBDJLNEPBH;
namespace System { class Object; }

#define IKBDJLNEPBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9A2270)
#define IKBDJLNEPBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A22B0)
#define IKBDJLNEPBH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9A22C0)

inline static constexpr unsigned int IKBDJLNEPBH___c_TypeDefinitionIndex = 26392;

	class IKBDJLNEPBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x513D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKBDJLNEPBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH___C_CTOR_OFFSET))(this);
		}

		::IKBDJLNEPBH* __cctor_b__23_0()
		{
			return ((::IKBDJLNEPBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKBDJLNEPBH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
