#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIKEONGNHEH;
namespace System { class Object; }

#define GIKEONGNHEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4701B0)
#define GIKEONGNHEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4701F0)
#define GIKEONGNHEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E470200)

inline static constexpr unsigned int GIKEONGNHEH___c_TypeDefinitionIndex = 26124;

	class GIKEONGNHEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKEONGNHEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEONGNHEH___C_CTOR_OFFSET))(this);
		}

		::GIKEONGNHEH* __cctor_b__23_0()
		{
			return ((::GIKEONGNHEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKEONGNHEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
