#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOIBLFFDHDG;
namespace System { class Object; }

#define DOIBLFFDHDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F759B90)
#define DOIBLFFDHDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F759BD0)
#define DOIBLFFDHDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F759BE0)

inline static constexpr unsigned int DOIBLFFDHDG___c_TypeDefinitionIndex = 29116;

	class DOIBLFFDHDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIBLFFDHDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG___C_CTOR_OFFSET))(this);
		}

		::DOIBLFFDHDG* __cctor_b__28_0()
		{
			return ((::DOIBLFFDHDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBLFFDHDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
