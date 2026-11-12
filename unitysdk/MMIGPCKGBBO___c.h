#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMIGPCKGBBO;
namespace System { class Object; }

#define MMIGPCKGBBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC3FD0)
#define MMIGPCKGBBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC4010)
#define MMIGPCKGBBO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FDC4020)

inline static constexpr unsigned int MMIGPCKGBBO___c_TypeDefinitionIndex = 33222;

	class MMIGPCKGBBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMIGPCKGBBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO___C_CTOR_OFFSET))(this);
		}

		::MMIGPCKGBBO* __cctor_b__38_0()
		{
			return ((::MMIGPCKGBBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGPCKGBBO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
