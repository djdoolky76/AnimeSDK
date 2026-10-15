#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAIJCBOKIFO;
namespace System { class Object; }

#define PAIJCBOKIFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF2C0)
#define PAIJCBOKIFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEF300)
#define PAIJCBOKIFO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DEEF310)

inline static constexpr unsigned int PAIJCBOKIFO___c_TypeDefinitionIndex = 32639;

	class PAIJCBOKIFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAIJCBOKIFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJCBOKIFO___C_CTOR_OFFSET))(this);
		}

		::PAIJCBOKIFO* __cctor_b__43_0()
		{
			return ((::PAIJCBOKIFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIJCBOKIFO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
