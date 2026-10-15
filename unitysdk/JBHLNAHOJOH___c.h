#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBHLNAHOJOH;
namespace System { class Object; }

#define JBHLNAHOJOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C9970)
#define JBHLNAHOJOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C99B0)
#define JBHLNAHOJOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6C99C0)

inline static constexpr unsigned int JBHLNAHOJOH___c_TypeDefinitionIndex = 26766;

	class JBHLNAHOJOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBHLNAHOJOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHLNAHOJOH___C_CTOR_OFFSET))(this);
		}

		::JBHLNAHOJOH* __cctor_b__33_0()
		{
			return ((::JBHLNAHOJOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBHLNAHOJOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
