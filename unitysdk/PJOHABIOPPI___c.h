#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJOHABIOPPI;
namespace System { class Object; }

#define PJOHABIOPPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF82E70)
#define PJOHABIOPPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF82EB0)
#define PJOHABIOPPI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DF82EC0)

inline static constexpr unsigned int PJOHABIOPPI___c_TypeDefinitionIndex = 29832;

	class PJOHABIOPPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x475D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJOHABIOPPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI___C_CTOR_OFFSET))(this);
		}

		::PJOHABIOPPI* __cctor_b__48_0()
		{
			return ((::PJOHABIOPPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
