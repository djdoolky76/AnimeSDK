#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHNMJPLALEC;
namespace System { class Object; }

#define CHNMJPLALEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F83EC00)
#define CHNMJPLALEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F83EC40)
#define CHNMJPLALEC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F83EC50)

inline static constexpr unsigned int CHNMJPLALEC___c_TypeDefinitionIndex = 27157;

	class CHNMJPLALEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHNMJPLALEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC___C_CTOR_OFFSET))(this);
		}

		::CHNMJPLALEC* __cctor_b__28_0()
		{
			return ((::CHNMJPLALEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNMJPLALEC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
