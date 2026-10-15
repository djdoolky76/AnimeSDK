#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBHAKEHLEC;
namespace System { class Object; }

#define FBBHAKEHLEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E302030)
#define FBBHAKEHLEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E302070)
#define FBBHAKEHLEC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E302080)

inline static constexpr unsigned int FBBHAKEHLEC___c_TypeDefinitionIndex = 26770;

	class FBBHAKEHLEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBHAKEHLEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC___C_CTOR_OFFSET))(this);
		}

		::FBBHAKEHLEC* __cctor_b__23_0()
		{
			return ((::FBBHAKEHLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
