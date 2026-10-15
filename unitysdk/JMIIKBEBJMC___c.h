#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMIIKBEBJMC;
namespace System { class Object; }

#define JMIIKBEBJMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78CFE0)
#define JMIIKBEBJMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78D020)
#define JMIIKBEBJMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E78D030)

inline static constexpr unsigned int JMIIKBEBJMC___c_TypeDefinitionIndex = 29814;

	class JMIIKBEBJMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMIIKBEBJMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC___C_CTOR_OFFSET))(this);
		}

		::JMIIKBEBJMC* __cctor_b__23_0()
		{
			return ((::JMIIKBEBJMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIIKBEBJMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
