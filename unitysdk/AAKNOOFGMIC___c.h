#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAKNOOFGMIC;
namespace System { class Object; }

#define AAKNOOFGMIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2030DDC0)
#define AAKNOOFGMIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2030DE00)
#define AAKNOOFGMIC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2030DE10)

inline static constexpr unsigned int AAKNOOFGMIC___c_TypeDefinitionIndex = 27268;

	class AAKNOOFGMIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAKNOOFGMIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC___C_CTOR_OFFSET))(this);
		}

		::AAKNOOFGMIC* __cctor_b__23_0()
		{
			return ((::AAKNOOFGMIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAKNOOFGMIC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
