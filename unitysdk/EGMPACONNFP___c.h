#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGMPACONNFP;
namespace System { class Object; }

#define EGMPACONNFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29A150)
#define EGMPACONNFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29A180)
#define EGMPACONNFP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E29A190)

inline static constexpr unsigned int EGMPACONNFP___c_TypeDefinitionIndex = 33137;

	class EGMPACONNFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A30);
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
