#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHCMCLJHEGJ;
namespace System { class Object; }

#define BHCMCLJHEGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20116700)
#define BHCMCLJHEGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20116740)
#define BHCMCLJHEGJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20116750)

inline static constexpr unsigned int BHCMCLJHEGJ___c_TypeDefinitionIndex = 29604;

	class BHCMCLJHEGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHCMCLJHEGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCMCLJHEGJ___C_CTOR_OFFSET))(this);
		}

		::BHCMCLJHEGJ* __cctor_b__38_0()
		{
			return ((::BHCMCLJHEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCMCLJHEGJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
