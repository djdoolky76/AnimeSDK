#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAFEAJCJIB;
namespace System { class Object; }

#define JDAFEAJCJIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E706DB0)
#define JDAFEAJCJIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E706DF0)
#define JDAFEAJCJIB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E706E00)

inline static constexpr unsigned int JDAFEAJCJIB___c_TypeDefinitionIndex = 32061;

	class JDAFEAJCJIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAFEAJCJIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB___C_CTOR_OFFSET))(this);
		}

		::JDAFEAJCJIB* __cctor_b__28_0()
		{
			return ((::JDAFEAJCJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAFEAJCJIB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
