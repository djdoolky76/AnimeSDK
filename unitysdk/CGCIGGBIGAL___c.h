#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGCIGGBIGAL;
namespace System { class Object; }

#define CGCIGGBIGAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD246E0)
#define CGCIGGBIGAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD24720)
#define CGCIGGBIGAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD24730)

inline static constexpr unsigned int CGCIGGBIGAL___c_TypeDefinitionIndex = 26531;

	class CGCIGGBIGAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGCIGGBIGAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL___C_CTOR_OFFSET))(this);
		}

		::CGCIGGBIGAL* __cctor_b__28_0()
		{
			return ((::CGCIGGBIGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
