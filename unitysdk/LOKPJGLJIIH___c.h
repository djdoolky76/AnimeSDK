#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKPJGLJIIH;
namespace System { class Object; }

#define LOKPJGLJIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200DB990)
#define LOKPJGLJIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200DB9D0)
#define LOKPJGLJIIH___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x200DB9E0)

inline static constexpr unsigned int LOKPJGLJIIH___c_TypeDefinitionIndex = 25545;

	class LOKPJGLJIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOKPJGLJIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPJGLJIIH___C_CTOR_OFFSET))(this);
		}

		::LOKPJGLJIIH* __cctor_b__98_0()
		{
			return ((::LOKPJGLJIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKPJGLJIIH___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
