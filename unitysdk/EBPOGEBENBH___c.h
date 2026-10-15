#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBPOGEBENBH;
namespace System { class Object; }

#define EBPOGEBENBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E21EAD0)
#define EBPOGEBENBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E21EB10)
#define EBPOGEBENBH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E21EB20)

inline static constexpr unsigned int EBPOGEBENBH___c_TypeDefinitionIndex = 26718;

	class EBPOGEBENBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBPOGEBENBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH___C_CTOR_OFFSET))(this);
		}

		::EBPOGEBENBH* __cctor_b__33_0()
		{
			return ((::EBPOGEBENBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBPOGEBENBH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
