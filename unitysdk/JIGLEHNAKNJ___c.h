#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIGLEHNAKNJ;
namespace System { class Object; }

#define JIGLEHNAKNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E71F470)
#define JIGLEHNAKNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F4B0)
#define JIGLEHNAKNJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E71F4C0)

inline static constexpr unsigned int JIGLEHNAKNJ___c_TypeDefinitionIndex = 33056;

	class JIGLEHNAKNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGLEHNAKNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ___C_CTOR_OFFSET))(this);
		}

		::JIGLEHNAKNJ* __cctor_b__28_0()
		{
			return ((::JIGLEHNAKNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGLEHNAKNJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
