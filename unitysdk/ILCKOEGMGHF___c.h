#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCKOEGMGHF;
namespace System { class Object; }

#define ILCKOEGMGHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206AFE80)
#define ILCKOEGMGHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206AFEC0)
#define ILCKOEGMGHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x206AFED0)

inline static constexpr unsigned int ILCKOEGMGHF___c_TypeDefinitionIndex = 28461;

	class ILCKOEGMGHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCKOEGMGHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF___C_CTOR_OFFSET))(this);
		}

		::ILCKOEGMGHF* __cctor_b__28_0()
		{
			return ((::ILCKOEGMGHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCKOEGMGHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
