#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNPHLAHJPOB;
namespace System { class Object; }

#define HNPHLAHJPOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E04E0)
#define HNPHLAHJPOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E0520)
#define HNPHLAHJPOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8E0530)

inline static constexpr unsigned int HNPHLAHJPOB___c_TypeDefinitionIndex = 30201;

	class HNPHLAHJPOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C_CTOR_OFFSET))(this);
		}

		::HNPHLAHJPOB* __cctor_b__28_0()
		{
			return ((::HNPHLAHJPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
