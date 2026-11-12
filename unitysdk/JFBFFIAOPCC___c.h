#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFBFFIAOPCC;
namespace System { class Object; }

#define JFBFFIAOPCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA31D20)
#define JFBFFIAOPCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA31D50)
#define JFBFFIAOPCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA31D60)

inline static constexpr unsigned int JFBFFIAOPCC___c_TypeDefinitionIndex = 27414;

	class JFBFFIAOPCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x626B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBFFIAOPCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC___C_CTOR_OFFSET))(this);
		}

		::JFBFFIAOPCC* __cctor_b__23_0()
		{
			return ((::JFBFFIAOPCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBFFIAOPCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
