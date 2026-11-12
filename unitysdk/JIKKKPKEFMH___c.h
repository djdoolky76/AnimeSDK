#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIKKKPKEFMH;
namespace System { class Object; }

#define JIKKKPKEFMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA5FDF0)
#define JIKKKPKEFMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5FE30)
#define JIKKKPKEFMH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA5FE40)

inline static constexpr unsigned int JIKKKPKEFMH___c_TypeDefinitionIndex = 33896;

	class JIKKKPKEFMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIKKKPKEFMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH___C_CTOR_OFFSET))(this);
		}

		::JIKKKPKEFMH* __cctor_b__28_0()
		{
			return ((::JIKKKPKEFMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
