#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOJKCGOBJL;
namespace System { class Object; }

#define OBOJKCGOBJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9E10)
#define OBOJKCGOBJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A9E50)
#define OBOJKCGOBJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0A9E60)

inline static constexpr unsigned int OBOJKCGOBJL___c_TypeDefinitionIndex = 30573;

	class OBOJKCGOBJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOJKCGOBJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL___C_CTOR_OFFSET))(this);
		}

		::OBOJKCGOBJL* __cctor_b__28_0()
		{
			return ((::OBOJKCGOBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOJKCGOBJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
