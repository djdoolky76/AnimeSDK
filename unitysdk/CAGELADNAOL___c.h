#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGELADNAOL;
namespace System { class Object; }

#define CAGELADNAOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2034D180)
#define CAGELADNAOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2034D1B0)
#define CAGELADNAOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2034D1C0)

inline static constexpr unsigned int CAGELADNAOL___c_TypeDefinitionIndex = 33294;

	class CAGELADNAOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAGELADNAOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELADNAOL___C_CTOR_OFFSET))(this);
		}

		::CAGELADNAOL* __cctor_b__33_0()
		{
			return ((::CAGELADNAOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELADNAOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
