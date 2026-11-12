#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFFNAEDMDOD;
namespace System { class Object; }

#define KFFNAEDMDOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB2F040)
#define KFFNAEDMDOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB2F080)
#define KFFNAEDMDOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB2F090)

inline static constexpr unsigned int KFFNAEDMDOD___c_TypeDefinitionIndex = 27875;

	class KFFNAEDMDOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xB720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFFNAEDMDOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD___C_CTOR_OFFSET))(this);
		}

		::KFFNAEDMDOD* __cctor_b__23_0()
		{
			return ((::KFFNAEDMDOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFNAEDMDOD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
