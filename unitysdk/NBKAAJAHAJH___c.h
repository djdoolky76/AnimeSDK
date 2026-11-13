#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBKAAJAHAJH;
namespace System { class Object; }

#define NBKAAJAHAJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015D150)
#define NBKAAJAHAJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2015D190)
#define NBKAAJAHAJH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2015D1A0)

inline static constexpr unsigned int NBKAAJAHAJH___c_TypeDefinitionIndex = 34495;

	class NBKAAJAHAJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBKAAJAHAJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH___C_CTOR_OFFSET))(this);
		}

		::NBKAAJAHAJH* __cctor_b__23_0()
		{
			return ((::NBKAAJAHAJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKAAJAHAJH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
