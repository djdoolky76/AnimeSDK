#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIGCDGKOBMK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CHGHIALKMFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C54B750)
#define CHGHIALKMFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54B790)
#define CHGHIALKMFM___C__GET_ISOVERLAPFREE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C54B7A0)

	class CHGHIALKMFM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::DIGCDGKOBMK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHGHIALKMFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGHIALKMFM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsOverlapFree_b__31_0(::DIGCDGKOBMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIGCDGKOBMK*))((::PBYTE)hIl2Cpp + CHGHIALKMFM___C__GET_ISOVERLAPFREE_B__31_0_OFFSET))(this, a1);
		}

	};
