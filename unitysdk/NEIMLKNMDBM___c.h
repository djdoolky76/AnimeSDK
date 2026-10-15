#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEIMLKNMDBM;
namespace System { class Object; }

#define NEIMLKNMDBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5EC0)
#define NEIMLKNMDBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF5EF0)
#define NEIMLKNMDBM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAF5F00)

	class NEIMLKNMDBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEIMLKNMDBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM___C_CTOR_OFFSET))(this);
		}

		::NEIMLKNMDBM* __cctor_b__38_0()
		{
			return ((::NEIMLKNMDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEIMLKNMDBM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
