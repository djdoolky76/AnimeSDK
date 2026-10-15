#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBHLNAHOJOH;
namespace System { class Object; }

#define JBHLNAHOJOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F6F90)
#define JBHLNAHOJOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F6FD0)
#define JBHLNAHOJOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6F6FE0)

inline static constexpr unsigned int JBHLNAHOJOH___c_TypeDefinitionIndex = 26766;

	class JBHLNAHOJOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C820);
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
