#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMEKJABIGGH;
namespace System { class Object; }

#define NMEKJABIGGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB730E0)
#define NMEKJABIGGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB73120)
#define NMEKJABIGGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB73130)

inline static constexpr unsigned int NMEKJABIGGH___c_TypeDefinitionIndex = 30088;

	class NMEKJABIGGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMEKJABIGGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH___C_CTOR_OFFSET))(this);
		}

		::NMEKJABIGGH* __cctor_b__28_0()
		{
			return ((::NMEKJABIGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEKJABIGGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
