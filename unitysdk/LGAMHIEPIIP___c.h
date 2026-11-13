#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGAMHIEPIIP;
namespace System { class Object; }

#define LGAMHIEPIIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB63A0)
#define LGAMHIEPIIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB63E0)
#define LGAMHIEPIIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAB63F0)

inline static constexpr unsigned int LGAMHIEPIIP___c_TypeDefinitionIndex = 32127;

	class LGAMHIEPIIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x339A0);
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
