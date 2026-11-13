#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMMMDEEIJKC;
namespace System { class Object; }

#define HMMMDEEIJKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE214F0)
#define HMMMDEEIJKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE21530)
#define HMMMDEEIJKC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE21540)

inline static constexpr unsigned int HMMMDEEIJKC___c_TypeDefinitionIndex = 26643;

	class HMMMDEEIJKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMMDEEIJKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMMDEEIJKC___C_CTOR_OFFSET))(this);
		}

		::HMMMDEEIJKC* __cctor_b__33_0()
		{
			return ((::HMMMDEEIJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMMDEEIJKC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
