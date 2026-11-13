#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNKAOFDGLIE;
namespace System { class Object; }

#define HNKAOFDGLIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20034110)
#define HNKAOFDGLIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20034150)
#define HNKAOFDGLIE___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x20034160)

inline static constexpr unsigned int HNKAOFDGLIE___c_TypeDefinitionIndex = 33576;

	class HNKAOFDGLIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKAOFDGLIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAOFDGLIE___C_CTOR_OFFSET))(this);
		}

		::HNKAOFDGLIE* __cctor_b__68_0()
		{
			return ((::HNKAOFDGLIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAOFDGLIE___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
