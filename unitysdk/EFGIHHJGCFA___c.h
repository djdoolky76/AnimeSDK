#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGIHHJGCFA;
namespace System { class Object; }

#define EFGIHHJGCFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E261740)
#define EFGIHHJGCFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E261770)
#define EFGIHHJGCFA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E261780)

inline static constexpr unsigned int EFGIHHJGCFA___c_TypeDefinitionIndex = 26031;

	class EFGIHHJGCFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFGIHHJGCFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA___C_CTOR_OFFSET))(this);
		}

		::EFGIHHJGCFA* __cctor_b__28_0()
		{
			return ((::EFGIHHJGCFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGIHHJGCFA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
