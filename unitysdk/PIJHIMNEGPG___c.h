#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIJHIMNEGPG;
namespace System { class Object; }

#define PIJHIMNEGPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A600)
#define PIJHIMNEGPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6A630)
#define PIJHIMNEGPG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF6A640)

	class PIJHIMNEGPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJHIMNEGPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJHIMNEGPG___C_CTOR_OFFSET))(this);
		}

		::PIJHIMNEGPG* __cctor_b__38_0()
		{
			return ((::PIJHIMNEGPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJHIMNEGPG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
