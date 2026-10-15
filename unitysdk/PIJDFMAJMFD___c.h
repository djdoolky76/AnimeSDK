#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIJDFMAJMFD;
namespace System { class Object; }

#define PIJDFMAJMFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF69CF0)
#define PIJDFMAJMFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF69D20)
#define PIJDFMAJMFD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF69D30)

inline static constexpr unsigned int PIJDFMAJMFD___c_TypeDefinitionIndex = 33054;

	class PIJDFMAJMFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIJDFMAJMFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD___C_CTOR_OFFSET))(this);
		}

		::PIJDFMAJMFD* __cctor_b__23_0()
		{
			return ((::PIJDFMAJMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJDFMAJMFD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
