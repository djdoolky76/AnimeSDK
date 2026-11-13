#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPACONNFP;
namespace System { class Object; }

#define EGMPACONNFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF828D0)
#define EGMPACONNFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF82900)
#define EGMPACONNFP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF82910)

inline static constexpr unsigned int EGMPACONNFP___c_TypeDefinitionIndex = 34052;

	class EGMPACONNFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BA50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGMPACONNFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP___C_CTOR_OFFSET))(this);
		}

		::EGMPACONNFP* __cctor_b__33_0()
		{
			return ((::EGMPACONNFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGMPACONNFP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
