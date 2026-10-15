#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIPHBIACDPH;
namespace System { class Object; }

#define JIPHBIACDPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72A480)
#define JIPHBIACDPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72A4C0)
#define JIPHBIACDPH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E72A4D0)

inline static constexpr unsigned int JIPHBIACDPH___c_TypeDefinitionIndex = 28486;

	class JIPHBIACDPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIPHBIACDPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH___C_CTOR_OFFSET))(this);
		}

		::JIPHBIACDPH* __cctor_b__38_0()
		{
			return ((::JIPHBIACDPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPHBIACDPH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
