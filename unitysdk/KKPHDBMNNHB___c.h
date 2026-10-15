#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKPHDBMNNHB;
namespace System { class Object; }

#define KKPHDBMNNHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87FC70)
#define KKPHDBMNNHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87FCB0)
#define KKPHDBMNNHB___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E87FCC0)

inline static constexpr unsigned int KKPHDBMNNHB___c_TypeDefinitionIndex = 34597;

	class KKPHDBMNNHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKPHDBMNNHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPHDBMNNHB___C_CTOR_OFFSET))(this);
		}

		::KKPHDBMNNHB* __cctor_b__58_0()
		{
			return ((::KKPHDBMNNHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPHDBMNNHB___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
