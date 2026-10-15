#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJOFCJCKMN;
namespace System { class Object; }

#define GKJOFCJCKMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9530)
#define GKJOFCJCKMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9570)
#define GKJOFCJCKMN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4B9580)

	class GKJOFCJCKMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKJOFCJCKMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJOFCJCKMN___C_CTOR_OFFSET))(this);
		}

		::GKJOFCJCKMN* __cctor_b__38_0()
		{
			return ((::GKJOFCJCKMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJOFCJCKMN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
