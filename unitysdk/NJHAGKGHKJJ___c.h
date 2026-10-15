#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHAGKGHKJJ;
namespace System { class Object; }

#define NJHAGKGHKJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F5C0)
#define NJHAGKGHKJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3F600)
#define NJHAGKGHKJJ___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1EB3F610)

inline static constexpr unsigned int NJHAGKGHKJJ___c_TypeDefinitionIndex = 31172;

	class NJHAGKGHKJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHAGKGHKJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHAGKGHKJJ___C_CTOR_OFFSET))(this);
		}

		::NJHAGKGHKJJ* __cctor_b__63_0()
		{
			return ((::NJHAGKGHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHAGKGHKJJ___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
