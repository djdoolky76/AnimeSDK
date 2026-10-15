#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCOHBABCHAI;
namespace System { class Object; }

#define CCOHBABCHAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E050F30)
#define CCOHBABCHAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E050F70)
#define CCOHBABCHAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E050F80)

inline static constexpr unsigned int CCOHBABCHAI___c_TypeDefinitionIndex = 31098;

	class CCOHBABCHAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCOHBABCHAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI___C_CTOR_OFFSET))(this);
		}

		::CCOHBABCHAI* __cctor_b__28_0()
		{
			return ((::CCOHBABCHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCOHBABCHAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
