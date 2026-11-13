#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNALNDONMCK;
namespace System { class Object; }

#define PNALNDONMCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201FDBB0)
#define PNALNDONMCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201FDBE0)
#define PNALNDONMCK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201FDBF0)

inline static constexpr unsigned int PNALNDONMCK___c_TypeDefinitionIndex = 31213;

	class PNALNDONMCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A560);
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
