#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIJJCOBOJFM;
namespace System { class Object; }

#define KIJJCOBOJFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E830E80)
#define KIJJCOBOJFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E830EC0)
#define KIJJCOBOJFM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E830ED0)

inline static constexpr unsigned int KIJJCOBOJFM___c_TypeDefinitionIndex = 34623;

	class KIJJCOBOJFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIJJCOBOJFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM___C_CTOR_OFFSET))(this);
		}

		::KIJJCOBOJFM* __cctor_b__23_0()
		{
			return ((::KIJJCOBOJFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJJCOBOJFM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
