#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCKHEKIFHLO;
namespace System { class Object; }

#define JCKHEKIFHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6470)
#define JCKHEKIFHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D64B0)
#define JCKHEKIFHLO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6D64C0)

inline static constexpr unsigned int JCKHEKIFHLO___c_TypeDefinitionIndex = 31357;

	class JCKHEKIFHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C_CTOR_OFFSET))(this);
		}

		::JCKHEKIFHLO* __cctor_b__38_0()
		{
			return ((::JCKHEKIFHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKHEKIFHLO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
