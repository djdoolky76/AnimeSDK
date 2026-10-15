#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJCBIAEMLDN;
namespace System { class Object; }

#define LJCBIAEMLDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E949D90)
#define LJCBIAEMLDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E949DD0)
#define LJCBIAEMLDN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E949DE0)

inline static constexpr unsigned int LJCBIAEMLDN___c_TypeDefinitionIndex = 30335;

	class LJCBIAEMLDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x385A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJCBIAEMLDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN___C_CTOR_OFFSET))(this);
		}

		::LJCBIAEMLDN* __cctor_b__23_0()
		{
			return ((::LJCBIAEMLDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCBIAEMLDN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
