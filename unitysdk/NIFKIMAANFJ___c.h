#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIFKIMAANFJ;
namespace System { class Object; }

#define NIFKIMAANFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2A90)
#define NIFKIMAANFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2AD0)
#define NIFKIMAANFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAC2AE0)

inline static constexpr unsigned int NIFKIMAANFJ___c_TypeDefinitionIndex = 31938;

	class NIFKIMAANFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x627C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFKIMAANFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ___C_CTOR_OFFSET))(this);
		}

		::NIFKIMAANFJ* __cctor_b__23_0()
		{
			return ((::NIFKIMAANFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
