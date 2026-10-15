#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMKIHKJAMPJ;
namespace System { class Object; }

#define DMKIHKJAMPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C3820)
#define DMKIHKJAMPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C3860)
#define DMKIHKJAMPJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C3870)

inline static constexpr unsigned int DMKIHKJAMPJ___c_TypeDefinitionIndex = 34687;

	class DMKIHKJAMPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x367A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMKIHKJAMPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ___C_CTOR_OFFSET))(this);
		}

		::DMKIHKJAMPJ* __cctor_b__28_0()
		{
			return ((::DMKIHKJAMPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMKIHKJAMPJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
