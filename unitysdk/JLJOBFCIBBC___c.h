#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJOBFCIBBC;
namespace System { class Object; }

#define JLJOBFCIBBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E750B10)
#define JLJOBFCIBBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E750B50)
#define JLJOBFCIBBC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E750B60)

inline static constexpr unsigned int JLJOBFCIBBC___c_TypeDefinitionIndex = 28620;

	class JLJOBFCIBBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJOBFCIBBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC___C_CTOR_OFFSET))(this);
		}

		::JLJOBFCIBBC* __cctor_b__28_0()
		{
			return ((::JLJOBFCIBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
