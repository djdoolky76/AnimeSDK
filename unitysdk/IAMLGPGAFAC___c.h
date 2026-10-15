#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMLGPGAFAC;
namespace System { class Object; }

#define IAMLGPGAFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DBF20)
#define IAMLGPGAFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DBF60)
#define IAMLGPGAFAC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5DBF70)

inline static constexpr unsigned int IAMLGPGAFAC___c_TypeDefinitionIndex = 34488;

	class IAMLGPGAFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x418C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C_CTOR_OFFSET))(this);
		}

		::IAMLGPGAFAC* __cctor_b__23_0()
		{
			return ((::IAMLGPGAFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMLGPGAFAC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
