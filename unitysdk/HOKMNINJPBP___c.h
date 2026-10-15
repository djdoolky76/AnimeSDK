#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKMNINJPBP;
namespace System { class Object; }

#define HOKMNINJPBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BEF10)
#define HOKMNINJPBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BEF50)
#define HOKMNINJPBP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5BEF60)

inline static constexpr unsigned int HOKMNINJPBP___c_TypeDefinitionIndex = 27798;

	class HOKMNINJPBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKMNINJPBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKMNINJPBP___C_CTOR_OFFSET))(this);
		}

		::HOKMNINJPBP* __cctor_b__43_0()
		{
			return ((::HOKMNINJPBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKMNINJPBP___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
