#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFADBBMPDMM;
namespace System { class Object; }

#define OFADBBMPDMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE08110)
#define OFADBBMPDMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE08150)
#define OFADBBMPDMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE08160)

inline static constexpr unsigned int OFADBBMPDMM___c_TypeDefinitionIndex = 29713;

	class OFADBBMPDMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFADBBMPDMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM___C_CTOR_OFFSET))(this);
		}

		::OFADBBMPDMM* __cctor_b__23_0()
		{
			return ((::OFADBBMPDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFADBBMPDMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
