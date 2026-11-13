#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGBKDLHENKL;
namespace System { class Object; }

#define CGBKDLHENKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD20870)
#define CGBKDLHENKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD208A0)
#define CGBKDLHENKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD208B0)

inline static constexpr unsigned int CGBKDLHENKL___c_TypeDefinitionIndex = 34953;

	class CGBKDLHENKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGBKDLHENKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL___C_CTOR_OFFSET))(this);
		}

		::CGBKDLHENKL* __cctor_b__28_0()
		{
			return ((::CGBKDLHENKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBKDLHENKL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
