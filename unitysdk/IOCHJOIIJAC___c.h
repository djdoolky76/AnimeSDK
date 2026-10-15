#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOCHJOIIJAC;
namespace System { class Object; }

#define IOCHJOIIJAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CAA60)
#define IOCHJOIIJAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CAAA0)
#define IOCHJOIIJAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6CAAB0)

inline static constexpr unsigned int IOCHJOIIJAC___c_TypeDefinitionIndex = 34440;

	class IOCHJOIIJAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x593B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOCHJOIIJAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC___C_CTOR_OFFSET))(this);
		}

		::IOCHJOIIJAC* __cctor_b__28_0()
		{
			return ((::IOCHJOIIJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCHJOIIJAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
