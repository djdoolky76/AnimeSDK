#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKLLJELADJ;
namespace System { class Object; }

#define NJKLLJELADJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F03AB50)
#define NJKLLJELADJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F03AB90)
#define NJKLLJELADJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F03ABA0)

inline static constexpr unsigned int NJKLLJELADJ___c_TypeDefinitionIndex = 26922;

	class NJKLLJELADJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKLLJELADJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ___C_CTOR_OFFSET))(this);
		}

		::NJKLLJELADJ* __cctor_b__33_0()
		{
			return ((::NJKLLJELADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKLLJELADJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
