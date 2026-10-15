#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLMPCCGCADK;
namespace System { class Object; }

#define CLMPCCGCADK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF700)
#define CLMPCCGCADK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF730)
#define CLMPCCGCADK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0CF740)

inline static constexpr unsigned int CLMPCCGCADK___c_TypeDefinitionIndex = 33151;

	class CLMPCCGCADK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLMPCCGCADK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK___C_CTOR_OFFSET))(this);
		}

		::CLMPCCGCADK* __cctor_b__23_0()
		{
			return ((::CLMPCCGCADK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMPCCGCADK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
