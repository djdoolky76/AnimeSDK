#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLFOBMAPEJ;
namespace System { class Object; }

#define EJLFOBMAPEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BD680)
#define EJLFOBMAPEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BD6C0)
#define EJLFOBMAPEJ___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E2BD6D0)

	class EJLFOBMAPEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLFOBMAPEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFOBMAPEJ___C_CTOR_OFFSET))(this);
		}

		::EJLFOBMAPEJ* __cctor_b__83_0()
		{
			return ((::EJLFOBMAPEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLFOBMAPEJ___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
