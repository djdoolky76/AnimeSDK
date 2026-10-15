#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCLDADIKLEG;
namespace System { class Object; }

#define GCLDADIKLEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E413CB0)
#define GCLDADIKLEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E413CF0)
#define GCLDADIKLEG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E413D00)

inline static constexpr unsigned int GCLDADIKLEG___c_TypeDefinitionIndex = 29852;

	class GCLDADIKLEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCLDADIKLEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG___C_CTOR_OFFSET))(this);
		}

		::GCLDADIKLEG* __cctor_b__28_0()
		{
			return ((::GCLDADIKLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCLDADIKLEG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
