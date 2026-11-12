#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JILFBOOFKEO;
namespace System { class Object; }

#define JILFBOOFKEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7D730)
#define JILFBOOFKEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7D770)
#define JILFBOOFKEO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA7D780)

inline static constexpr unsigned int JILFBOOFKEO___c_TypeDefinitionIndex = 27961;

	class JILFBOOFKEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JILFBOOFKEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO___C_CTOR_OFFSET))(this);
		}

		::JILFBOOFKEO* __cctor_b__33_0()
		{
			return ((::JILFBOOFKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JILFBOOFKEO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
