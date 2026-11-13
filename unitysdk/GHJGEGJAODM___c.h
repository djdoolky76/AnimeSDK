#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHJGEGJAODM;
namespace System { class Object; }

#define GHJGEGJAODM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2027A7A0)
#define GHJGEGJAODM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2027A7E0)
#define GHJGEGJAODM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2027A7F0)

inline static constexpr unsigned int GHJGEGJAODM___c_TypeDefinitionIndex = 29686;

	class GHJGEGJAODM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFC20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJGEGJAODM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM___C_CTOR_OFFSET))(this);
		}

		::GHJGEGJAODM* __cctor_b__23_0()
		{
			return ((::GHJGEGJAODM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJGEGJAODM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
