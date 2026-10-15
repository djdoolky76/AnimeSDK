#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMCLDIDKHBA;
namespace System { class Object; }

#define KMCLDIDKHBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E895120)
#define KMCLDIDKHBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E895160)
#define KMCLDIDKHBA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E895170)

inline static constexpr unsigned int KMCLDIDKHBA___c_TypeDefinitionIndex = 25995;

	class KMCLDIDKHBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMCLDIDKHBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA___C_CTOR_OFFSET))(this);
		}

		::KMCLDIDKHBA* __cctor_b__28_0()
		{
			return ((::KMCLDIDKHBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCLDIDKHBA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
