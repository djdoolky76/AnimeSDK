#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOELPDDJGFJ;
namespace System { class Object; }

#define IOELPDDJGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9DBAC0)
#define IOELPDDJGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9DBB00)
#define IOELPDDJGFJ___C___CCTOR_B__149_0_OFFSET UNITYSDK_OFFSET(0x1F9DBB10)

inline static constexpr unsigned int IOELPDDJGFJ___c_TypeDefinitionIndex = 27694;

	class IOELPDDJGFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C_CTOR_OFFSET))(this);
		}

		::IOELPDDJGFJ* __cctor_b__149_0()
		{
			return ((::IOELPDDJGFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOELPDDJGFJ___C___CCTOR_B__149_0_OFFSET))(this);
		}

	};
