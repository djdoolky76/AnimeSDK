#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFDAMIHLMLF;
namespace System { class Object; }

#define JFDAMIHLMLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA35AB0)
#define JFDAMIHLMLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA35AF0)
#define JFDAMIHLMLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA35B00)

inline static constexpr unsigned int JFDAMIHLMLF___c_TypeDefinitionIndex = 34760;

	class JFDAMIHLMLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDAMIHLMLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF___C_CTOR_OFFSET))(this);
		}

		::JFDAMIHLMLF* __cctor_b__28_0()
		{
			return ((::JFDAMIHLMLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
