#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPJOPMMLOA;
namespace System { class Object; }

#define KPPJOPMMLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E896910)
#define KPPJOPMMLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E896950)
#define KPPJOPMMLOA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E896960)

inline static constexpr unsigned int KPPJOPMMLOA___c_TypeDefinitionIndex = 25780;

	class KPPJOPMMLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C_CTOR_OFFSET))(this);
		}

		::KPPJOPMMLOA* __cctor_b__23_0()
		{
			return ((::KPPJOPMMLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPJOPMMLOA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
