#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDBFKBNGIH;
namespace System { class Object; }

#define DFDBFKBNGIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E16FC30)
#define DFDBFKBNGIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E16FC70)
#define DFDBFKBNGIH___C___CCTOR_B__138_0_OFFSET UNITYSDK_OFFSET(0x1E16FC80)

inline static constexpr unsigned int DFDBFKBNGIH___c_TypeDefinitionIndex = 25147;

	class DFDBFKBNGIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDBFKBNGIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDBFKBNGIH___C_CTOR_OFFSET))(this);
		}

		::DFDBFKBNGIH* __cctor_b__138_0()
		{
			return ((::DFDBFKBNGIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDBFKBNGIH___C___CCTOR_B__138_0_OFFSET))(this);
		}

	};
