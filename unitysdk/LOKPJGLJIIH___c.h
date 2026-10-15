#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKPJGLJIIH;
namespace System { class Object; }

#define LOKPJGLJIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E998230)
#define LOKPJGLJIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E998270)
#define LOKPJGLJIIH___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E998280)

inline static constexpr unsigned int LOKPJGLJIIH___c_TypeDefinitionIndex = 25067;

	class LOKPJGLJIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42DF0);
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
