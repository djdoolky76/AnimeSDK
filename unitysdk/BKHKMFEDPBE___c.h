#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHKMFEDPBE;
namespace System { class Object; }

#define BKHKMFEDPBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2AF80)
#define BKHKMFEDPBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2AFC0)
#define BKHKMFEDPBE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF2AFD0)

inline static constexpr unsigned int BKHKMFEDPBE___c_TypeDefinitionIndex = 25985;

	class BKHKMFEDPBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHKMFEDPBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE___C_CTOR_OFFSET))(this);
		}

		::BKHKMFEDPBE* __cctor_b__28_0()
		{
			return ((::BKHKMFEDPBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHKMFEDPBE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
