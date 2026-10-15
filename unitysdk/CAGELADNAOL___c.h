#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGELADNAOL;
namespace System { class Object; }

#define CAGELADNAOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E059D60)
#define CAGELADNAOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E059D90)
#define CAGELADNAOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E059DA0)

inline static constexpr unsigned int CAGELADNAOL___c_TypeDefinitionIndex = 32381;

	class CAGELADNAOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x566A0);
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
