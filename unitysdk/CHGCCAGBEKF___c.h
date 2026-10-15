#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGCCAGBEKF;
namespace System { class Object; }

#define CHGCCAGBEKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C60F0)
#define CHGCCAGBEKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C6130)
#define CHGCCAGBEKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0C6140)

inline static constexpr unsigned int CHGCCAGBEKF___c_TypeDefinitionIndex = 34573;

	class CHGCCAGBEKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHGCCAGBEKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF___C_CTOR_OFFSET))(this);
		}

		::CHGCCAGBEKF* __cctor_b__23_0()
		{
			return ((::CHGCCAGBEKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGCCAGBEKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
