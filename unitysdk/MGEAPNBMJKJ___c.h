#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGEAPNBMJKJ;
namespace System { class Object; }

#define MGEAPNBMJKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA225E0)
#define MGEAPNBMJKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA22620)
#define MGEAPNBMJKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA22630)

inline static constexpr unsigned int MGEAPNBMJKJ___c_TypeDefinitionIndex = 29945;

	class MGEAPNBMJKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGEAPNBMJKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ___C_CTOR_OFFSET))(this);
		}

		::MGEAPNBMJKJ* __cctor_b__28_0()
		{
			return ((::MGEAPNBMJKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEAPNBMJKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
