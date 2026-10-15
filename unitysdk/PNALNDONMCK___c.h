#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNALNDONMCK;
namespace System { class Object; }

#define PNALNDONMCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF848F0)
#define PNALNDONMCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF84920)
#define PNALNDONMCK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF84930)

inline static constexpr unsigned int PNALNDONMCK___c_TypeDefinitionIndex = 30307;

	class PNALNDONMCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNALNDONMCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK___C_CTOR_OFFSET))(this);
		}

		::PNALNDONMCK* __cctor_b__23_0()
		{
			return ((::PNALNDONMCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
