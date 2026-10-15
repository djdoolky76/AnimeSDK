#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKCCLEEPELM;
namespace System { class Object; }

#define OKCCLEEPELM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE63AD0)
#define OKCCLEEPELM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE63B00)
#define OKCCLEEPELM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE63B10)

inline static constexpr unsigned int OKCCLEEPELM___c_TypeDefinitionIndex = 33076;

	class OKCCLEEPELM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKCCLEEPELM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM___C_CTOR_OFFSET))(this);
		}

		::OKCCLEEPELM* __cctor_b__28_0()
		{
			return ((::OKCCLEEPELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCCLEEPELM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
