#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDCHGINKCA;
namespace System { class Object; }

#define AGDCHGINKCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FAC20)
#define AGDCHGINKCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FAC60)
#define AGDCHGINKCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0FAC70)

inline static constexpr unsigned int AGDCHGINKCA___c_TypeDefinitionIndex = 33588;

	class AGDCHGINKCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDCHGINKCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA___C_CTOR_OFFSET))(this);
		}

		::AGDCHGINKCA* __cctor_b__23_0()
		{
			return ((::AGDCHGINKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
