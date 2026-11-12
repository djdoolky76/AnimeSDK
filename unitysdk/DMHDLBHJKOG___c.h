#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHDLBHJKOG;
namespace System { class Object; }

#define DMHDLBHJKOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CBAE0)
#define DMHDLBHJKOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CBB20)
#define DMHDLBHJKOG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4CBB30)

inline static constexpr unsigned int DMHDLBHJKOG___c_TypeDefinitionIndex = 34531;

	class DMHDLBHJKOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C_CTOR_OFFSET))(this);
		}

		::DMHDLBHJKOG* __cctor_b__23_0()
		{
			return ((::DMHDLBHJKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHDLBHJKOG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
