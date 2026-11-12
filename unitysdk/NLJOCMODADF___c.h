#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLJOCMODADF;
namespace System { class Object; }

#define NLJOCMODADF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F056430)
#define NLJOCMODADF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F056470)
#define NLJOCMODADF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F056480)

inline static constexpr unsigned int NLJOCMODADF___c_TypeDefinitionIndex = 28336;

	class NLJOCMODADF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLJOCMODADF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF___C_CTOR_OFFSET))(this);
		}

		::NLJOCMODADF* __cctor_b__38_0()
		{
			return ((::NLJOCMODADF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJOCMODADF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
