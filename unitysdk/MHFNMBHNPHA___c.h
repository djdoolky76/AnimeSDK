#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHFNMBHNPHA;
namespace System { class Object; }

#define MHFNMBHNPHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30190)
#define MHFNMBHNPHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA301C0)
#define MHFNMBHNPHA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EA301D0)

inline static constexpr unsigned int MHFNMBHNPHA___c_TypeDefinitionIndex = 26441;

	class MHFNMBHNPHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x514C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHFNMBHNPHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFNMBHNPHA___C_CTOR_OFFSET))(this);
		}

		::MHFNMBHNPHA* __cctor_b__48_0()
		{
			return ((::MHFNMBHNPHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHFNMBHNPHA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
