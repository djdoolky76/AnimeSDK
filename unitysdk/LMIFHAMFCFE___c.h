#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMIFHAMFCFE;
namespace System { class Object; }

#define LMIFHAMFCFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E978860)
#define LMIFHAMFCFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9788A0)
#define LMIFHAMFCFE___C___CCTOR_B__44_0_OFFSET UNITYSDK_OFFSET(0x1E9788B0)

inline static constexpr unsigned int LMIFHAMFCFE___c_TypeDefinitionIndex = 29427;

	class LMIFHAMFCFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C_CTOR_OFFSET))(this);
		}

		::LMIFHAMFCFE* __cctor_b__44_0()
		{
			return ((::LMIFHAMFCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIFHAMFCFE___C___CCTOR_B__44_0_OFFSET))(this);
		}

	};
