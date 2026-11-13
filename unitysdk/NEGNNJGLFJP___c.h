#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEGNNJGLFJP;
namespace System { class Object; }

#define NEGNNJGLFJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE8FD70)
#define NEGNNJGLFJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE8FDB0)
#define NEGNNJGLFJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE8FDC0)

inline static constexpr unsigned int NEGNNJGLFJP___c_TypeDefinitionIndex = 27851;

	class NEGNNJGLFJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C_CTOR_OFFSET))(this);
		}

		::NEGNNJGLFJP* __cctor_b__23_0()
		{
			return ((::NEGNNJGLFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGNNJGLFJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
