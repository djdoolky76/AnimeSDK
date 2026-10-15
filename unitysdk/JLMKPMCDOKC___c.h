#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLMKPMCDOKC;
namespace System { class Object; }

#define JLMKPMCDOKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E754100)
#define JLMKPMCDOKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E754140)
#define JLMKPMCDOKC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E754150)

inline static constexpr unsigned int JLMKPMCDOKC___c_TypeDefinitionIndex = 26024;

	class JLMKPMCDOKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLMKPMCDOKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC___C_CTOR_OFFSET))(this);
		}

		::JLMKPMCDOKC* __cctor_b__23_0()
		{
			return ((::JLMKPMCDOKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMKPMCDOKC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
