#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNAOCJBLPPC;
namespace System { class Object; }

#define JNAOCJBLPPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFFB360)
#define JNAOCJBLPPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFFB3A0)
#define JNAOCJBLPPC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FFFB3B0)

inline static constexpr unsigned int JNAOCJBLPPC___c_TypeDefinitionIndex = 32996;

	class JNAOCJBLPPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNAOCJBLPPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC___C_CTOR_OFFSET))(this);
		}

		::JNAOCJBLPPC* __cctor_b__38_0()
		{
			return ((::JNAOCJBLPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNAOCJBLPPC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
