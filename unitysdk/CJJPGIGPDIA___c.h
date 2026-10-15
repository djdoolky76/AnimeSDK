#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJPGIGPDIA;
namespace System { class Object; }

#define CJJPGIGPDIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4BD0)
#define CJJPGIGPDIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4C10)
#define CJJPGIGPDIA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0B4C20)

inline static constexpr unsigned int CJJPGIGPDIA___c_TypeDefinitionIndex = 30169;

	class CJJPGIGPDIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJJPGIGPDIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA___C_CTOR_OFFSET))(this);
		}

		::CJJPGIGPDIA* __cctor_b__23_0()
		{
			return ((::CJJPGIGPDIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
