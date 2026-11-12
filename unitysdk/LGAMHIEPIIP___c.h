#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGAMHIEPIIP;
namespace System { class Object; }

#define LGAMHIEPIIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC69000)
#define LGAMHIEPIIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC69040)
#define LGAMHIEPIIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC69050)

inline static constexpr unsigned int LGAMHIEPIIP___c_TypeDefinitionIndex = 32127;

	class LGAMHIEPIIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGAMHIEPIIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP___C_CTOR_OFFSET))(this);
		}

		::LGAMHIEPIIP* __cctor_b__23_0()
		{
			return ((::LGAMHIEPIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGAMHIEPIIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
