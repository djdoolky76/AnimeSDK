#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBKLKIAJPDD;
namespace System { class Object; }

#define MBKLKIAJPDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA1F0)
#define MBKLKIAJPDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA230)
#define MBKLKIAJPDD___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E9BA240)

inline static constexpr unsigned int MBKLKIAJPDD___c_TypeDefinitionIndex = 31196;

	class MBKLKIAJPDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBKLKIAJPDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKLKIAJPDD___C_CTOR_OFFSET))(this);
		}

		::MBKLKIAJPDD* __cctor_b__58_0()
		{
			return ((::MBKLKIAJPDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBKLKIAJPDD___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
