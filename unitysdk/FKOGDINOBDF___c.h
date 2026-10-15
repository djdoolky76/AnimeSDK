#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKOGDINOBDF;
namespace System { class Object; }

#define FKOGDINOBDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B2680)
#define FKOGDINOBDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B26C0)
#define FKOGDINOBDF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3B26D0)

inline static constexpr unsigned int FKOGDINOBDF___c_TypeDefinitionIndex = 32837;

	class FKOGDINOBDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKOGDINOBDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF___C_CTOR_OFFSET))(this);
		}

		::FKOGDINOBDF* __cctor_b__23_0()
		{
			return ((::FKOGDINOBDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKOGDINOBDF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
