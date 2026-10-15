#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAGAEJHEJH;
namespace System { class Object; }

#define BFAGAEJHEJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA39990)
#define BFAGAEJHEJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA399C0)
#define BFAGAEJHEJH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA399D0)

inline static constexpr unsigned int BFAGAEJHEJH___c_TypeDefinitionIndex = 33951;

	class BFAGAEJHEJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x537F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAGAEJHEJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH___C_CTOR_OFFSET))(this);
		}

		::BFAGAEJHEJH* __cctor_b__38_0()
		{
			return ((::BFAGAEJHEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAGAEJHEJH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
