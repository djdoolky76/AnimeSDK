#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
namespace System { class Object; }

#define FHEGNOPNICH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6738D0)
#define FHEGNOPNICH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F673900)
#define FHEGNOPNICH___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F673910)

inline static constexpr unsigned int FHEGNOPNICH___c_TypeDefinitionIndex = 33244;

	class FHEGNOPNICH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHEGNOPNICH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGNOPNICH___C_CTOR_OFFSET))(this);
		}

		::FHEGNOPNICH* __cctor_b__53_0()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEGNOPNICH___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
