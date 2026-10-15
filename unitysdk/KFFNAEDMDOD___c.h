#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFFNAEDMDOD;
namespace System { class Object; }

#define KFFNAEDMDOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EB420)
#define KFFNAEDMDOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EB460)
#define KFFNAEDMDOD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7EB470)

inline static constexpr unsigned int KFFNAEDMDOD___c_TypeDefinitionIndex = 27344;

	class KFFNAEDMDOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12970);
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
