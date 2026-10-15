#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEPAMDEPFLJ;
namespace System { class Object; }

#define OEPAMDEPFLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE34570)
#define OEPAMDEPFLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE345B0)
#define OEPAMDEPFLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE345C0)

inline static constexpr unsigned int OEPAMDEPFLJ___c_TypeDefinitionIndex = 33263;

	class OEPAMDEPFLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPAMDEPFLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ___C_CTOR_OFFSET))(this);
		}

		::OEPAMDEPFLJ* __cctor_b__23_0()
		{
			return ((::OEPAMDEPFLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPAMDEPFLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
