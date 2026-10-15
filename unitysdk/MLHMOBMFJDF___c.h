#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLHMOBMFJDF;
namespace System { class Object; }

#define MLHMOBMFJDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA54FB0)
#define MLHMOBMFJDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA54FF0)
#define MLHMOBMFJDF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA55000)

inline static constexpr unsigned int MLHMOBMFJDF___c_TypeDefinitionIndex = 34442;

	class MLHMOBMFJDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLHMOBMFJDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF___C_CTOR_OFFSET))(this);
		}

		::MLHMOBMFJDF* __cctor_b__23_0()
		{
			return ((::MLHMOBMFJDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHMOBMFJDF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
