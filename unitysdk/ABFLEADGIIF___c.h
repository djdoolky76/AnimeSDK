#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLEADGIIF;
namespace System { class Object; }

#define ABFLEADGIIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA1F0)
#define ABFLEADGIIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA220)
#define ABFLEADGIIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DDCA230)

inline static constexpr unsigned int ABFLEADGIIF___c_TypeDefinitionIndex = 30981;

	class ABFLEADGIIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFLEADGIIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF___C_CTOR_OFFSET))(this);
		}

		::ABFLEADGIIF* __cctor_b__23_0()
		{
			return ((::ABFLEADGIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
