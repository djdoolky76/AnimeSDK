#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCAHAPMBCOC;
namespace System { class Object; }

#define JCAHAPMBCOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C190)
#define JCAHAPMBCOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0C1D0)
#define JCAHAPMBCOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA0C1E0)

inline static constexpr unsigned int JCAHAPMBCOC___c_TypeDefinitionIndex = 31621;

	class JCAHAPMBCOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCAHAPMBCOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC___C_CTOR_OFFSET))(this);
		}

		::JCAHAPMBCOC* __cctor_b__23_0()
		{
			return ((::JCAHAPMBCOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
