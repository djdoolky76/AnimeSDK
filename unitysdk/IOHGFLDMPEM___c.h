#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHGFLDMPEM;
namespace System { class Object; }

#define IOHGFLDMPEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DDC20)
#define IOHGFLDMPEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DDC60)
#define IOHGFLDMPEM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9DDC70)

inline static constexpr unsigned int IOHGFLDMPEM___c_TypeDefinitionIndex = 31089;

	class IOHGFLDMPEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x583D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHGFLDMPEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM___C_CTOR_OFFSET))(this);
		}

		::IOHGFLDMPEM* __cctor_b__23_0()
		{
			return ((::IOHGFLDMPEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHGFLDMPEM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
