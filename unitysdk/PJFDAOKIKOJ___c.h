#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFDAOKIKOJ;
namespace System { class Object; }

#define PJFDAOKIKOJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF49590)
#define PJFDAOKIKOJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF495D0)
#define PJFDAOKIKOJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF495E0)

inline static constexpr unsigned int PJFDAOKIKOJ___c_TypeDefinitionIndex = 28272;

	class PJFDAOKIKOJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFDAOKIKOJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ___C_CTOR_OFFSET))(this);
		}

		::PJFDAOKIKOJ* __cctor_b__23_0()
		{
			return ((::PJFDAOKIKOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFDAOKIKOJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
